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

// Function: CalcActorTargetPosition__7WcActorP9FVector32
// Address: 0x1e1480 - 0x1e1520
void CalcActorTargetPosition__7WcActorP9FVector32_0x1e1480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcActorTargetPosition__7WcActorP9FVector32_0x1e1480");
#endif

    switch (ctx->pc) {
        case 0x1e14c8u: goto label_1e14c8;
        case 0x1e14d0u: goto label_1e14d0;
        default: break;
    }

    ctx->pc = 0x1e1480u;

    // 0x1e1480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e1484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e1488: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e1488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e148c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e148cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e1490: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e1490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e1494: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e1494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e1498: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e1498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e149c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e149cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e14a0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1e14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1e14a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e14a8: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x1e14a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1e14ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e14acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e14b0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1e14b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e14b4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1e14b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1e14b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E14B8u;
    {
        const bool branch_taken_0x1e14b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E14BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E14B8u;
        // 0x1e14bc: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e14b8) {
            ctx->pc = 0x1E14C8u;
            goto label_1e14c8;
        }
    }
    ctx->pc = 0x1E14C0u;
    // 0x1e14c0: 0xc061920  jal         func_186480
    ctx->pc = 0x1E14C0u;
    SET_GPR_U32(ctx, 31, 0x1E14C8u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1E14C0u, 0x1E14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14C8u;
label_1e14c8:
    // 0x1e14c8: 0xc061422  jal         func_185088
    ctx->pc = 0x1E14C8u;
    SET_GPR_U32(ctx, 31, 0x1E14D0u);
    ctx->pc = 0x1E14CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E14C8u;
    // 0x1e14cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1E14C8u, 0x1E14D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E14D0u;
label_1e14d0:
    // 0x1e14d0: 0x266300a0  addiu       $v1, $s3, 0xA0
    ctx->pc = 0x1e14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x1e14d4: 0x264200e0  addiu       $v0, $s2, 0xE0
    ctx->pc = 0x1e14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1e14d8: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x1e14d8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e14dc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1e14dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e14e0: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1e14e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e14e4: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1e14e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e14e8: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1e14e8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e14ec: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1e14ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e14f0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1e14f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e14f4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1e14f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1e14f8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1e14f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1e14fc: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x1e14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1e1500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e1504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e1508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e150c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e150cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1510: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e1510u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e1514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1518: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1518u;
        // 0x1e151c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1520u;
}
