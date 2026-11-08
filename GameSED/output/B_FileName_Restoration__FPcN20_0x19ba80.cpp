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

// Function: B_FileName_Restoration__FPcN20
// Address: 0x19ba80 - 0x19bba4
void B_FileName_Restoration__FPcN20_0x19ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_FileName_Restoration__FPcN20_0x19ba80");
#endif

    switch (ctx->pc) {
        case 0x19baa8u: goto label_19baa8;
        case 0x19bae0u: goto label_19bae0;
        default: break;
    }

    ctx->pc = 0x19ba80u;

    // 0x19ba80: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x19ba80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19ba84: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x19ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19ba88: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19ba88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba8c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BA8Cu;
    {
        const bool branch_taken_0x19ba8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19BA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA8Cu;
        // 0x19ba90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba8c) {
            ctx->pc = 0x19BAA0u;
            goto label_19baa0;
        }
    }
    ctx->pc = 0x19BA94u;
    // 0x19ba94: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x19ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x19ba98: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BA98u;
    {
        const bool branch_taken_0x19ba98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ba98) {
            ctx->pc = 0x19BA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BA98u;
            // 0x19ba9c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BAB8u;
            goto label_19bab8;
        }
    }
    ctx->pc = 0x19BAA0u;
label_19baa0:
    // 0x19baa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19BAA0u;
    {
        const bool branch_taken_0x19baa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAA0u;
        // 0x19baa4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19baa0) {
            ctx->pc = 0x19BAB4u;
            goto label_19bab4;
        }
    }
    ctx->pc = 0x19BAA8u;
label_19baa8:
    // 0x19baa8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x19baa8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19baac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19baacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19bab0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19bab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_19bab4:
    // 0x19bab4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x19bab4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_19bab8:
    // 0x19bab8: 0x0  nop
    ctx->pc = 0x19bab8u;
    // NOP
    // 0x19babc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19BABCu;
    {
        const bool branch_taken_0x19babc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BABCu;
        // 0x19bac0: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19babc) {
            ctx->pc = 0x19BAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19baa8;
        }
    }
    ctx->pc = 0x19BAC4u;
    // 0x19bac4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bac8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x19BAC8u;
    {
        const bool branch_taken_0x19bac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAC8u;
        // 0x19bacc: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bac8) {
            ctx->pc = 0x19BB80u;
            goto label_19bb80;
        }
    }
    ctx->pc = 0x19BAD0u;
    // 0x19bad0: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x19bad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x19bad4: 0x2408005c  addiu       $t0, $zero, 0x5C
    ctx->pc = 0x19bad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x19bad8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x19bad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19badc: 0x0  nop
    ctx->pc = 0x19badcu;
    // NOP
label_19bae0:
    // 0x19bae0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x19bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x19bae4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19bae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19bae8: 0x11400011  beqz        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BAE8u;
    {
        const bool branch_taken_0x19bae8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAE8u;
        // 0x19baec: 0x21e03  sra         $v1, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bae8) {
            ctx->pc = 0x19BB30u;
            goto label_19bb30;
        }
    }
    ctx->pc = 0x19BAF0u;
    // 0x19baf0: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x19baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x19baf4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19baf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19baf8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BAF8u;
    {
        const bool branch_taken_0x19baf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAF8u;
        // 0x19bafc: 0x691026  xor         $v0, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19baf8) {
            ctx->pc = 0x19BB08u;
            goto label_19bb08;
        }
    }
    ctx->pc = 0x19BB00u;
    // 0x19bb00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19BB00u;
    {
        const bool branch_taken_0x19bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB00u;
        // 0x19bb04: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb00) {
            ctx->pc = 0x19BB0Cu;
            goto label_19bb0c;
        }
    }
    ctx->pc = 0x19BB08u;
label_19bb08:
    // 0x19bb08: 0x102180a  movz        $v1, $t0, $v0
    ctx->pc = 0x19bb08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
label_19bb0c:
    // 0x19bb0c: 0x54680017  bnel        $v1, $t0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19BB0Cu;
    {
        const bool branch_taken_0x19bb0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x19bb0c) {
            ctx->pc = 0x19BB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB0Cu;
            // 0x19bb10: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            goto label_19bb6c;
        }
    }
    ctx->pc = 0x19BB14u;
    // 0x19bb14: 0x50e40015  beql        $a3, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19BB14u;
    {
        const bool branch_taken_0x19bb14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x19bb14) {
            ctx->pc = 0x19BB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB14u;
            // 0x19bb18: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            goto label_19bb6c;
        }
    }
    ctx->pc = 0x19BB1Cu;
    // 0x19bb1c: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x19bb1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x19bb20: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19BB20u;
    {
        const bool branch_taken_0x19bb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bb20) {
            ctx->pc = 0x19BB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB20u;
            // 0x19bb24: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            goto label_19bb6c;
        }
    }
    ctx->pc = 0x19BB28u;
    // 0x19bb28: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19BB28u;
    {
        const bool branch_taken_0x19bb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB28u;
        // 0x19bb2c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb28) {
            ctx->pc = 0x19BB78u;
            goto label_19bb78;
        }
    }
    ctx->pc = 0x19BB30u;
label_19bb30:
    // 0x19bb30: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x19bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x19bb34: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19bb34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19bb38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BB38u;
    {
        const bool branch_taken_0x19bb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB38u;
        // 0x19bb3c: 0x681026  xor         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb38) {
            ctx->pc = 0x19BB48u;
            goto label_19bb48;
        }
    }
    ctx->pc = 0x19BB40u;
    // 0x19bb40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19BB40u;
    {
        const bool branch_taken_0x19bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB40u;
        // 0x19bb44: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb40) {
            ctx->pc = 0x19BB4Cu;
            goto label_19bb4c;
        }
    }
    ctx->pc = 0x19BB48u;
label_19bb48:
    // 0x19bb48: 0x122180a  movz        $v1, $t1, $v0
    ctx->pc = 0x19bb48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
label_19bb4c:
    // 0x19bb4c: 0x54690007  bnel        $v1, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BB4Cu;
    {
        const bool branch_taken_0x19bb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x19bb4c) {
            ctx->pc = 0x19BB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB4Cu;
            // 0x19bb50: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            goto label_19bb6c;
        }
    }
    ctx->pc = 0x19BB54u;
    // 0x19bb54: 0x50e40005  beql        $a3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BB54u;
    {
        const bool branch_taken_0x19bb54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x19bb54) {
            ctx->pc = 0x19BB58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB54u;
            // 0x19bb58: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB6Cu;
            goto label_19bb6c;
        }
    }
    ctx->pc = 0x19BB5Cu;
    // 0x19bb5c: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x19bb5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x19bb60: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BB60u;
    {
        const bool branch_taken_0x19bb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19bb60) {
            ctx->pc = 0x19BB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BB60u;
            // 0x19bb64: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BB78u;
            goto label_19bb78;
        }
    }
    ctx->pc = 0x19BB68u;
    // 0x19bb68: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x19bb68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_19bb6c:
    // 0x19bb6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19bb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19bb70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19bb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19bb74: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19bb74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19bb78:
    // 0x19bb78: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x19BB78u;
    {
        const bool branch_taken_0x19bb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB78u;
        // 0x19bb7c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb78) {
            ctx->pc = 0x19BAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19bae0;
        }
    }
    ctx->pc = 0x19BB80u;
label_19bb80:
    // 0x19bb80: 0x11400006  beqz        $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19BB80u;
    {
        const bool branch_taken_0x19bb80 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB80u;
        // 0x19bb84: 0x2402003b  addiu       $v0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb80) {
            ctx->pc = 0x19BB9Cu;
            goto label_19bb9c;
        }
    }
    ctx->pc = 0x19BB88u;
    // 0x19bb88: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x19bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x19bb8c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x19bb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19bb90: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19bb90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19bb94: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x19bb94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19bb98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19bb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19bb9c:
    // 0x19bb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BB9Cu;
        // 0x19bba0: 0xa0e00000  sb          $zero, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BBA4u;
}
