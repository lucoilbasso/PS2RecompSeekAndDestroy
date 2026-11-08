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

// Function: ApCRefSetTargetCockpit__FP10ApCRefWorkT0P7WcActorP9FVector32
// Address: 0x141628 - 0x1416b8
void ApCRefSetTargetCockpit__FP10ApCRefWorkT0P7WcActorP9FVector32_0x141628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefSetTargetCockpit__FP10ApCRefWorkT0P7WcActorP9FVector32_0x141628");
#endif

    ctx->pc = 0x141628u;

    // 0x141628: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14162c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x14162cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141630: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x141630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x141634: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x141634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x141638: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x141638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x14163c: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x14163cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141640: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x141640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x141644: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x141644u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x141648: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x141648u;
    {
        const bool branch_taken_0x141648 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x14164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141648u;
        // 0x14164c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141648) {
            ctx->pc = 0x141670u;
            goto label_141670;
        }
    }
    ctx->pc = 0x141650u;
    // 0x141650: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x141650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x141654: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x141654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x141658: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x141658u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x14165c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x14165cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141660: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x141660u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x141664: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x141664u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x141668: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x141668u;
    {
        const bool branch_taken_0x141668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141668u;
        // 0x14166c: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141668) {
            ctx->pc = 0x141684u;
            goto label_141684;
        }
    }
    ctx->pc = 0x141670u;
label_141670:
    // 0x141670: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x141670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x141674: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x141674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x141678: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x141678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14167c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x14167cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x141680: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x141680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_141684:
    // 0x141684: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x141684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x141688: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x141688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x14168c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14168cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141690: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x141690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141694: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x141694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x141698: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x141698u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x14169c: 0xad260010  sw          $a2, 0x10($t1)
    ctx->pc = 0x14169cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 6));
    // 0x1416a0: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x1416a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x1416a4: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1416a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1416a8: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x1416a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x1416ac: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1416acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1416b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1416B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1416B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1416B8u;
}
