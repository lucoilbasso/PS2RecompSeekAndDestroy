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

// Function: ApCRefSetCoordCockpit__FP10ApCRefWorkT0P11GsCOORDUNITP9FVector32
// Address: 0x1416b8 - 0x141748
void ApCRefSetCoordCockpit__FP10ApCRefWorkT0P11GsCOORDUNITP9FVector32_0x1416b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefSetCoordCockpit__FP10ApCRefWorkT0P11GsCOORDUNITP9FVector32_0x1416b8");
#endif

    ctx->pc = 0x1416b8u;

    // 0x1416b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1416b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1416bc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1416bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1416c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1416c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1416c4: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1416c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1416c8: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x1416c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x1416cc: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1416ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1416d0: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1416d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1416d4: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x1416d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x1416d8: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1416D8u;
    {
        const bool branch_taken_0x1416d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1416DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416D8u;
        // 0x1416dc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416d8) {
            ctx->pc = 0x141700u;
            goto label_141700;
        }
    }
    ctx->pc = 0x1416E0u;
    // 0x1416e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1416e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1416e4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1416e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1416e8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1416e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1416ec: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1416ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1416f0: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1416f0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1416f4: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1416f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1416f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1416F8u;
    {
        const bool branch_taken_0x1416f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1416FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416F8u;
        // 0x1416fc: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1416f8) {
            ctx->pc = 0x141714u;
            goto label_141714;
        }
    }
    ctx->pc = 0x141700u;
label_141700:
    // 0x141700: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x141700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x141704: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x141704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x141708: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x141708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14170c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x14170cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x141710: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x141710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_141714:
    // 0x141714: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x141714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x141718: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x141718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x14171c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x14171cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x141720: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x141720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141724: 0x25240020  addiu       $a0, $t1, 0x20
    ctx->pc = 0x141724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x141728: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x141728u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x14172c: 0xad260010  sw          $a2, 0x10($t1)
    ctx->pc = 0x14172cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 6));
    // 0x141730: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x141730u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x141734: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x141734u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x141738: 0x25220030  addiu       $v0, $t1, 0x30
    ctx->pc = 0x141738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x14173c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x14173cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x141740: 0x3e00008  jr          $ra
    ctx->pc = 0x141740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141748u;
}
