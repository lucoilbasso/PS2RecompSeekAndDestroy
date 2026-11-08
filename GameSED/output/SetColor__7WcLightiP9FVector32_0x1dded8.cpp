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

// Function: SetColor__7WcLightiP9FVector32
// Address: 0x1dded8 - 0x1ddf04
void SetColor__7WcLightiP9FVector32_0x1dded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__7WcLightiP9FVector32_0x1dded8");
#endif

    ctx->pc = 0x1dded8u;

    // 0x1dded8: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x1dded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1ddedc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1ddedcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1ddee0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1ddee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ddee4: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x1ddee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1ddee8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1ddee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ddeec: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1ddeecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1ddef0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ddef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ddef4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ddef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ddef8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ddef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ddefc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEFCu;
        // 0x1ddf00: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF04u;
}
