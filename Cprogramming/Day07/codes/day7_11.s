	.file	"day7_11.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	movl	$0, 60(%esp)
	jmp	L2
L5:
	movl	$0, 56(%esp)
	jmp	L3
L4:
	addl	$1, 56(%esp)
L3:
	cmpl	$3, 56(%esp)
	jle	L4
	addl	$1, 60(%esp)
L2:
	cmpl	$2, 60(%esp)
	jle	L5
	movl	$0, %eax
	leave
	ret
	.ident	"GCC: (tdm-1) 10.3.0"
