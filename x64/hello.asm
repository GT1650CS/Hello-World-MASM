; --- INCLUDES ---
INCLUDE invoke.inc 
INCLUDE windows.inc

; --- DATA ---
.DATA
    msg DB "Hello, World!", 0
    cap DB "MASM64", 0
	
; --- CODE ---
.CODE
main PROC
	; the invoke macro assumes normal callee state. 
	; However, with a direct entrypoint, RSP is 0, as 
	; opposed to 8 when called normally. Therefore, we
	; subtract 8 to simulate regular callee state.
	SUB RSP, 8 
    INVOKE MessageBoxA, 0, OFFSET msg, OFFSET cap, MB_OK
    INVOKE ExitProcess, 0
main ENDP

END
