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

// Function: BMotion_SetLevel_Uint8__FP11BMotionCtrlbf
// Address: 0x1a4448 - 0x1a4474
void BMotion_SetLevel_Uint8__FP11BMotionCtrlbf_0x1a4448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotion_SetLevel_Uint8__FP11BMotionCtrlbf_0x1a4448");
#endif

    ctx->pc = 0x1a4448u;

    // 0x1a4448: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a4448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a444c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a444cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a4450: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4450u;
    {
        const bool branch_taken_0x1a4450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4450u;
        // 0x1a4454: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4450) {
            ctx->pc = 0x1A4460u;
            goto label_1a4460;
        }
    }
    ctx->pc = 0x1A4458u;
    // 0x1a4458: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1a4458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a445c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4460:
    // 0x1a4460: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a4460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a446c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A446Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A446Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4474u;
}
