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

// Function: BMotion_SetLevel_Sint32__FP11BMotionCtrlbf
// Address: 0x1a44a8 - 0x1a44cc
void BMotion_SetLevel_Sint32__FP11BMotionCtrlbf_0x1a44a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotion_SetLevel_Sint32__FP11BMotionCtrlbf_0x1a44a8");
#endif

    ctx->pc = 0x1a44a8u;

    // 0x1a44a8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A44A8u;
    {
        const bool branch_taken_0x1a44a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44A8u;
        // 0x1a44ac: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44a8) {
            ctx->pc = 0x1A44BCu;
            goto label_1a44bc;
        }
    }
    ctx->pc = 0x1A44B0u;
    // 0x1a44b0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a44b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a44b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1a44b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a44b8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a44bc:
    // 0x1a44bc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a44bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a44c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a44c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a44c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A44C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44CCu;
}
