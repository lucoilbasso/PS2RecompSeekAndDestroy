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

// Function: ApCRefWorkOffset__FP10ApCRefWorkiP9FVector32
// Address: 0x142908 - 0x142958
void ApCRefWorkOffset__FP10ApCRefWorkiP9FVector32_0x142908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefWorkOffset__FP10ApCRefWorkiP9FVector32_0x142908");
#endif

    ctx->pc = 0x142908u;

    // 0x142908: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x142908u;
    {
        const bool branch_taken_0x142908 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142908u;
        // 0x14290c: 0x24830020  addiu       $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142908) {
            ctx->pc = 0x142930u;
            goto label_142930;
        }
    }
    ctx->pc = 0x142910u;
    // 0x142910: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x142910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142914: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x142914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x142918: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x142918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14291c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x14291cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x142920: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x142920u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x142924: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x142924u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x142928: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x142928u;
    {
        const bool branch_taken_0x142928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142928u;
        // 0x14292c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142928) {
            ctx->pc = 0x142944u;
            goto label_142944;
        }
    }
    ctx->pc = 0x142930u;
label_142930:
    // 0x142930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142934: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x142938: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x142938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14293c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14293cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x142940: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x142940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_142944:
    // 0x142944: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x142944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x142948: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x142948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x14294c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x142950: 0x3e00008  jr          $ra
    ctx->pc = 0x142950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142950u;
        // 0x142954: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142958u;
}
