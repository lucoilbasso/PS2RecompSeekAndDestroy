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

// Function: entry_0011cd08
// Address: 0x11cd08 - 0x11cd1c
void entry_0011cd08_0x11cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cd08_0x11cd08");
#endif

    switch (ctx->pc) {
        case 0x11cd10u: goto label_11cd10;
        default: break;
    }

    ctx->pc = 0x11cd08u;

    // 0x11cd08: 0xc046ec6  jal         func_11BB18
    ctx->pc = 0x11CD08u;
    SET_GPR_U32(ctx, 31, 0x11CD10u);
    ctx->pc = 0x11BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BB18u, 0x11CD08u, 0x11CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD10u;
label_11cd10:
    // 0x11cd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11cd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cd14: 0x3e00008  jr          $ra
    ctx->pc = 0x11CD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD14u;
        // 0x11cd18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CD1Cu;
}
