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

// Function: entry_00189690
// Address: 0x189690 - 0x1896a8
void entry_00189690_0x189690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189690_0x189690");
#endif

    switch (ctx->pc) {
        case 0x189698u: goto label_189698;
        default: break;
    }

    ctx->pc = 0x189690u;

    // 0x189690: 0xc0612a4  jal         func_184A90
    ctx->pc = 0x189690u;
    SET_GPR_U32(ctx, 31, 0x189698u);
    ctx->pc = 0x189694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189690u;
    // 0x189694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184A90u, 0x189690u, 0x189698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189698u;
label_189698:
    // 0x189698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x189698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18969c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18969cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1896a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1896A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1896A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1896A0u;
        // 0x1896a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1896A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1896A8u;
}
