ExitProcess PROTO :DWORD
MessageBoxA PROTO :DWORD, :DWORD, :DWORD, :DWORD

includelib kernel32.lib
includelib user32.lib

MB_OK equ 0
