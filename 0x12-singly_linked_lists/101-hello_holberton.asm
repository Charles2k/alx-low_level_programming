global main

section .text

main:
  mov eax, 1
  mov edi, 1
  mov esi, msg
  mov edx, msglen
  syscall

  mov eax, 60
  mov edi, 0
  syscall

section .rodata
  msg: db "Hello, Holberton", 10
  msglen: equ $ - msg
