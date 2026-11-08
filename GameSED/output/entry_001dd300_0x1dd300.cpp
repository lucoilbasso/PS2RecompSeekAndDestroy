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

// Function: entry_001dd300
// Address: 0x1dd300 - 0x1dd314
void entry_001dd300_0x1dd300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd300_0x1dd300");
#endif

    switch (ctx->pc) {
        case 0x1dd308u: goto label_1dd308;
        default: break;
    }

    ctx->pc = 0x1dd300u;

    // 0x1dd300: 0xc069070  jal         func_1A41C0
    ctx->pc = 0x1DD300u;
    SET_GPR_U32(ctx, 31, 0x1DD308u);
    ctx->pc = 0x1A41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41C0u, 0x1DD300u, 0x1DD308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD308u;
label_1dd308:
    // 0x1dd308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd30c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD30Cu;
        // 0x1dd310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD314u;
}
