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

// Function: LoadRelease__6WcFile
// Address: 0x1dc800 - 0x1dc81c
void LoadRelease__6WcFile_0x1dc800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadRelease__6WcFile_0x1dc800");
#endif

    switch (ctx->pc) {
        case 0x1dc810u: goto label_1dc810;
        default: break;
    }

    ctx->pc = 0x1dc800u;

    // 0x1dc800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc808: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1DC808u;
    SET_GPR_U32(ctx, 31, 0x1DC810u);
    ctx->pc = 0x1DC80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC808u;
    // 0x1dc80c: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1DC808u, 0x1DC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC810u;
label_1dc810:
    // 0x1dc810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc814: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC814u;
        // 0x1dc818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC81Cu;
}
