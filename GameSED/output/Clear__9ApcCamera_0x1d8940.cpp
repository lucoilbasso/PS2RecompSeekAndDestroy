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

// Function: Clear__9ApcCamera
// Address: 0x1d8940 - 0x1d8970
void Clear__9ApcCamera_0x1d8940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9ApcCamera_0x1d8940");
#endif

    ctx->pc = 0x1d8940u;

    // 0x1d8940: 0xac8001d0  sw          $zero, 0x1D0($a0)
    ctx->pc = 0x1d8940u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 0));
    // 0x1d8944: 0x248201e0  addiu       $v0, $a0, 0x1E0
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    // 0x1d8948: 0xac8001d4  sw          $zero, 0x1D4($a0)
    ctx->pc = 0x1d8948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 0));
    // 0x1d894c: 0xac8001d8  sw          $zero, 0x1D8($a0)
    ctx->pc = 0x1d894cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 0));
    // 0x1d8950: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1d8950u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1d8954: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d8954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8958: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d8958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d895c: 0xac800214  sw          $zero, 0x214($a0)
    ctx->pc = 0x1d895cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 532), GPR_U32(ctx, 0));
    // 0x1d8960: 0xe4800204  swc1        $f0, 0x204($a0)
    ctx->pc = 0x1d8960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 516), bits); }
    // 0x1d8964: 0xac8001f4  sw          $zero, 0x1F4($a0)
    ctx->pc = 0x1d8964u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 500), GPR_U32(ctx, 0));
    // 0x1d8968: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8968u;
        // 0x1d896c: 0xac8001f8  sw          $zero, 0x1F8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8970u;
}
