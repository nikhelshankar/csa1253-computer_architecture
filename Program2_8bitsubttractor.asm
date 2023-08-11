
;<Program title>

jmp start

;data


;code
start: nop
LDA 3100
MOV B,A
LDA 3101
SUB B
STA 3500
HLT


hlt