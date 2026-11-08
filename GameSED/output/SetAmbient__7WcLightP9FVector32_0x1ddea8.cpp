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

// Function: SetAmbient__7WcLightP9FVector32
// Address: 0x1ddea8 - 0x1ddecc
void SetAmbient__7WcLightP9FVector32_0x1ddea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAmbient__7WcLightP9FVector32_0x1ddea8");
#endif

    ctx->pc = 0x1ddea8u;

    // 0x1ddea8: 0x248301e0  addiu       $v1, $a0, 0x1E0
    ctx->pc = 0x1ddea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x1ddeac: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1ddeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1ddeb0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1ddeb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ddeb4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1ddeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1ddeb8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1ddeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1ddebc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ddebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ddec0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1ddec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1ddec4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEC4u;
        // 0x1ddec8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDECCu;
}
