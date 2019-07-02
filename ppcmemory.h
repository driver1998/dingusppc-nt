//DingusPPC - Prototype 5bf2
//Written by divingkatae
//(c)2018-20 (theweirdo)
//Please ask for permission
//if you want to distribute this.
//(divingkatae#1017 on Discord)

// The opcodes for the processor - ppcopcodes.cpp

#ifndef PPCMEMORY_H
#define PPCMEMORY_H

#include <vector>
#include <array>

extern uint32_t bat_srch;
extern uint32_t bepi_chk;

extern uint32_t msr_ir_test;
extern uint32_t msr_dr_test;
extern uint32_t msr_ip_test;

extern unsigned char * grab_macmem_ptr;

/**
struct pte {
    uint32_t page_index_no;
    uint32_t entry[];
    pte *next;
} PTE;
**/

extern void ibat_update();
extern void dbat_update();

extern void msr_status_update();

extern void address_quickinsert_translate(uint32_t address_grab, uint32_t value_insert, uint8_t bit_num);
extern void address_quickgrab_translate(uint32_t address_grab, uint32_t value_extract, uint8_t bit_num);
extern void quickinstruction_translate(uint32_t address_grab);

#endif // PPCMEMORY_H
