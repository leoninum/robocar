#ifndef __PINS__
#define __PINS__

/**
HC05 - 2 Pins (Trigger:10, echo:9)
IR-Recv - Power, Signal:8
Servo - 1Pin PWM: 11
Bluetooth, 2Pins an 0,1 oder SoftwareSerial(12, 13)
L298 Motor Steuerung - MA, MB EnableA:7, EnableB:6, In1:5, In2:4, In3:3, In4:2
LCD (I2c) - A5, A4
Linienverfolgung - 3 Pins: A0,A1,A2
 */
#define pHC05_ECHO 9
#define pHC05_TRIGGER 10
#define pIR_RECV_SIGNAL 8
#define pSERVO 11
#define pBLUETOOTH_RX 12
#define pBLUETOOTH_TX 13
#define pL298_ENABLE_A 7
#define pL298_ENABLE_B 6
#define pL298_IN_1 5
#define pL298_IN_2 4
#define pL298_IN_3 3
#define pL298_IN_4 2
#define p_LINE_1_SIGNAL A0
#define p_LINE_2_SIGNAL A1
#define p_LINE_3_SIGNAL A2
#endif
