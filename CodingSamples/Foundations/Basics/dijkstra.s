        .include "common.i"

gcd:    #procedure to calculate G.C.D of two positive integers
1:      cmp     rdi, rsi
        je      3f
        jg      2f
        sub     rsi, rdi
        jmp     1b
2:      sub     rdi, rsi
        jmp     1b
3:      mov     rax, rdi
        ret

        .global gcd
        .type   gcd, %function


        .end
