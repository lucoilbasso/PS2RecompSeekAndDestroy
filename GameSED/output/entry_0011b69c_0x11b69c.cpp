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

// Function: entry_0011b69c
// Address: 0x11b69c - 0x11b6b8
void entry_0011b69c_0x11b69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b69c_0x11b69c");
#endif

    switch (ctx->pc) {
        case 0x11b6a8u: goto label_11b6a8;
        default: break;
    }

    ctx->pc = 0x11b69cu;

    // 0x11b69c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b6a0: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x11B6A0u;
    SET_GPR_U32(ctx, 31, 0x11B6A8u);
    ctx->pc = 0x11B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B6A0u;
    // 0x11b6a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x11B6A0u, 0x11B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B6A8u;
label_11b6a8:
    // 0x11b6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b6ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6B0u;
        // 0x11b6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B6B8u;
}
