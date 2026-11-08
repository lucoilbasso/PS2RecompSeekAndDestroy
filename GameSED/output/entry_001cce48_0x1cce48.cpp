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

// Function: entry_001cce48
// Address: 0x1cce48 - 0x1cceb0
void entry_001cce48_0x1cce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cce48_0x1cce48");
#endif

    switch (ctx->pc) {
        case 0x1cce50u: goto label_1cce50;
        case 0x1cce68u: goto label_1cce68;
        case 0x1cce70u: goto label_1cce70;
        case 0x1cce7cu: goto label_1cce7c;
        case 0x1cce88u: goto label_1cce88;
        case 0x1cce90u: goto label_1cce90;
        default: break;
    }

    ctx->pc = 0x1cce48u;

    // 0x1cce48: 0xc0732b0  jal         func_1CCAC0
    ctx->pc = 0x1CCE48u;
    SET_GPR_U32(ctx, 31, 0x1CCE50u);
    ctx->pc = 0x1CCAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCAC0u, 0x1CCE48u, 0x1CCE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE50u;
label_1cce50:
    // 0x1cce50: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1cce50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1cce54: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1cce54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1cce58: 0x24420cf0  addiu       $v0, $v0, 0xCF0
    ctx->pc = 0x1cce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x1cce5c: 0x2484c818  addiu       $a0, $a0, -0x37E8
    ctx->pc = 0x1cce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952984));
    // 0x1cce60: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1CCE60u;
    SET_GPR_U32(ctx, 31, 0x1CCE68u);
    ctx->pc = 0x1CCE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE60u;
    // 0x1cce64: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1CCE60u, 0x1CCE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE68u;
label_1cce68:
    // 0x1cce68: 0xc073312  jal         func_1CCC48
    ctx->pc = 0x1CCE68u;
    SET_GPR_U32(ctx, 31, 0x1CCE70u);
    ctx->pc = 0x1CCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE68u;
    // 0x1cce6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCC48u, 0x1CCE68u, 0x1CCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE70u;
label_1cce70:
    // 0x1cce70: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1cce70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1cce74: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1CCE74u;
    SET_GPR_U32(ctx, 31, 0x1CCE7Cu);
    ctx->pc = 0x1CCE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE74u;
    // 0x1cce78: 0x2484c828  addiu       $a0, $a0, -0x37D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1CCE74u, 0x1CCE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE7Cu;
label_1cce7c:
    // 0x1cce7c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1cce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1cce80: 0xc0738d4  jal         func_1CE350
    ctx->pc = 0x1CCE80u;
    SET_GPR_U32(ctx, 31, 0x1CCE88u);
    ctx->pc = 0x1CCE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE80u;
    // 0x1cce84: 0x2484c808  addiu       $a0, $a0, -0x37F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE350u, 0x1CCE80u, 0x1CCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE88u;
label_1cce88:
    // 0x1cce88: 0xc0732c8  jal         func_1CCB20
    ctx->pc = 0x1CCE88u;
    SET_GPR_U32(ctx, 31, 0x1CCE90u);
    ctx->pc = 0x1CCB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCB20u, 0x1CCE88u, 0x1CCE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE90u;
label_1cce90:
    // 0x1cce90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cce90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce94: 0x12530014  beq         $s2, $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CCE94u;
    {
        const bool branch_taken_0x1cce94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x1cce94) {
            ctx->pc = 0x1CCEE8u;
            return;
        }
    }
    ctx->pc = 0x1CCE9Cu;
    // 0x1cce9c: 0x1a800012  blez        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCE9Cu;
    {
        const bool branch_taken_0x1cce9c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1CCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE9Cu;
        // 0x1ccea0: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce9c) {
            ctx->pc = 0x1CCEE8u;
            return;
        }
    }
    ctx->pc = 0x1CCEA4u;
    // 0x1ccea4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1ccea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccea8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1ccea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cceac: 0x0  nop
    ctx->pc = 0x1cceacu;
    // NOP
    ctx->pc = 0x1cceb0u;
}
