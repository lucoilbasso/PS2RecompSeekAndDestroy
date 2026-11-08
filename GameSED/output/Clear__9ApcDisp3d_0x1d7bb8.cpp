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

// Function: Clear__9ApcDisp3d
// Address: 0x1d7bb8 - 0x1d7be8
void Clear__9ApcDisp3d_0x1d7bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9ApcDisp3d_0x1d7bb8");
#endif

    ctx->pc = 0x1d7bb8u;

    // 0x1d7bb8: 0xac8001d0  sw          $zero, 0x1D0($a0)
    ctx->pc = 0x1d7bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 0));
    // 0x1d7bbc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1d7bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1d7bc0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1d7bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1d7bc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d7bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d7bc8: 0x8c62d630  lw          $v0, -0x29D0($v1)
    ctx->pc = 0x1d7bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1d7bcc: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x1d7bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x1d7bd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d7bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7bd4: 0xac8201dc  sw          $v0, 0x1DC($a0)
    ctx->pc = 0x1d7bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 476), GPR_U32(ctx, 2));
    // 0x1d7bd8: 0xe48101d4  swc1        $f1, 0x1D4($a0)
    ctx->pc = 0x1d7bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
    // 0x1d7bdc: 0xe48001d8  swc1        $f0, 0x1D8($a0)
    ctx->pc = 0x1d7bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 472), bits); }
    // 0x1d7be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7BE8u;
}
