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

// Function: entry_001d02b0
// Address: 0x1d02b0 - 0x1d02c4
void entry_001d02b0_0x1d02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d02b0_0x1d02b0");
#endif

    switch (ctx->pc) {
        case 0x1d02b8u: goto label_1d02b8;
        default: break;
    }

    ctx->pc = 0x1d02b0u;

    // 0x1d02b0: 0xc0744b2  jal         func_1D12C8
    ctx->pc = 0x1D02B0u;
    SET_GPR_U32(ctx, 31, 0x1D02B8u);
    ctx->pc = 0x1D02B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D02B0u;
    // 0x1d02b4: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D12C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D12C8u, 0x1D02B0u, 0x1D02B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D02B8u;
label_1d02b8:
    // 0x1d02b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d02b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d02bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D02BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D02BCu;
        // 0x1d02c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D02BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D02C4u;
}
