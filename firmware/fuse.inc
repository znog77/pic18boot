;--------------------------------------------------------------------------
;
; �ȉ��AX'tal �ɍ��킹�ĕύX���Ă�������.
;;	CONFIG	PLLDIV = 1			; OSC/1 for  4MHz
;;	CONFIG	PLLDIV = 2			; OSC/2 for  8MHz
;;	CONFIG	PLLDIV = 3			; OSC/3 for 12MHz
;;	CONFIG	PLLDIV = 4			; OSC/4 for 16MHz
	CONFIG	PLLDIV = 5			; OSC/5 for 20MHz
;
;
	CONFIG  CPUDIV = OSC1_PLL2	; CPU_clk = PLL/2 (48MHz)
	CONFIG 	USBDIV = 2			; USB_clk = PLL/2 (48MHz)
	CONFIG 	FOSC = HSPLL_HS		; HS osc PLL
	CONFIG  FCMEN = OFF			; Fail Safe Clock Monitor
	CONFIG  IESO = OFF			; Int/Ext switchover mode
	CONFIG  PWRT = ON			; PowerUp Timer
	CONFIG  BOR = ON			; Brown Out
	CONFIG  BORV = 3			; 
	CONFIG  VREGEN = ON			; Int Voltage Regulator
	CONFIG  WDT = OFF			; WatchDog Timer
	CONFIG  MCLRE = ON			; MCLR
	CONFIG  LPT1OSC = OFF			; Low Power OSC
	CONFIG  PBADEN = OFF		; PORTB<4:0> A/D
	CONFIG  CCP2MX = ON			; CCP2 Mux RC1
	CONFIG  STVREN = ON			; Stack Overflow Reset
;
; LVP���C�^�[���g�p����ꍇ�� ON�ɂ��܂�. (�A���APGM�[�q��K��PULLDOWN���Ă�������)
;;	CONFIG  LVP = ON			; Low Voltage Programming
	CONFIG  LVP = OFF			; Low Voltage Programming

;;	CONFIG  ICPRT = OFF			; ICP


;���L�̋L�q�ɂ͓��ɒ��ӂ��邱�ƁB
;;	CONFIG  XINST = ON			; Ext CPU Instruction Set
	CONFIG  XINST = OFF			; Ext CPU Instruction Set
;
;;Bootloader�� XINST��ON/OFF�Ɋւ�炸���삷�邪�Abootloader���������v���O������
;;XINST ��On �� Off���œ��삵���肵�Ȃ������肷��B�i�������ɂ��j
;;���ɁAsdcc�ō쐬�����v���O�����͑S�� XINST=OFF �łȂ��ƈӖ��s���̓��������B
;;�g������(addfsr,subfsr��)��AFSR2���΃A�h���X( AccessBank��� )���g�p����
;;�v���O�����ł͕K�� XINST=ON�ŏĂ��Ȃ���΂Ȃ�Ȃ��B
;
	CONFIG	DEBUG = OFF			; Background Debugging
	CONFIG  CP0 = OFF			; Code Protect
	CONFIG  CP1 = OFF
	CONFIG  CP2 = OFF
	CONFIG  CP3 = OFF
	CONFIG  CPB = OFF  			; Boot Sect Code Protect
	CONFIG  CPD = OFF  			; EEPROM Data Protect
	CONFIG  WRT0 = OFF 			; Table Write Protect
	CONFIG  WRT1 = OFF
	CONFIG  WRT2 = OFF 
	CONFIG  WRT3 = OFF 
	CONFIG  WRTB = OFF 			; Boot Table Write Protest
	CONFIG  WRTC = OFF 			; CONFIG Write Protect
	CONFIG  WRTD = OFF 			; EEPROM Write Protect
	CONFIG  EBTR0 = OFF			; Ext Table Read Protect
	CONFIG  EBTR1 = OFF
	CONFIG  EBTR2 = OFF
	CONFIG  EBTR3 = OFF
	CONFIG  EBTRB = OFF			; Boot Table Read Protect