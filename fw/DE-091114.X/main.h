/******************************************************************************
 *
 *               Apsolutni enkoder ugla za ILLIG RDM K70
 *
 *                      Zaglavlje glavnog programa
 *
 *******************************************************************************
 * Ime fajla:       main.h
 *
 * Procesor:        PIC18F23K20
 *
 * Kompajler:       MCC18 v3.47
 *
 * IDE:             MPLAB X IDE v1.95 (java 1.7.0_25)
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
 ******************************************************************************/
//
//
//
#ifndef MAIN_H
#define	MAIN_H
//
//
//
#include "typedefs.h"

//
//
/** R A M   V A R I J A B L E *************************************************/
//
//
//#pragma udata char_vars
//unsigned char err_dsp_tmr1;
extern BYTE sys_flags;
#define POS_UPDATE      sys_flags.b0
#define ALIGNMENT_MODE  sys_flags.b1
//
//
//
//#pragma udata int_vars
extern unsigned int actual_position, old_position;
extern WORD signal_clk;
#define SIG_1_MS        signal_clk.low_byte.b0
#define SIG_2_MS        signal_clk.low_byte.b1
#define SIG_4_MS        signal_clk.low_byte.b2
#define SIG_8_MS        signal_clk.low_byte.b3
#define SIG_16_MS       signal_clk.low_byte.b4
#define SIG_32_MS       signal_clk.low_byte.b5
#define SIG_64_MS       signal_clk.low_byte.b6
#define SIG_128_MS      signal_clk.low_byte.b7
#define SIG_256_MS      signal_clk.high_byte.b0
#define SIG_512_MS      signal_clk.high_byte.b1
#define SIG_1_S         signal_clk.high_byte.b2
#define SIG_2_S         signal_clk.high_byte.b3
#define SIG_4_S         signal_clk.high_byte.b4
#define SIG_8_S         signal_clk.high_byte.b5
#define SIG_16_S        signal_clk.high_byte.b6
#define SIG_32_S        signal_clk.high_byte.b7

//
//
/**  E N U M E R A T O R S   **************************************************/
//
//
//
//
//
/** E E P R O M    A S S I G N E D    A D R E S S E S  ************************/
//
//
#define EE_VERSION_INFO_B0  0x00
#define EE_VERSION_INFO_B1  0x01
#define EE_VERSION_INFO_B2  0x02
#define EE_DEV_ID_B0        0x03
#define EE_DEV_ID_B1        0x04
#define EE_DEV_ID_B2        0x05
//
//
/*********   F L A G S   ******************************************************/
//
//----------------------------------------------- define error code
//

//
//----------------------------------------------- system flags
//

//
//----------------------------------------------- signal 4 expander
//

//
//
/********* R S 4 8 5  C O M U N I C A T I O N   D E F I N E S   ***************/
//
//
//----------------------------------------------- comm flags
//

//
//
/********* M A C R O S   ******************************************************/
//
//
//
//
/** F U N C T I O N S   P R O T O T Y P E S   *********************************/
//
//
void low_isr(void);
void high_isr(void);
void InitRAM(void);
void InitSYS(void);
//void CommService(void);
void ReadPosition(void);
void SignalService(void);
unsigned char EEPROM_ReadByte(unsigned char address);
unsigned int EEPROM_ReadInt(unsigned char address);
void EEPROM_WriteByte(unsigned char address, unsigned char data);
void EEPROM_WriteInt(unsigned char address, unsigned int data);
//
//----------------------------------------------- end of file
//
#endif	/* MAIN_H */
 