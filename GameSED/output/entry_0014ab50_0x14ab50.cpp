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

// Function: entry_0014ab50
// Address: 0x14ab50 - 0x14ab78
void entry_0014ab50_0x14ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ab50_0x14ab50");
#endif

    switch (ctx->pc) {
        case 0x14ab58u: goto label_14ab58;
        default: break;
    }

    ctx->pc = 0x14ab50u;

    // 0x14ab50: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14AB50u;
    SET_GPR_U32(ctx, 31, 0x14AB58u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14AB50u, 0x14AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB58u;
label_14ab58:
    // 0x14ab58: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14ab5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14ab5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14ab60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab64: 0x24a56ba8  addiu       $a1, $a1, 0x6BA8
    ctx->pc = 0x14ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27560));
    // 0x14ab68: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AB68u;
    {
        const bool branch_taken_0x14ab68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB68u;
        // 0x14ab6c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab68) {
            ctx->pc = 0x14AB78u;
            return;
        }
    }
    ctx->pc = 0x14AB70u;
    // 0x14ab70: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14AB70u;
    SET_GPR_U32(ctx, 31, 0x14AB78u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14AB70u, 0x14AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB78u;
}
