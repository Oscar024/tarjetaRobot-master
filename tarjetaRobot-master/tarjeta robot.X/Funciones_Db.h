/*
 * File:   funciones.h
 * Author: L
 *
 * Created on 11 de septiembre de 2014, 07:15 PM
 */

#ifndef FUNCIONES_H
#define	FUNCIONES_H
#define _XTAL_FREQ 8000000


        // DIRECCIONES //

#define DIR_MAE                 0
#define DIR_ESC                 1
#define DIR_TEL                 2                                               //direccion del esclavo
#define Drive_by                4
#define TABLET                  5					                // N�mero del medidor

#define SOlIBATON               1
#define SOLIBATOFF              2
#define SOLIPORC                3
#define PINGBT                  4
#define ACK                     5
#define NAME                    41
#define SOLIPORC_LOW_POWER      7


#define LED_RA0 PORTAbits.RA0
#define LED_RA1 PORTAbits.RA1
#define LED_RA2 PORTAbits.RA2




//#define G1 PORTCbits.RC0
//#define PWM2 PORTCbits.RC1
//#define PWM1 PORTCbits.RC2
//#define G4 PORTDbits.RD0  //no
//#define G6 PORTDbits.RD1  //no 
//#define G8 PORTBbits.RB5  //no
//#define R2 PORTBbits.RB6
//#define R1 PORTBbits.RB7







void PantallaPrin(void);
void PONGBT(void);
void clrBufferDato(void);
void ConecBatteria(int Off_On_BAt);
void EstadoBluetooth(void);
void Comando_Tablet(void);
void Inicializa_Driveby(void);
void Mandar_Tablet(void);
char Tecla(void);
void Teclado(void);
void DelayCommands();
void BT_ModoVisible(void);

void motor_forward(void);
void motor_Backforward(void);

void external_interrupt_init(void);

#endif	/* FUNCIONES_H */

