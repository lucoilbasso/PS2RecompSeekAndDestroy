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

// Function: EffectSetRotate3__Ffff
// Address: 0x132750 - 0x1327a0
void EffectSetRotate3__Ffff_0x132750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSetRotate3__Ffff_0x132750");
#endif

    ctx->pc = 0x132750u;

    // 0x132750: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x132750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x132754: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132758: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x132758u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13275c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x13275cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x132760: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x132760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x132764: 0x8c440154  lw          $a0, 0x154($v0)
    ctx->pc = 0x132764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x132768: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x132768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13276c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x13276cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x132770: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x132770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x132774: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x132774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x132778: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x132778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x13277c: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x13277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x132780: 0x8c6402f8  lw          $a0, 0x2F8($v1)
    ctx->pc = 0x132780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 760)));
    // 0x132784: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132784u;
    {
        const bool branch_taken_0x132784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132784u;
        // 0x132788: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132784) {
            ctx->pc = 0x132798u;
            goto label_132798;
        }
    }
    ctx->pc = 0x13278Cu;
    // 0x13278c: 0xfc820170  sd          $v0, 0x170($a0)
    ctx->pc = 0x13278cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 368), GPR_U64(ctx, 2));
    // 0x132790: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x132790u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132794: 0xfc830178  sd          $v1, 0x178($a0)
    ctx->pc = 0x132794u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 376), GPR_U64(ctx, 3));
label_132798:
    // 0x132798: 0x3e00008  jr          $ra
    ctx->pc = 0x132798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132798u;
        // 0x13279c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1327A0u;
}
