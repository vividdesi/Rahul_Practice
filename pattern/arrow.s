	.file	"arrow.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$7, -64(%rbp)
	movl	$9, -60(%rbp)
	movl	$1, -56(%rbp)
	movl	$9, -52(%rbp)
	movl	$7, -48(%rbp)
	movl	$7, -32(%rbp)
	movl	$9, -28(%rbp)
	movl	$11, -24(%rbp)
	movl	$9, -20(%rbp)
	movl	$7, -16(%rbp)
	movl	$0, -72(%rbp)
	jmp	.L2
.L7:
	movl	$0, -68(%rbp)
	jmp	.L3
.L6:
	movl	-72(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	cmpl	%eax, -68(%rbp)
	jl	.L4
	movl	-72(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %eax
	cmpl	%eax, -68(%rbp)
	jg	.L4
	movl	$42, %edi
	call	putchar@PLT
	jmp	.L5
.L4:
	movl	$32, %edi
	call	putchar@PLT
.L5:
	addl	$1, -68(%rbp)
.L3:
	cmpl	$10, -68(%rbp)
	jle	.L6
	movl	$10, %edi
	call	putchar@PLT
	addl	$1, -72(%rbp)
.L2:
	cmpl	$4, -72(%rbp)
	jle	.L7
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04.2) 11.4.0"
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
