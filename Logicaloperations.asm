
;<Program title>

jmp start

;data


;code
start: nop
LDA 4100
ANI A,0F0F
STA 4101
ORI 0F
STA 4102


hlt