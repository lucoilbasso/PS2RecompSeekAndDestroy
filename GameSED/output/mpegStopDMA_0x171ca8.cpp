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

// Function: mpegStopDMA
// Address: 0x171ca8 - 0x171ccc
void mpegStopDMA_0x171ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mpegStopDMA_0x171ca8");
#endif

    switch (ctx->pc) {
        case 0x171cbcu: goto label_171cbc;
        default: break;
    }

    ctx->pc = 0x171ca8u;

    // 0x171ca8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x171ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x171cac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171cb4: 0xc05d590  jal         func_175640
    ctx->pc = 0x171CB4u;
    SET_GPR_U32(ctx, 31, 0x171CBCu);
    ctx->pc = 0x171CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CB4u;
    // 0x171cb8: 0x248413b0  addiu       $a0, $a0, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175640u, 0x171CB4u, 0x171CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CBCu;
label_171cbc:
    // 0x171cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x171CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171CC4u;
        // 0x171cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171CCCu;
}
