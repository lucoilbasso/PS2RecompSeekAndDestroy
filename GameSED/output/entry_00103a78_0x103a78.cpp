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

// Function: entry_00103a78
// Address: 0x103a78 - 0x103a90
void entry_00103a78_0x103a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103a78_0x103a78");
#endif

    switch (ctx->pc) {
        case 0x103a88u: goto label_103a88;
        default: break;
    }

    ctx->pc = 0x103a78u;

    // 0x103a78: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103A78u;
    {
        const bool branch_taken_0x103a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x103a78) {
            ctx->pc = 0x103A90u;
            return;
        }
    }
    ctx->pc = 0x103A80u;
    // 0x103a80: 0xc068436  jal         func_1A10D8
    ctx->pc = 0x103A80u;
    SET_GPR_U32(ctx, 31, 0x103A88u);
    ctx->pc = 0x103A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103A80u;
    // 0x103a84: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x103A80u, 0x103A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A88u;
label_103a88:
    // 0x103a88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103A88u;
    {
        const bool branch_taken_0x103a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A88u;
        // 0x103a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a88) {
            ctx->pc = 0x103A9Cu;
            return;
        }
    }
    ctx->pc = 0x103A90u;
}
