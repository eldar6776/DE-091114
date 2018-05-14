/******************************************************************************
 *
 *        Mikser sirovine ekstrudera - Signal and Keys Controller
 *
 *               Softverske definicije tipova varijabli
 *
 *******************************************************************************
 * Ime fajla:       typedefs.h
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
 ******************************************************************************/
#ifndef TYPEDEFS_H
#define TYPEDEFS_H

typedef unsigned char byte; // 8-bit
typedef unsigned int word; // 16-bit
typedef unsigned long dword; // 32-bit

typedef union _BYTE {
    byte _byte;

    struct {
        unsigned b0 : 1;
        unsigned b1 : 1;
        unsigned b2 : 1;
        unsigned b3 : 1;
        unsigned b4 : 1;
        unsigned b5 : 1;
        unsigned b6 : 1;
        unsigned b7 : 1;
    }; //	end of struct
} BYTE; // end of typedefs union _BYTE

typedef union _WORD {
    word _word;

    struct {
        byte byte0;
        byte byte1;
    }; // End of struct

    struct {
        BYTE Byte0;
        BYTE Byte1;
    }; // End of struct

    struct {
        BYTE low_byte;
        BYTE high_byte;
    };// End of struct
    struct {
        unsigned char lsb;
        unsigned char msb;
    }; // End of struct

    struct {
        byte v[2];
    }; // End of struct
} WORD; // End of typedefs _WORD
#define LSB(a)      ((a).v[0])
#define MSB(a)      ((a).v[1])

typedef union _DWORD { // 	start of typedefs union _DWORD
    dword _dword;

    struct { // 	start of struct
        byte byte0;
        byte byte1;
        byte byte2;
        byte byte3;
    }; //  end of struct

    struct { //	start of struc
        word word0;
        word word1;
    }; //	end of struct

    struct { // start of struct
        BYTE Byte0;
        BYTE Byte1;
        BYTE Byte2;
        BYTE Byte3;
    }; // end of struc

    struct { //	start of struct
        WORD Word0;
        WORD Word1;
    }; //  end of sturct

    struct { //	start of struct
        byte v[4];
    }; //	end of struct
} DWORD; //	end of typedefs _DWORD

#define LOWER_LSB(a)    ((a).v[0])
#define LOWER_MSB(a)    ((a).v[1])
#define UPPER_LSB(a)    ((a).v[2])
#define UPPER_MSB(a)    ((a).v[3])

typedef void(*pFunc)(void);

typedef union _POINTER { //		start of typedefs union _POINTER

    struct { //	start of struct
        byte bLow;
        byte bHigh; //byte bUpper;
    }; //	end of struct
    word _word; // bLow & bHigh
    //pFunc _pFunc;           		// Usage: ptr.pFunc(); Init: ptr.pFunc = &<Function>;
    byte* bRam; // Ram byte pointer: 2 bytes pointer pointing
    // to 1 byte of data
    word* wRam; // Ram word poitner: 2 bytes poitner pointing
    // to 2 bytes of data
    rom byte* bRom; // Size depends on compiler setting
    rom word* wRom;
    //rom near byte* nbRom;        	// Near = 2 bytes pointer
    //rom near word* nwRom;
    //rom far byte* fbRom;         	// Far = 3 bytes pointer
    //rom far word* fwRom;
} POINTER;

typedef enum _BOOL {
    FALSE = 0, TRUE
} BOOL;
//
//****** D E F I N I C I J E  **************************************************
//
#define	HIGH		1
#define	LOW		0
#define	IN		1
#define	OUT		0
#define	INPUT 		1
#define	OUTPUT		0
#define INPUT_PIN	1
#define OUTPUT_PIN	0
#define PIN_HIGH        1
#define PIN_LOW         0
#define	YES		1
#define NOT		0
#define	TRUE            1
#define	FALSE           0



#endif //TYPEDEFS_H
