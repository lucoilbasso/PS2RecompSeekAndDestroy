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

// Function: cpy2area
// Address: 0x171d40 - 0x171e6c
void cpy2area_0x171d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cpy2area_0x171d40");
#endif

    switch (ctx->pc) {
        case 0x171db4u: goto label_171db4;
        case 0x171dc4u: goto label_171dc4;
        case 0x171dd8u: goto label_171dd8;
        case 0x171df4u: goto label_171df4;
        case 0x171e04u: goto label_171e04;
        case 0x171e18u: goto label_171e18;
        case 0x171e28u: goto label_171e28;
        case 0x171e38u: goto label_171e38;
        default: break;
    }

    ctx->pc = 0x171d40u;

    // 0x171d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x171d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x171d44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171d4c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x171d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171d54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x171d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x171d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x171d5c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x171d5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d60: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x171d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x171d64: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x171d64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x171d68: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x171d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x171d6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171d70: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x171d70u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x171d74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x171d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x171d78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x171d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x171d7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x171d7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x171d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x171d84: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x171d84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x171d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x171d8c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x171d8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x171d90: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x171d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x171d94: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x171d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d98: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x171D98u;
    {
        const bool branch_taken_0x171d98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x171D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171D98u;
        // 0x171d9c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171d98) {
            ctx->pc = 0x171E3Cu;
            goto label_171e3c;
        }
    }
    ctx->pc = 0x171DA0u;
    // 0x171da0: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x171DA0u;
    {
        const bool branch_taken_0x171da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x171da0) {
            ctx->pc = 0x171DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171DA0u;
            // 0x171da4: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171DE0u;
            goto label_171de0;
        }
    }
    ctx->pc = 0x171DA8u;
    // 0x171da8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171dac: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DACu;
    SET_GPR_U32(ctx, 31, 0x171DB4u);
    ctx->pc = 0x171DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DACu;
    // 0x171db0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DACu, 0x171DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DB4u;
label_171db4:
    // 0x171db4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x171db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171db8: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x171db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x171dbc: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DBCu;
    SET_GPR_U32(ctx, 31, 0x171DC4u);
    ctx->pc = 0x171DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DBCu;
    // 0x171dc0: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DBCu, 0x171DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DC4u;
label_171dc4:
    // 0x171dc4: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x171dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x171dc8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x171dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x171dcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171dd0: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DD0u;
    SET_GPR_U32(ctx, 31, 0x171DD8u);
    ctx->pc = 0x171DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DD0u;
    // 0x171dd4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DD0u, 0x171DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DD8u;
label_171dd8:
    // 0x171dd8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x171DD8u;
    {
        const bool branch_taken_0x171dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DD8u;
        // 0x171ddc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171dd8) {
            ctx->pc = 0x171E3Cu;
            goto label_171e3c;
        }
    }
    ctx->pc = 0x171DE0u;
label_171de0:
    // 0x171de0: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x171de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x171de4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x171DE4u;
    {
        const bool branch_taken_0x171de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171DE4u;
        // 0x171de8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171de4) {
            ctx->pc = 0x171E20u;
            goto label_171e20;
        }
    }
    ctx->pc = 0x171DECu;
    // 0x171dec: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DECu;
    SET_GPR_U32(ctx, 31, 0x171DF4u);
    ctx->pc = 0x171DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DECu;
    // 0x171df0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DECu, 0x171DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171DF4u;
label_171df4:
    // 0x171df4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x171df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171df8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171dfc: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171DFCu;
    SET_GPR_U32(ctx, 31, 0x171E04u);
    ctx->pc = 0x171E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171DFCu;
    // 0x171e00: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171DFCu, 0x171E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E04u;
label_171e04:
    // 0x171e04: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x171e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x171e08: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x171e08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x171e0c: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x171e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x171e10: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171E10u;
    SET_GPR_U32(ctx, 31, 0x171E18u);
    ctx->pc = 0x171E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E10u;
    // 0x171e14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171E10u, 0x171E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E18u;
label_171e18:
    // 0x171e18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171E18u;
    {
        const bool branch_taken_0x171e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E18u;
        // 0x171e1c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e18) {
            ctx->pc = 0x171E3Cu;
            goto label_171e3c;
        }
    }
    ctx->pc = 0x171E20u;
label_171e20:
    // 0x171e20: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171E20u;
    SET_GPR_U32(ctx, 31, 0x171E28u);
    ctx->pc = 0x171E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E20u;
    // 0x171e24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171E20u, 0x171E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E28u;
label_171e28:
    // 0x171e28: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x171e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x171e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e30: 0xc074009  jal         func_1D0024
    ctx->pc = 0x171E30u;
    SET_GPR_U32(ctx, 31, 0x171E38u);
    ctx->pc = 0x171E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171E30u;
    // 0x171e34: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x171E30u, 0x171E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171E38u;
label_171e38:
    // 0x171e38: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x171e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_171e3c:
    // 0x171e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171e44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171e48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x171e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171e4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x171e4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171e50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x171e50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x171e54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x171e54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171e58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x171e58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x171e5c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x171e5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x171e60: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x171e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x171e64: 0x3e00008  jr          $ra
    ctx->pc = 0x171E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171E64u;
        // 0x171e68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171E6Cu;
}
