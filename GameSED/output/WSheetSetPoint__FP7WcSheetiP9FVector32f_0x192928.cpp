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

// Function: WSheetSetPoint__FP7WcSheetiP9FVector32f
// Address: 0x192928 - 0x192980
void WSheetSetPoint__FP7WcSheetiP9FVector32f_0x192928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetSetPoint__FP7WcSheetiP9FVector32f_0x192928");
#endif

    switch (ctx->pc) {
        case 0x192938u: goto label_192938;
        default: break;
    }

    ctx->pc = 0x192928u;

    // 0x192928: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x192928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x19292c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19292cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192930: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x192930u;
    {
        const bool branch_taken_0x192930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192930u;
        // 0x192934: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192930) {
            ctx->pc = 0x19295Cu;
            goto label_19295c;
        }
    }
    ctx->pc = 0x192938u;
label_192938:
    // 0x192938: 0x10850008  beq         $a0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x192938u;
    {
        const bool branch_taken_0x192938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x19293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192938u;
        // 0x19293c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192938) {
            ctx->pc = 0x19295Cu;
            goto label_19295c;
        }
    }
    ctx->pc = 0x192940u;
    // 0x192940: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x192940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x192944: 0x0  nop
    ctx->pc = 0x192944u;
    // NOP
    // 0x192948: 0x0  nop
    ctx->pc = 0x192948u;
    // NOP
    // 0x19294c: 0x0  nop
    ctx->pc = 0x19294cu;
    // NOP
    // 0x192950: 0x0  nop
    ctx->pc = 0x192950u;
    // NOP
    // 0x192954: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x192954u;
    {
        const bool branch_taken_0x192954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192954u;
        // 0x192958: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192954) {
            ctx->pc = 0x192938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192938;
        }
    }
    ctx->pc = 0x19295Cu;
label_19295c:
    // 0x19295c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x19295cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192960: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x192960u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x192964: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x192964u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x192968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19296c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x19296cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192970: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x192970u;
    {
        const bool branch_taken_0x192970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192970) {
            ctx->pc = 0x192974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192970u;
            // 0x192974: 0xe46c0014  swc1        $f12, 0x14($v1) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x192978u;
            goto label_192978;
        }
    }
    ctx->pc = 0x192978u;
label_192978:
    // 0x192978: 0x3e00008  jr          $ra
    ctx->pc = 0x192978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192980u;
}
