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

// Function: entry_0017d040
// Address: 0x17d040 - 0x17d054
void entry_0017d040_0x17d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d040_0x17d040");
#endif

    switch (ctx->pc) {
        case 0x17d048u: goto label_17d048;
        default: break;
    }

    ctx->pc = 0x17d040u;

    // 0x17d040: 0xc05f2fe  jal         func_17CBF8
    ctx->pc = 0x17D040u;
    SET_GPR_U32(ctx, 31, 0x17D048u);
    ctx->pc = 0x17CBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CBF8u, 0x17D040u, 0x17D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D048u;
label_17d048:
    // 0x17d048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d04c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D04Cu;
        // 0x17d050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D054u;
}
