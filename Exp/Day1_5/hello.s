	.file	"hello.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.globl	data_seg
	.data
	.align 4
	.type	data_seg, @object
	.size	data_seg, 4
data_seg:
	.long	25
	.globl	bss_seg
	.bss
	.align 4
	.type	bss_seg, @object
	.size	bss_seg, 4
bss_seg:
	.zero	4
	.section	.rodata
	.align 4
	.type	_ZL14data_seg_const, @object
	.size	_ZL14data_seg_const, 4
_ZL14data_seg_const:
	.long	5
	.local	_ZL15data_seg_static
	.comm	_ZL15data_seg_static,4,4
	.local	_ZL10bss_static
	.comm	_ZL10bss_static,4,4
	.data
	.align 4
	.type	_ZZ4mainE15data_seg_static, @object
	.size	_ZZ4mainE15data_seg_static, 4
_ZZ4mainE15data_seg_static:
	.long	22
	.local	_ZZ4mainE14bss_seg_static
	.comm	_ZZ4mainE14bss_seg_static,4,4
	.section	.rodata
.LC0:
	.string	"Hello world"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1988:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
.L2:
	movl	bss_seg(%rip), %eax
	addl	$1, %eax
	movl	%eax, bss_seg(%rip)
	jmp	.L2
	.cfi_endproc
.LFE1988:
	.size	main, .-main
	.section	.rodata
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
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
