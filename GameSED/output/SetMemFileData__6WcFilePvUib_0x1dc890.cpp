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

// Function: SetMemFileData__6WcFilePvUib
// Address: 0x1dc890 - 0x1dc8bc
void SetMemFileData__6WcFilePvUib_0x1dc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMemFileData__6WcFilePvUib_0x1dc890");
#endif

    ctx->pc = 0x1dc890u;

    // 0x1dc890: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1dc890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1dc894: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1dc894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1dc898: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x1dc898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x1dc89c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1dc89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1dc8a0: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1dc8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x1dc8a4: 0x34430008  ori         $v1, $v0, 0x8
    ctx->pc = 0x1dc8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1dc8a8: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x1dc8a8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1dc8ac: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x1dc8acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1dc8b0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1dc8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1dc8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC8BCu;
}
