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

// Function: readBufEndGet
// Address: 0x170dd8 - 0x170e08
void readBufEndGet_0x170dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufEndGet_0x170dd8");
#endif

    ctx->pc = 0x170dd8u;

    // 0x170dd8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x170dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x170ddc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x170ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x170de0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x170de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x170de4: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x170de4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170de8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x170de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170dec: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x170decu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x170df0: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x170df0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x170df4: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x170df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x170df8: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x170df8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x170dfc: 0xac260004  sw          $a2, 0x4($at)
    ctx->pc = 0x170dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 6));
    // 0x170e00: 0x3e00008  jr          $ra
    ctx->pc = 0x170E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170E08u;
}
