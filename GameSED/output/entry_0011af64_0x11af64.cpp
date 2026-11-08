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

// Function: entry_0011af64
// Address: 0x11af64 - 0x11af80
void entry_0011af64_0x11af64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011af64_0x11af64");
#endif

    switch (ctx->pc) {
        case 0x11af70u: goto label_11af70;
        default: break;
    }

    ctx->pc = 0x11af64u;

    // 0x11af64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af68: 0xc046d5a  jal         func_11B568
    ctx->pc = 0x11AF68u;
    SET_GPR_U32(ctx, 31, 0x11AF70u);
    ctx->pc = 0x11AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AF68u;
    // 0x11af6c: 0x8c85008c  lw          $a1, 0x8C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B568u, 0x11AF68u, 0x11AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AF70u;
label_11af70:
    // 0x11af70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11af70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11af74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11af74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11af78: 0x3e00008  jr          $ra
    ctx->pc = 0x11AF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF78u;
        // 0x11af7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AF80u;
}
