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

// Function: sceRmdir
// Address: 0x1b3cb8 - 0x1b3cd4
void sceRmdir_0x1b3cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceRmdir_0x1b3cb8");
#endif

    switch (ctx->pc) {
        case 0x1b3cc8u: goto label_1b3cc8;
        default: break;
    }

    ctx->pc = 0x1b3cb8u;

    // 0x1b3cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3cc0: 0xc06ce50  jal         func_1B3940
    ctx->pc = 0x1B3CC0u;
    SET_GPR_U32(ctx, 31, 0x1B3CC8u);
    ctx->pc = 0x1B3CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3CC0u;
    // 0x1b3cc4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3940u, 0x1B3CC0u, 0x1B3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CC8u;
label_1b3cc8:
    // 0x1b3cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3CCCu;
        // 0x1b3cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3CD4u;
}
