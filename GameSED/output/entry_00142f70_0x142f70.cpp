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

// Function: entry_00142f70
// Address: 0x142f70 - 0x142f8c
void entry_00142f70_0x142f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142f70_0x142f70");
#endif

    switch (ctx->pc) {
        case 0x142f78u: goto label_142f78;
        default: break;
    }

    ctx->pc = 0x142f70u;

    // 0x142f70: 0xc068086  jal         func_1A0218
    ctx->pc = 0x142F70u;
    SET_GPR_U32(ctx, 31, 0x142F78u);
    ctx->pc = 0x142F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F70u;
    // 0x142f74: 0x240547f0  addiu       $a1, $zero, 0x47F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x142F70u, 0x142F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F78u;
label_142f78:
    // 0x142f78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x142f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f7c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142F7Cu;
    {
        const bool branch_taken_0x142f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x142F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F7Cu;
        // 0x142f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f7c) {
            ctx->pc = 0x142F8Cu;
            return;
        }
    }
    ctx->pc = 0x142F84u;
    // 0x142f84: 0xc06726c  jal         func_19C9B0
    ctx->pc = 0x142F84u;
    SET_GPR_U32(ctx, 31, 0x142F8Cu);
    ctx->pc = 0x142F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F84u;
    // 0x142f88: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C9B0u, 0x142F84u, 0x142F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F8Cu;
}
