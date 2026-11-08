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

// Function: _SetGroundFound__18_GroundHitScanWork
// Address: 0x182a50 - 0x182a84
void ps2__SetGroundFound__18_GroundHitScanWork_0x182a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SetGroundFound__18_GroundHitScanWork_0x182a50");
#endif

    ctx->pc = 0x182a50u;

    // 0x182a50: 0x3c050027  lui         $a1, 0x27
    ctx->pc = 0x182a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)39 << 16));
    // 0x182a54: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x182a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182a58: 0x24a5dbc0  addiu       $a1, $a1, -0x2440
    ctx->pc = 0x182a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
    // 0x182a5c: 0x8f868d3c  lw          $a2, -0x72C4($gp)
    ctx->pc = 0x182a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x182a60: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x182a60u;
    { uint32_t bits = FAST_READ32(0x26DBCCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182a64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182a68: 0x8f838d40  lw          $v1, -0x72C0($gp)
    ctx->pc = 0x182a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    // 0x182a6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x182a6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x182a70: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x182a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x182a74: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x182a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x182a78: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x182a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x182a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x182A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A7Cu;
        // 0x182a80: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182A84u;
}
