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

// Function: ApCRefSetTargetTrace__FP10ApCRefWorkT0P7WcActorP9FVector32
// Address: 0x1414f0 - 0x141580
void ApCRefSetTargetTrace__FP10ApCRefWorkT0P7WcActorP9FVector32_0x1414f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefSetTargetTrace__FP10ApCRefWorkT0P7WcActorP9FVector32_0x1414f0");
#endif

    ctx->pc = 0x1414f0u;

    // 0x1414f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1414f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1414f4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1414f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1414f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1414f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1414fc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1414fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x141500: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x141500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x141504: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x141504u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141508: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x141508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x14150c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x14150cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x141510: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x141510u;
    {
        const bool branch_taken_0x141510 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x141514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141510u;
        // 0x141514: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141510) {
            ctx->pc = 0x141538u;
            goto label_141538;
        }
    }
    ctx->pc = 0x141518u;
    // 0x141518: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x141518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14151c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x14151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x141520: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x141520u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x141524: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x141524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x141528: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x141528u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x14152c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x14152cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x141530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x141530u;
    {
        const bool branch_taken_0x141530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141530u;
        // 0x141534: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141530) {
            ctx->pc = 0x14154Cu;
            goto label_14154c;
        }
    }
    ctx->pc = 0x141538u;
label_141538:
    // 0x141538: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x141538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14153c: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x14153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x141540: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x141540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x141544: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x141544u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x141548: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x141548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_14154c:
    // 0x14154c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x14154cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x141550: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x141550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x141554: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x141554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141558: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x141558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14155c: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x14155cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x141560: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x141560u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x141564: 0xad260010  sw          $a2, 0x10($t1)
    ctx->pc = 0x141564u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 6));
    // 0x141568: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x141568u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x14156c: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x14156cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141570: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x141570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x141574: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x141574u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x141578: 0x3e00008  jr          $ra
    ctx->pc = 0x141578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141580u;
}
