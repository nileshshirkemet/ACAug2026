	.file	"hllangtest1.c"
	.text
	.globl	_start
	.type	_start, @function
_start:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	main(%rip), %rax
	movq	%rax, %rdi
	call	__startexec@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_start, .-_start
	.globl	GetInt
	.type	GetInt, @function
GetInt:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	__writestr@PLT
	call	__readint@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	GetInt, .-GetInt
	.globl	GetDec
	.type	GetDec, @function
GetDec:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	__writestr@PLT
	call	__readdec@PLT
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	GetDec, .-GetDec
	.section	.rodata
.LC0:
	.string	"Lower Limit: "
.LC1:
	.string	"Upper Limit: "
.LC2:
	.string	"Result = "
.LC3:
	.string	"Goodbye!\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	GetInt
	movq	%rax, -24(%rbp)
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	GetInt
	movq	%rax, -16(%rbp)
	movq	-24(%rbp), %rax
	cmpq	-16(%rbp), %rax
	jg	.L7
	movq	-16(%rbp), %rax
	addq	$1, %rax
	imulq	-16(%rbp), %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	movq	%rax, %rcx
	movq	-24(%rbp), %rax
	subq	$1, %rax
	imulq	-24(%rbp), %rax
	movq	%rax, %rdx
	shrq	$63, %rdx
	addq	%rdx, %rax
	sarq	%rax
	negq	%rax
	addq	%rcx, %rax
	movq	%rax, -8(%rbp)
	movl	$0, %esi
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	__writestr@PLT
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	__writeint@PLT
	movl	$1, %esi
	movl	$10, %edi
	call	__writestr@PLT
.L7:
	movl	$0, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	__writestr@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04.1) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
