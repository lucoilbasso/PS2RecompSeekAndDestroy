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

// Function: entry_0011c8a0
// Address: 0x11c8a0 - 0x11c8b4
void entry_0011c8a0_0x11c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c8a0_0x11c8a0");
#endif

    switch (ctx->pc) {
        case 0x11c8a8u: goto label_11c8a8;
        default: break;
    }

    ctx->pc = 0x11c8a0u;

    // 0x11c8a0: 0xc0460e6  jal         func_118398
    ctx->pc = 0x11C8A0u;
    SET_GPR_U32(ctx, 31, 0x11C8A8u);
    ctx->pc = 0x11C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8A0u;
    // 0x11c8a4: 0x24a54600  addiu       $a1, $a1, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118398u, 0x11C8A0u, 0x11C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8A8u;
label_11c8a8:
    // 0x11c8a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11C8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8ACu;
        // 0x11c8b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C8B4u;
}
