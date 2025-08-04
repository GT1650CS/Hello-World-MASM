.386
.model flat, stdcall
.stack 4096
option casemap:none

; - IMPORTS -
include windows.inc

; - DATA SECTION ─
.data
    msg db "Hello, World!", 0
    cap db "MASM", 0

; - CODE SECTION -
.code
main:
    invoke MessageBoxA, 0, offset msg, offset cap, MB_OK
    invoke ExitProcess, 0
end main
