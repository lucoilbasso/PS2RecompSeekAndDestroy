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

// Function: entry_00106fa0
// Address: 0x106fa0 - 0x106fd8
void entry_00106fa0_0x106fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106fa0_0x106fa0");
#endif

    switch (ctx->pc) {
        case 0x106fbcu: goto label_106fbc;
        case 0x106fd4u: goto label_106fd4;
        default: break;
    }

    ctx->pc = 0x106fa0u;

    // 0x106fa0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x106fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x106fa4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x106FA4u;
    {
        const bool branch_taken_0x106fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FA4u;
        // 0x106fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fa4) {
            ctx->pc = 0x107008u;
            return;
        }
    }
    ctx->pc = 0x106FACu;
    // 0x106fac: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x106FACu;
    {
        const bool branch_taken_0x106fac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x106fac) {
            ctx->pc = 0x106FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106FACu;
            // 0x106fb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106FD8u;
            return;
        }
    }
    ctx->pc = 0x106FB4u;
    // 0x106fb4: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x106FB4u;
    SET_GPR_U32(ctx, 31, 0x106FBCu);
    ctx->pc = 0x106FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FB4u;
    // 0x106fb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x106FB4u, 0x106FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FBCu;
label_106fbc:
    // 0x106fbc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x106fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x106fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x106fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106fc4: 0x24a53ab0  addiu       $a1, $a1, 0x3AB0
    ctx->pc = 0x106fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15024));
    // 0x106fc8: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x106fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x106fcc: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x106FCCu;
    SET_GPR_U32(ctx, 31, 0x106FD4u);
    ctx->pc = 0x106FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FCCu;
    // 0x106fd0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x106FCCu, 0x106FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FD4u;
label_106fd4:
    // 0x106fd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x106fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x106fd8u;
}
