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

// Function: __mdiff
// Address: 0x1d5c78 - 0x1d5e08
void ps2___mdiff_0x1d5c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mdiff_0x1d5c78");
#endif

    switch (ctx->pc) {
        case 0x1d5ca8u: goto label_1d5ca8;
        case 0x1d5cbcu: goto label_1d5cbc;
        case 0x1d5cf4u: goto label_1d5cf4;
        case 0x1d5d28u: goto label_1d5d28;
        case 0x1d5d80u: goto label_1d5d80;
        case 0x1d5dc8u: goto label_1d5dc8;
        default: break;
    }

    ctx->pc = 0x1d5c78u;

    // 0x1d5c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5c7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5c80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5c88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d5c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5c90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d5c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5c9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5ca0: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D5CA0u;
    SET_GPR_U32(ctx, 31, 0x1D5CA8u);
    ctx->pc = 0x1D5CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA0u;
    // 0x1d5ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D5CA0u, 0x1D5CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CA8u;
label_1d5ca8:
    // 0x1d5ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cac: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5CACu;
    {
        const bool branch_taken_0x1d5cac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CACu;
        // 0x1d5cb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cac) {
            ctx->pc = 0x1D5CD0u;
            goto label_1d5cd0;
        }
    }
    ctx->pc = 0x1D5CB4u;
    // 0x1d5cb4: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5CB4u;
    SET_GPR_U32(ctx, 31, 0x1D5CBCu);
    ctx->pc = 0x1D5CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CB4u;
    // 0x1d5cb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5CB4u, 0x1D5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CBCu;
label_1d5cbc:
    // 0x1d5cbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5cc0: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1d5cc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cc4: 0xad630010  sw          $v1, 0x10($t3)
    ctx->pc = 0x1d5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 3));
    // 0x1d5cc8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1D5CC8u;
    {
        const bool branch_taken_0x1d5cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CC8u;
        // 0x1d5ccc: 0xad600014  sw          $zero, 0x14($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cc8) {
            ctx->pc = 0x1D5DECu;
            goto label_1d5dec;
        }
    }
    ctx->pc = 0x1D5CD0u;
label_1d5cd0:
    // 0x1d5cd0: 0x6030005  bgezl       $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5CD0u;
    {
        const bool branch_taken_0x1d5cd0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d5cd0) {
            ctx->pc = 0x1D5CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5CD0u;
            // 0x1d5cd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5CE8u;
            goto label_1d5ce8;
        }
    }
    ctx->pc = 0x1D5CD8u;
    // 0x1d5cd8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1d5cd8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cdc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1d5cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ce0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d5ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ce4: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1d5ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ce8:
    // 0x1d5ce8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1d5ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d5cec: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5CECu;
    SET_GPR_U32(ctx, 31, 0x1D5CF4u);
    ctx->pc = 0x1D5CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CECu;
    // 0x1d5cf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5CECu, 0x1D5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CF4u;
label_1d5cf4:
    // 0x1d5cf4: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1d5cf8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1d5cf8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5cfc: 0x26490014  addiu       $t1, $s2, 0x14
    ctx->pc = 0x1d5cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1d5d00: 0xad70000c  sw          $s0, 0xC($t3)
    ctx->pc = 0x1d5d00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 16));
    // 0x1d5d04: 0x25670014  addiu       $a3, $t3, 0x14
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 20));
    // 0x1d5d08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5d08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d0c: 0x8e2c0010  lw          $t4, 0x10($s1)
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d5d10: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d5d14: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x1d5d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1d5d18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5d1c: 0x1036821  addu        $t5, $t0, $v1
    ctx->pc = 0x1d5d1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1d5d20: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1d5d24: 0x0  nop
    ctx->pc = 0x1d5d24u;
    // NOP
label_1d5d28:
    // 0x1d5d28: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1d5d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5d2c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d5d30: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1d5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d5d34: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1d5d34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1d5d38: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1d5d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d5d3c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1d5d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1d5d40: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1d5d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d5d44: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1d5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d5d48: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d5d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d5d4c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1d5d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d5d50: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1d5d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5d54: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x1d5d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1d5d58: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x1d5d58u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1d5d5c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x1d5d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d5d60: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1d5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1d5d64: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x1d5d64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d5d68: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d5d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d5d6c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D5D6Cu;
    {
        const bool branch_taken_0x1d5d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D6Cu;
        // 0x1d5d70: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d6c) {
            ctx->pc = 0x1D5D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5d28;
        }
    }
    ctx->pc = 0x1D5D74u;
    // 0x1d5d74: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x1d5d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1d5d78: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5D78u;
    {
        const bool branch_taken_0x1d5d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d78) {
            ctx->pc = 0x1D5D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5D78u;
            // 0x1d5d7c: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5DB8u;
            goto label_1d5db8;
        }
    }
    ctx->pc = 0x1D5D80u;
label_1d5d80:
    // 0x1d5d80: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d5d84: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d5d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d5d88: 0x10d202b  sltu        $a0, $t0, $t5
    ctx->pc = 0x1d5d88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1d5d8c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d5d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d5d90: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1d5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d5d94: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1d5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d5d98: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x1d5d98u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1d5d9c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x1d5d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d5da0: 0x4a2821  addu        $a1, $v0, $t2
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d5da4: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x1d5da4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d5da8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d5dac: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D5DACu;
    {
        const bool branch_taken_0x1d5dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DACu;
        // 0x1d5db0: 0x55403  sra         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dac) {
            ctx->pc = 0x1D5D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5d80;
        }
    }
    ctx->pc = 0x1D5DB4u;
    // 0x1d5db4: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1d5db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_1d5db8:
    // 0x1d5db8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5dbc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5DBCu;
    {
        const bool branch_taken_0x1d5dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5dbc) {
            ctx->pc = 0x1D5DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5DBCu;
            // 0x1d5dc0: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5DE8u;
            goto label_1d5de8;
        }
    }
    ctx->pc = 0x1D5DC4u;
    // 0x1d5dc4: 0x0  nop
    ctx->pc = 0x1d5dc4u;
    // NOP
label_1d5dc8:
    // 0x1d5dc8: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1d5dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x1d5dcc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5dd0: 0x0  nop
    ctx->pc = 0x1d5dd0u;
    // NOP
    // 0x1d5dd4: 0x0  nop
    ctx->pc = 0x1d5dd4u;
    // NOP
    // 0x1d5dd8: 0x0  nop
    ctx->pc = 0x1d5dd8u;
    // NOP
    // 0x1d5ddc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5DDCu;
    {
        const bool branch_taken_0x1d5ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DDCu;
        // 0x1d5de0: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ddc) {
            ctx->pc = 0x1D5DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5dc8;
        }
    }
    ctx->pc = 0x1D5DE4u;
    // 0x1d5de4: 0xad6c0010  sw          $t4, 0x10($t3)
    ctx->pc = 0x1d5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
label_1d5de8:
    // 0x1d5de8: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x1d5de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1d5dec:
    // 0x1d5dec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5df0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5df0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5df4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5df4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5df8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5df8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E00u;
        // 0x1d5e04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E08u;
}
