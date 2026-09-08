####################################################################
# Name          : common.i
# Description   : Defines common macros for interfacing with runtime
# Author        : K.M.Hussain
# Licence       : Educational
#####################################################################

.intel_syntax noprefix
.section .note.GNU-stack, "", @progbits
.text

#Begins execution of the program
.macro  .start entry
.text
.align  8
.global _start
_start:
        .ifnb \entry
        mov     rdi, offset \entry
        .else
        mov     rdi, 0
        .endif
        call    __startexec
.endm

#Ends execution of the program
.macro  .stop
_stop:
        call    __stopexec
 .endm

#PutStr - Outputs a string.
.macro  PutStr  value, len
        push    rdi
        push    rsi
        .ifnb   \len
        mov     rsi, \len
        mov     rdi, \value
        .else
        mov     rsi, 0
        mov     rdi, offset \value
        .endif
        call    __writestr
        pop     rsi
        pop     rdi
.endm

#PutInt - Outputs a quad-word integer in rax or another register identified by value
.macro  PutInt  prompt, value
        .ifnb   \prompt
        PutStr  \prompt
        .endif
        push    rdi
        push    rsi
        .ifnb   \value
        mov     rdi, \value
        .else
        mov     rdi, rax
        .endif
        call    __writeint
        mov     rdi, '\n'
        mov     rsi, 1
        call    __writestr
        pop     rsi
        pop     rdi
.endm

#GetInt - Inputs a quad-word integer in rax or another register identified by value
.macro  GetInt prompt, value
        .ifnb   \prompt
        PutStr  \prompt
        .endif
        .ifnb   \value
        push    rax
        .endif
        call    __readint
        .ifnb   \value
        mov     \value, rax
        pop     rax
        .endif
.endm

#PutDec - Outputs a fixed-point decimal in xmm0 or another register identified by value
.macro  PutDec  prompt, value
        .ifnb   \prompt
        PutStr  \prompt
        .endif
        .ifnb   \value
        sub     rsp, 16
        movdqu  [rsp], xmm0
        movsd   xmm0, \value
        .endif
        call    __writedec
        push    rsi
        push    rdi
        mov     rdi, '\n'
        mov     rsi, 1
        call    __writestr
        pop     rdi
        pop     rsi
        .ifnb   \value
        movdqu  xmm0, [rsp]
        add     rsp, 16
        .endif
.endm

#GetDec - Inputs a fixed-point decimal in xmm0 or another register identified by value
.macro  GetDec  prompt, value
        .ifnb   \prompt
        PutStr  \prompt
        .endif
        .ifnb   \value
        sub     rsp, 16
        movdqu  [rsp], xmm0
        .endif
        call    __readdec
        .ifnb   \value
        movsd   \value, xmm0
        movdqu  xmm0, [rsp]
        add     rsp, 16
        .endif
.endm



