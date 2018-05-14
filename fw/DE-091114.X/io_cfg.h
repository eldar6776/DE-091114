/******************************************************************************
 *
 *               Apsolutni enkoder ugla za ILLIG RDM K70
 *
 *                      Hardwerske definicije
 *
 *******************************************************************************
 * Ime fajla:       io_cfg.h
 *
 * Procesor:        PIC18F23K20
 *
 * Kompajler:       MCC18 v3.47
 *
 * IDE:             MPLAB X IDE v1.95 (java 1.7.0_17)
 *
 * Firma:           PROVEN d.o.o. Sarajevo
 *
 * Autor:           <mailto> eldar6776@hotmail.com
 *
 * Prava:           Sva prava na programski kod zadrzava firma
 *                  PROVEN d.o.o. Sarajevo.
 *                  <mailto> proven@bih.net.ba
 *                  Adema Buce 102, 71000 Sarajevo
 *                  Federacija Bosne i Hercegovine
 *                  Bosna i Hercegovina
 *                  tel.:+387 33 651 407
 *                  tel.:+387 33 718 670
 *                  fax.:+387 33 718 671
 *                  www.proven.com.ba
 *
 *****************************************************************************/
//
//
//
#ifndef IO_CFG_H
#define IO_CFG_H
//
//
//
#include <p18cxxx.h>
#include "typedefs.h"
//
//
//******** D E F I N I C I J E    P O R T O V A ******************************/
//
//----------------------------------------------- porta
#define LED_ZERO            LATAbits.LATA0
#define AUX_0               LATAbits.LATA1
#define AUX_1               LATAbits.LATA2
#define AUX_2               LATAbits.LATA3
#define AUX_3               LATAbits.LATA4
#define LED_STATUS          LATAbits.LATA5
#define ENC_1               LATAbits.LATA6
#define ENC_2               LATAbits.LATA7
#define DBG_PORTA           PORTA
#define DBG_LATA            LATA
//
//----------------------------------------------- portb
//
#define ENC_4               LATBbits.LATB0
#define ENC_8               LATBbits.LATB1
#define ENC_10              LATBbits.LATB2
#define ENC_20              LATBbits.LATB3
#define ENC_40              LATBbits.LATB4
#define ENC_80              LATBbits.LATB5
#define ENC_100             LATBbits.LATB6
#define ENC_200             LATBbits.LATB7
#define DBG_PORTB           PORTB
#define DBG_LATB            LATB
//
//----------------------------------------------- portc
//
#define MAG_HI              PORTCbits.RC0
#define MAG_LO              PORTCbits.RC1
#define SSI_NCS             LATCbits.LATC2
#define SSI_CLK             LATCbits.LATC3
#define SSI_DATA            PORTCbits.RC4
#define DBG_PORTC           PORTC
#define DBG_LATC            LATC

#endif	//	IO_CFG_H