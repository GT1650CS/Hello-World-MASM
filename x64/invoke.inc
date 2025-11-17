INVOKE MACRO func, a0:=<>, a1:=<>, a2:=<>, a3:=<>, a4:=<>, a5:=<>, a6:=<>, a7:=<>, a8:=<>, a9:=<>, a10:=<>, a11:=<>, a12:=<>, a13:=<>, a14:=<>, a15:=<>
	LOCAL extra, os, stack ; os = offset, stack = stack size

	IFNB <a0>
		MOV RCX, a0 
	ENDIF

	IFNB <a1>
		MOV RDX, a1 
	ENDIF 

	IFNB <a2>
		MOV R8, a2 
	ENDIF

	IFNB <a3>
		MOV R9, a3
	ENDIF

	extra = 0
	
	IFNB <a4>
        extra = extra + 1
    ENDIF
	
    IFNB <a5>
        extra = extra + 1
    ENDIF
	
    IFNB <a6>
        extra = extra + 1
    ENDIF
	
    IFNB <a7>
        extra = extra + 1
    ENDIF
	
	IFNB <a8>
		extra = extra + 1
	ENDIF
	
	IFNB <a9>
		extra = extra + 1
	ENDIF 
	
	IFNB <a10>
		extra = extra + 1
	ENDIF 
	
	IFNB <a11> 
		extra = extra + 1
	ENDIF 
	
	IFNB <a12>
		extra = extra + 1
	ENDIF 
	
	IFNB <a13>
		extra = extra + 1
	ENDIF 
	
	IFNB <a14>
		extra = extra + 1
	ENDIF 
	
	IFNB <a15>
		extra = extra + 1
	ENDIF
	
	stack = 32 + extra * 8
    IF (stack AND 15) EQ 0
        stack = stack + 8
    ENDIF

    SUB RSP, stack
	
	os = 0
	
	IFNB <a4>
		MOV QWORD PTR [RSP + 32 + os], a4 
		os = os + 8
	ENDIF
	
	IFNB <a5>
		MOV QWORD PTR [RSP + 32 + os], a5 
		os = os + 8
	ENDIF 
	
	IFNB <a6>
		MOV QWORD PTR [RSP + 32 + os], a6 
		os = os + 8
	ENDIF
	
	IFNB <a7>
		MOV QWORD PTR [RSP + 32 + os], a7 
		os = os + 8
	ENDIF
	
	IFNB <a8>
		MOV QWORD PTR [RSP + 32 + os], a8 
		os = os + 8
	ENDIF 
	
	IFNB <a9>
		MOV QWORD PTR [RSP + 32 + os], a9 
		os = os + 8
	ENDIF 
	
	IFNB <a10>
	    MOV QWORD PTR [RSP + 32 + os], a10
		os = os + 8
	ENDIF 
	
	IFNB <a11>
		MOV QWORD PTR [RSP + 32 + os], a11 
		os = os + 8
	ENDIF 
	
	IFNB <a12>
		MOV QWORD PTR [RSP + 32 + os], a12
		os = os + 8
	ENDIF 
	
	IFNB <a13>
		MOV QWORD PTR [RSP + 32 + os], a13 
		os = os + 8
	ENDIF 
	
	IFNB <a14>
		MOV QWORD PTR [RSP + 32 + os], a14
		os = os + 8
	ENDIF

	IFNB <a15>
		MOV QWORD PTR [RSP + 32 + os], a15
		os = os + 8
	ENDIF 
	
	CALL func 
	
	ADD RSP, stack
	
ENDM
