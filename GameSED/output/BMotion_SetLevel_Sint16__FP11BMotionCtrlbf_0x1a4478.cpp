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

// Function: BMotion_SetLevel_Sint16__FP11BMotionCtrlbf
// Address: 0x1a4478 - 0x1a44a4
void BMotion_SetLevel_Sint16__FP11BMotionCtrlbf_0x1a4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotion_SetLevel_Sint16__FP11BMotionCtrlbf_0x1a4478");
#endif

    ctx->pc = 0x1a4478u;

    // 0x1a4478: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a4478u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1a447c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1a447cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1a4480: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4480u;
    {
        const bool branch_taken_0x1a4480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4480u;
        // 0x1a4484: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4480) {
            ctx->pc = 0x1A4490u;
            goto label_1a4490;
        }
    }
    ctx->pc = 0x1A4488u;
    // 0x1a4488: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1a4488u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a448c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4490:
    // 0x1a4490: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1a4490u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4498: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a449c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A449Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A449Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A44A4u;
}
