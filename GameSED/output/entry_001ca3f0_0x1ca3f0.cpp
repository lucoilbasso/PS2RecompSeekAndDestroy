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

// Function: entry_001ca3f0
// Address: 0x1ca3f0 - 0x1ca408
void entry_001ca3f0_0x1ca3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca3f0_0x1ca3f0");
#endif

    switch (ctx->pc) {
        case 0x1ca3f8u: goto label_1ca3f8;
        default: break;
    }

    ctx->pc = 0x1ca3f0u;

    // 0x1ca3f0: 0xc073950  jal         func_1CE540
    ctx->pc = 0x1CA3F0u;
    SET_GPR_U32(ctx, 31, 0x1CA3F8u);
    ctx->pc = 0x1CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE540u, 0x1CA3F0u, 0x1CA3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3F8u;
label_1ca3f8:
    // 0x1ca3f8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1ca3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca3fc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1ca3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca400: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA400u;
        // 0x1ca404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA408u;
}
