#ifndef XLR8_HINJ_ADDR_PACK
#define XLR8_HINJ_ADDR_PACK

 #define PORTBT_Address  0x20  // HINJ: Port BT GPIO Port Address---------------------------HINJ
 #define DDRBT_Address   0x21  // HINJ: Port BT GPIO DDR Address----------------------------HINJ
 #define PINBT_Address   0x22  // HINJ: Port BT GPIO Pin Address----------------------------HINJ
 #define PORTSW_Address  0x2C  // HINJ: Port SW GPIO Port Address---------------------------HINJ
 #define DDRSW_Address   0x2D  // HINJ: Port SW GPIO DDR Address----------------------------HINJ
 #define PINSW_Address   0x2E  // HINJ: Port SW GPIO Pin Address----------------------------HINJ
 #define PORTLD_Address  0x32  // HINJ: Port LD GPIO Port Address---------------------------HINJ
 #define DDRLD_Address   0x33  // HINJ: Port LD GPIO DDR Address----------------------------HINJ
 #define PINLD_Address   0x34  // HINJ: Port LD GPIO Pin Address----------------------------HINJ
 #define PORTG4_Address  0x3A  // HINJ: Port G4 GPIO Port Address---------------------------HINJ
 #define DDRG4_Address   0x4F  // HINJ: Port G4 GPIO DDR Address----------------------------HINJ
 #define PING4_Address   0x51  // HINJ: Port G4 GPIO Pin Address----------------------------HINJ
 #define PORTG3_Address  0x52  // HINJ: Port G3 GPIO Port Address---------------------------HINJ
 #define DDRG3_Address   0x53  // HINJ: Port G3 GPIO DDR Address----------------------------HINJ
 #define PING3_Address   0x56  // HINJ: Port G3 GPIO Pin Address----------------------------HINJ
 #define PORTX1_Address  0x71  // HINJ: Port X1 GPIO Port Address---------------------------HINJ
 #define DDRX1_Address   0x72  // HINJ: Port X1 GPIO DDR Address----------------------------HINJ
 #define PINX1_Address   0x73  // HINJ: Port X1 GPIO Pin Address----------------------------HINJ
 #define PORTX0_Address  0x74  // HINJ: Port X0 GPIO Port Address---------------------------HINJ
 #define DDRX0_Address   0x75  // HINJ: Port X0 GPIO DDR Address----------------------------HINJ
 #define PINX0_Address   0x76  // HINJ: Port X0 GPIO Pin Address----------------------------HINJ
 #define PORTG2_Address  0x77  // HINJ: Port G2 GPIO Port Address---------------------------HINJ
 #define DDRG2_Address   0x83  // HINJ: Port G2 GPIO DDR Address----------------------------HINJ
 #define PING2_Address   0x8C  // HINJ: Port G2 GPIO Pin Address----------------------------HINJ
 #define PORTG1_Address  0x8D  // HINJ: Port G1 GPIO Port Address---------------------------HINJ
 #define DDRG1_Address   0x8E  // HINJ: Port G1 GPIO DDR Address----------------------------HINJ
 #define PING1_Address   0x8F  // HINJ: Port G1 GPIO Pin Address----------------------------HINJ
 #define PORTG0_Address  0x90  // HINJ: Port G0 GPIO Port Address---------------------------HINJ
 #define DDRG0_Address   0x91  // HINJ: Port G0 GPIO DDR Address----------------------------HINJ
 #define PING0_Address   0x92  // HINJ: Port G0 GPIO Pin Address----------------------------HINJ
 #define PORTPD_Address  0x93  // HINJ: Port PD GPIO Port Address---------------------------HINJ
 #define DDRPD_Address   0x94  // HINJ: Port PD GPIO DDR Address----------------------------HINJ
 #define PINPD_Address   0x95  // HINJ: Port PD GPIO Pin Address----------------------------HINJ
 #define PORTPC_Address  0x96  // HINJ: Port PC GPIO Port Address---------------------------HINJ
 #define DDRPC_Address   0x97  // HINJ: Port PC GPIO DDR Address----------------------------HINJ
 #define PINPC_Address   0x98  // HINJ: Port PC GPIO Pin Address----------------------------HINJ
 #define PORTPB_Address  0x99  // HINJ: Port PB GPIO Port Address---------------------------HINJ
 #define DDRPB_Address   0x9A  // HINJ: Port PB GPIO DDR Address----------------------------HINJ
 #define PINPB_Address   0x9B  // HINJ: Port PB GPIO Pin Address----------------------------HINJ
 #define PORTPA_Address  0x9C  // HINJ: Port PA GPIO Port Address---------------------------HINJ
 #define DDRPA_Address   0x9D  // HINJ: Port PA GPIO DDR Address----------------------------HINJ
 #define PINPA_Address   0x9E  // HINJ: Port PA GPIO Pin Address----------------------------HINJ
 #define PORTBI_Address  0x9F  // HINJ: Port BI GPIO Port Address --------------------------HINJ 
 #define DDRBI_Address   0xA0  // HINJ: Port BI GPIO DDR Address ---------------------------HINJ 
 #define PINBI_Address   0xA1  // HINJ: Port BI GPIO Pin Address ---------------------------HINJ 
 #define WIFI_SPCR_ADDR  0xA2  // HINJ: WIFI SPI Control REG -------------------------------HINJ 
 #define WIFI_SPSR_ADDR  0xA3  // HINJ: WIFI SPI Source REG -==-----------------------------HINJ 
 #define WIFI_SPDR_ADDR  0xA4  // HINJ: WIFI SPI DATA REG ----------------------------------HINJ 
 #define ETH_SPCR_ADDR   0xA5  // HINJ: Ethernet SPI Control REG ---------------------------HINJ 
 #define ETH_SPSR_ADDR   0xA6  // HINJ: Ethernet SPI Status REG ----------------------------HINJ 
 #define ETH_SPDR_ADDR   0xA7  // HINJ: Ethernet SPI Data REG ------------------------------HINJ 
 #define SD_SPCR_ADDR    0xA8  // HINJ: SD Card SPI Control REG ----------------------------HINJ 
 #define SD_SPSR_ADDR    0xA9  // HINJ: SD Card SPI Status REG -----------------------------HINJ 
 #define SD_SPDR_ADDR    0xAA  // HINJ: SD Card SPI Data REG -------------------------------HINJ 
 #define HPCICR_Address  0xAB  // Hinj Pin Change Interrupt Control reg --------------------HINJ
 #define HPCIFR_Address  0xAC  // Hinj Pin Change Interrupt Flag reg -----------------------HINJ
 #define HPCIMSK_Address 0xAD  // Hinj Pin Change Interrupt Mask reg -----------------------HINJ
 #define MSKX1_Address   0xAE  // HINJ: Port X1 Interrupt Mask------------------------------HINJ
 #define MSKX0_Address   0xAF  // HINJ: Port X0 Interrupt Mask------------------------------HINJ
 #define MSKG4_Address   0xB5  // HINJ: Port G4 Interrupt Mask------------------------------HINJ
 #define MSKG3_Address   0xB7  // HINJ: Port G3 Interrupt Mask------------------------------HINJ
 #define MSKG2_Address   0xBE  // HINJ: Port G2 Interrupt Mask------------------------------HINJ
 #define MSKG1_Address   0xBF  // HINJ: Port G1 Interrupt Mask------------------------------HINJ
 #define MSKG0_Address   0xC3  // HINJ: Port G0 Interrupt Mask------------------------------HINJ
 #define MSKPD_Address   0xC7  // HINJ: Port PD Interrupt Mask------------------------------HINJ
 #define MSKPC_Address   0xC8  // HINJ: Port PC Interrupt Mask------------------------------HINJ
 #define MSKPB_Address   0xC9  // HINJ: Port PB Interrupt Mask------------------------------HINJ
 #define MSKPA_Address   0xCA  // HINJ: Port PA Interrupt Mask------------------------------HINJ
 #define MSKBI_Address   0xCB  // HINJ: Port BI Interrupt Mask------------------------------HINJ

#endif

