#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DamageReceive__7ApcUnitP7WcActorii
// Address: 0x14ba08 - 0x14bc04
void DamageReceive__7ApcUnitP7WcActorii_0x14ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageReceive__7ApcUnitP7WcActorii_0x14ba08");
#endif

    switch (ctx->pc) {
        case 0x14bac8u: goto label_14bac8;
        case 0x14bb44u: goto label_14bb44;
        case 0x14bbc4u: goto label_14bbc4;
        case 0x14bbe4u: goto label_14bbe4;
        default: break;
    }

    ctx->pc = 0x14ba08u;

    // 0x14ba08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ba08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ba0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ba10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14ba10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14ba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14ba18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14ba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14ba1c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14ba1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14ba20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14ba24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14ba24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14ba2c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14ba30: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x14ba30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba34: 0x8e240170  lw          $a0, 0x170($s1)
    ctx->pc = 0x14ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x14ba38: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x14ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14ba3c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x14ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x14ba40: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14ba40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x14ba44: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x14BA44u;
    {
        const bool branch_taken_0x14ba44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA44u;
        // 0x14ba48: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba44) {
            ctx->pc = 0x14BBE4u;
            goto label_14bbe4;
        }
    }
    ctx->pc = 0x14BA4Cu;
    // 0x14ba4c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x14ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14ba50: 0x3042c800  andi        $v0, $v0, 0xC800
    ctx->pc = 0x14ba50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)51200);
    // 0x14ba54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BA54u;
    {
        const bool branch_taken_0x14ba54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA54u;
        // 0x14ba58: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba54) {
            ctx->pc = 0x14BA6Cu;
            goto label_14ba6c;
        }
    }
    ctx->pc = 0x14BA5Cu;
    // 0x14ba5c: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14ba60: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14ba60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x14ba64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14BA64u;
    {
        const bool branch_taken_0x14ba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ba64) {
            ctx->pc = 0x14BA70u;
            goto label_14ba70;
        }
    }
    ctx->pc = 0x14BA6Cu;
label_14ba6c:
    // 0x14ba6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14ba70:
    // 0x14ba70: 0x5460005d  bnel        $v1, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x14BA70u;
    {
        const bool branch_taken_0x14ba70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ba70) {
            ctx->pc = 0x14BA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BA70u;
            // 0x14ba74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBE8u;
            goto label_14bbe8;
        }
    }
    ctx->pc = 0x14BA78u;
    // 0x14ba78: 0x5a00000b  blezl       $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x14BA78u;
    {
        const bool branch_taken_0x14ba78 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x14ba78) {
            ctx->pc = 0x14BA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BA78u;
            // 0x14ba7c: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BAA8u;
            goto label_14baa8;
        }
    }
    ctx->pc = 0x14BA80u;
    // 0x14ba80: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14ba80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14ba84: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x14ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x14ba88: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BA88u;
    {
        const bool branch_taken_0x14ba88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14ba88) {
            ctx->pc = 0x14BA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BA88u;
            // 0x14ba8c: 0x8e220244  lw          $v0, 0x244($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BAA8u;
            goto label_14baa8;
        }
    }
    ctx->pc = 0x14BA90u;
    // 0x14ba90: 0x96020266  lhu         $v0, 0x266($s0)
    ctx->pc = 0x14ba90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 614)));
    // 0x14ba94: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x14ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x14ba98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14ba9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14BA9Cu;
    {
        const bool branch_taken_0x14ba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA9Cu;
        // 0x14baa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba9c) {
            ctx->pc = 0x14BAC0u;
            goto label_14bac0;
        }
    }
    ctx->pc = 0x14BAA4u;
    // 0x14baa4: 0x8e220244  lw          $v0, 0x244($s1)
    ctx->pc = 0x14baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
label_14baa8:
    // 0x14baa8: 0x5050004f  beql        $v0, $s0, . + 4 + (0x4F << 2)
    ctx->pc = 0x14BAA8u;
    {
        const bool branch_taken_0x14baa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x14baa8) {
            ctx->pc = 0x14BAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BAA8u;
            // 0x14baac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBE8u;
            goto label_14bbe8;
        }
    }
    ctx->pc = 0x14BAB0u;
    // 0x14bab0: 0x8e220248  lw          $v0, 0x248($s1)
    ctx->pc = 0x14bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x14bab4: 0x1050004b  beq         $v0, $s0, . + 4 + (0x4B << 2)
    ctx->pc = 0x14BAB4u;
    {
        const bool branch_taken_0x14bab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x14BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BAB4u;
        // 0x14bab8: 0xae300244  sw          $s0, 0x244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bab4) {
            ctx->pc = 0x14BBE4u;
            goto label_14bbe4;
        }
    }
    ctx->pc = 0x14BABCu;
    // 0x14babc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14babcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14bac0:
    // 0x14bac0: 0xc0533e4  jal         func_14CF90
    ctx->pc = 0x14BAC0u;
    SET_GPR_U32(ctx, 31, 0x14BAC8u);
    ctx->pc = 0x14BAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAC0u;
    // 0x14bac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CF90u, 0x14BAC0u, 0x14BAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAC8u;
label_14bac8:
    // 0x14bac8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14bacc: 0x5642000a  bnel        $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14BACCu;
    {
        const bool branch_taken_0x14bacc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bacc) {
            ctx->pc = 0x14BAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BACCu;
            // 0x14bad0: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BAF8u;
            goto label_14baf8;
        }
    }
    ctx->pc = 0x14BAD4u;
    // 0x14bad4: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BAD4u;
    {
        const bool branch_taken_0x14bad4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BAD4u;
        // 0x14bad8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bad4) {
            ctx->pc = 0x14BAF4u;
            goto label_14baf4;
        }
    }
    ctx->pc = 0x14BADCu;
    // 0x14badc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14bae0: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x14bae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x14bae4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14bae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14bae8: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BAE8u;
    {
        const bool branch_taken_0x14bae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14bae8) {
            ctx->pc = 0x14BAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BAE8u;
            // 0x14baec: 0x8e2300d4  lw          $v1, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BAF8u;
            goto label_14baf8;
        }
    }
    ctx->pc = 0x14BAF0u;
    // 0x14baf0: 0x8e120190  lw          $s2, 0x190($s0)
    ctx->pc = 0x14baf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_14baf4:
    // 0x14baf4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x14baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_14baf8:
    // 0x14baf8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x14baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x14bafc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14bb00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14BB00u;
    {
        const bool branch_taken_0x14bb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB00u;
        // 0x14bb04: 0xae320240  sw          $s2, 0x240($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb00) {
            ctx->pc = 0x14BB38u;
            goto label_14bb38;
        }
    }
    ctx->pc = 0x14BB08u;
    // 0x14bb08: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x14BB08u;
    {
        const bool branch_taken_0x14bb08 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB08u;
        // 0x14bb0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb08) {
            ctx->pc = 0x14BB3Cu;
            goto label_14bb3c;
        }
    }
    ctx->pc = 0x14BB10u;
    // 0x14bb10: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x14bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x14bb14: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x14bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x14bb18: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14bb1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BB1Cu;
    {
        const bool branch_taken_0x14bb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB1Cu;
        // 0x14bb20: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb1c) {
            ctx->pc = 0x14BB3Cu;
            goto label_14bb3c;
        }
    }
    ctx->pc = 0x14BB24u;
    // 0x14bb24: 0x8e230188  lw          $v1, 0x188($s1)
    ctx->pc = 0x14bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 392)));
    // 0x14bb28: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x14bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x14bb2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14BB2Cu;
    {
        const bool branch_taken_0x14bb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB2Cu;
        // 0x14bb30: 0x43280a  movz        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb2c) {
            ctx->pc = 0x14BB48u;
            goto label_14bb48;
        }
    }
    ctx->pc = 0x14BB34u;
    // 0x14bb34: 0x0  nop
    ctx->pc = 0x14bb34u;
    // NOP
label_14bb38:
    // 0x14bb38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14bb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14bb3c:
    // 0x14bb3c: 0xc052f02  jal         func_14BC08
    ctx->pc = 0x14BB3Cu;
    SET_GPR_U32(ctx, 31, 0x14BB44u);
    ctx->pc = 0x14BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB3Cu;
    // 0x14bb40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BC08u, 0x14BB3Cu, 0x14BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB44u;
label_14bb44:
    // 0x14bb44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14bb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14bb48:
    // 0x14bb48: 0x1a000015  blez        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x14BB48u;
    {
        const bool branch_taken_0x14bb48 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x14BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB48u;
        // 0x14bb4c: 0x24022118  addiu       $v0, $zero, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb48) {
            ctx->pc = 0x14BBA0u;
            goto label_14bba0;
        }
    }
    ctx->pc = 0x14BB50u;
    // 0x14bb50: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x14bb50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14bb54: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BB54u;
    {
        const bool branch_taken_0x14bb54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14bb54) {
            ctx->pc = 0x14BB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BB54u;
            // 0x14bb58: 0xae700250  sw          $s0, 0x250($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BB64u;
            goto label_14bb64;
        }
    }
    ctx->pc = 0x14BB5Cu;
    // 0x14bb5c: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x14bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x14bb60: 0xae620250  sw          $v0, 0x250($s3)
    ctx->pc = 0x14bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 2));
label_14bb64:
    // 0x14bb64: 0x8e640250  lw          $a0, 0x250($s3)
    ctx->pc = 0x14bb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x14bb68: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x14BB68u;
    {
        const bool branch_taken_0x14bb68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB68u;
        // 0x14bb6c: 0x24030118  addiu       $v1, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb68) {
            ctx->pc = 0x14BBA0u;
            goto label_14bba0;
        }
    }
    ctx->pc = 0x14BB70u;
    // 0x14bb70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14bb74: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14bb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x14bb78: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14BB78u;
    {
        const bool branch_taken_0x14bb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14bb78) {
            ctx->pc = 0x14BBA0u;
            goto label_14bba0;
        }
    }
    ctx->pc = 0x14BB80u;
    // 0x14bb80: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x14bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x14bb84: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x14bb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x14bb88: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x14bb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x14bb8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BB8Cu;
    {
        const bool branch_taken_0x14bb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bb8c) {
            ctx->pc = 0x14BBA0u;
            goto label_14bba0;
        }
    }
    ctx->pc = 0x14BB94u;
    // 0x14bb94: 0x8e620184  lw          $v0, 0x184($s3)
    ctx->pc = 0x14bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
    // 0x14bb98: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x14bb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x14bb9c: 0xae620184  sw          $v0, 0x184($s3)
    ctx->pc = 0x14bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 388), GPR_U32(ctx, 2));
label_14bba0:
    // 0x14bba0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BBA0u;
    {
        const bool branch_taken_0x14bba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBA0u;
        // 0x14bba4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bba0) {
            ctx->pc = 0x14BBB8u;
            goto label_14bbb8;
        }
    }
    ctx->pc = 0x14BBA8u;
    // 0x14bba8: 0x1282000e  beq         $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14BBA8u;
    {
        const bool branch_taken_0x14bba8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBA8u;
        // 0x14bbac: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bba8) {
            ctx->pc = 0x14BBE4u;
            goto label_14bbe4;
        }
    }
    ctx->pc = 0x14BBB0u;
    // 0x14bbb0: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BBB0u;
    {
        const bool branch_taken_0x14bbb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bbb0) {
            ctx->pc = 0x14BBD0u;
            goto label_14bbd0;
        }
    }
    ctx->pc = 0x14BBB8u;
label_14bbb8:
    // 0x14bbb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbbc: 0xc053420  jal         func_14D080
    ctx->pc = 0x14BBBCu;
    SET_GPR_U32(ctx, 31, 0x14BBC4u);
    ctx->pc = 0x14BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBBCu;
    // 0x14bbc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D080u, 0x14BBBCu, 0x14BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBC4u;
label_14bbc4:
    // 0x14bbc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14BBC4u;
    {
        const bool branch_taken_0x14bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBC4u;
        // 0x14bbc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbc4) {
            ctx->pc = 0x14BBE8u;
            goto label_14bbe8;
        }
    }
    ctx->pc = 0x14BBCCu;
    // 0x14bbcc: 0x0  nop
    ctx->pc = 0x14bbccu;
    // NOP
label_14bbd0:
    // 0x14bbd0: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14BBD0u;
    {
        const bool branch_taken_0x14bbd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bbd0) {
            ctx->pc = 0x14BBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BBD0u;
            // 0x14bbd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BBE8u;
            goto label_14bbe8;
        }
    }
    ctx->pc = 0x14BBD8u;
    // 0x14bbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14bbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bbdc: 0xc053420  jal         func_14D080
    ctx->pc = 0x14BBDCu;
    SET_GPR_U32(ctx, 31, 0x14BBE4u);
    ctx->pc = 0x14BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBDCu;
    // 0x14bbe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D080u, 0x14BBDCu, 0x14BBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BBE4u;
label_14bbe4:
    // 0x14bbe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bbe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bbe8:
    // 0x14bbe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14bbe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bbec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14bbecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bbf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14bbf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bbf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14bbf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14bbf8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14bbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14bbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x14BBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BBFCu;
        // 0x14bc00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BC04u;
}
