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

// Function: WEntityCalcLocalizedVector__FP9FVector32P8WcEntityT0i
// Address: 0x1851a0 - 0x1853d8
void WEntityCalcLocalizedVector__FP9FVector32P8WcEntityT0i_0x1851a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WEntityCalcLocalizedVector__FP9FVector32P8WcEntityT0i_0x1851a0");
#endif

    switch (ctx->pc) {
        case 0x1851f4u: goto label_1851f4;
        case 0x185378u: goto label_185378;
        default: break;
    }

    ctx->pc = 0x1851a0u;

    // 0x1851a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1851a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1851a4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1851a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1851a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1851ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1851acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1851b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1851b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1851b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1851b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1851bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1851bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1851c0: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x1851c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1851c4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1851c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1851c8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1851c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1851cc: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1851CCu;
    {
        const bool branch_taken_0x1851cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1851D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1851CCu;
        // 0x1851d0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1851cc) {
            ctx->pc = 0x1852D8u;
            goto label_1852d8;
        }
    }
    ctx->pc = 0x1851D4u;
    // 0x1851d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1851d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1851d8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1851D8u;
    {
        const bool branch_taken_0x1851d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851d8) {
            ctx->pc = 0x1851DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1851D8u;
            // 0x1851dc: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185200u;
            goto label_185200;
        }
    }
    ctx->pc = 0x1851E0u;
    // 0x1851e0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1851e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1851e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1851e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1851e8: 0x24a57e88  addiu       $a1, $a1, 0x7E88
    ctx->pc = 0x1851e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32392));
    // 0x1851ec: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1851ECu;
    SET_GPR_U32(ctx, 31, 0x1851F4u);
    ctx->pc = 0x1851F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1851ECu;
    // 0x1851f0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1851ECu, 0x1851F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851F4u;
label_1851f4:
    // 0x1851f4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1851F4u;
    {
        const bool branch_taken_0x1851f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851f4) {
            ctx->pc = 0x185324u;
            goto label_185324;
        }
    }
    ctx->pc = 0x1851FCu;
    // 0x1851fc: 0x0  nop
    ctx->pc = 0x1851fcu;
    // NOP
label_185200:
    // 0x185200: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x185200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x185204: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x185204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x185208: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x185208u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18520c: 0x78890010  lq          $t1, 0x10($a0)
    ctx->pc = 0x18520cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x185210: 0x788a0020  lq          $t2, 0x20($a0)
    ctx->pc = 0x185210u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x185214: 0x788b0030  lq          $t3, 0x30($a0)
    ctx->pc = 0x185214u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x185218: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x185218u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x18521c: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x18521cu;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x185220: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x185220u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x185224: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x185224u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x185228: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x185228u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x18522c: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x18522cu;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x185230: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x185230u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x185234: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x185234u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x185238: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x185238u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x18523c: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x18523cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x185240: 0x7c4a0020  sq          $t2, 0x20($v0)
    ctx->pc = 0x185240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 10));
    // 0x185244: 0x7c4b0030  sq          $t3, 0x30($v0)
    ctx->pc = 0x185244u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 11));
    // 0x185248: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x185248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x18524c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x18524cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185250: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x185250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x185254: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x185254u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x185258: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x185258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18525c: 0x4be7033c  vmove.xyzw  $vf7, $vf0
    ctx->pc = 0x18525cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x185260: 0x4b044128  vadd.x      $vf4, $vf8, $vf4
    ctx->pc = 0x185260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x185264: 0x4a854168  vadd.y      $vf5, $vf8, $vf5
    ctx->pc = 0x185264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x185268: 0x4a4641a8  vadd.z      $vf6, $vf8, $vf6
    ctx->pc = 0x185268u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18526c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x18526cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185270: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x185270u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x185274: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x185274u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x185278: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x185278u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18527c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18527cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185280: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x185280u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185284: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x185284u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185288: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x185288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18528c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x18528cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185290: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x185290u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185294: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x185294u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185298: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x185298u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x18529c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x18529cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1852a0: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x1852a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1852a4: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x1852a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1852a8: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x1852a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1852ac: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x1852acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1852b0: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x1852b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1852b4: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x1852b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1852b8: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x1852b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1852bc: 0xf84c0000  sqc2        $vf12, 0x0($v0)
    ctx->pc = 0x1852bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1852c0: 0xf84d0010  sqc2        $vf13, 0x10($v0)
    ctx->pc = 0x1852c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1852c4: 0xf84e0020  sqc2        $vf14, 0x20($v0)
    ctx->pc = 0x1852c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x1852c8: 0xf84f0030  sqc2        $vf15, 0x30($v0)
    ctx->pc = 0x1852c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x1852cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1852CCu;
    {
        const bool branch_taken_0x1852cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1852cc) {
            ctx->pc = 0x185324u;
            goto label_185324;
        }
    }
    ctx->pc = 0x1852D4u;
    // 0x1852d4: 0x0  nop
    ctx->pc = 0x1852d4u;
    // NOP
label_1852d8:
    // 0x1852d8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1852d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1852dc: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1852dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1852e0: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x1852e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x1852e4: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x1852e4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1852e8: 0x78690010  lq          $t1, 0x10($v1)
    ctx->pc = 0x1852e8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1852ec: 0x786a0020  lq          $t2, 0x20($v1)
    ctx->pc = 0x1852ecu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1852f0: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x1852f0u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1852f4: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x1852f4u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1852f8: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x1852f8u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1852fc: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x1852fcu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x185300: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x185300u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x185304: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x185304u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x185308: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x185308u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x18530c: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x18530cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x185310: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x185310u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x185314: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x185314u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x185318: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x185318u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x18531c: 0x7c4a0020  sq          $t2, 0x20($v0)
    ctx->pc = 0x18531cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 10));
    // 0x185320: 0x7c4b0030  sq          $t3, 0x30($v0)
    ctx->pc = 0x185320u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 11));
label_185324:
    // 0x185324: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x185324u;
    {
        const bool branch_taken_0x185324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185324u;
        // 0x185328: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185324) {
            ctx->pc = 0x1853B8u;
            goto label_1853b8;
        }
    }
    ctx->pc = 0x18532Cu;
    // 0x18532c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18532cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185330: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x185330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x185334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18533c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18533cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185340: 0x14e3000d  bne         $a3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x185340u;
    {
        const bool branch_taken_0x185340 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x185344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185340u;
        // 0x185344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185340) {
            ctx->pc = 0x185378u;
            goto label_185378;
        }
    }
    ctx->pc = 0x185348u;
    // 0x185348: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x185348u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18534c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18534cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185350: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x185350u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x185354: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x185354u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x185358: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x185358u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18535c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18535cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185360: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x185360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185364: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x185364u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185368: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x185368u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18536c: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x18536cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x185370: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x185370u;
    {
        const bool branch_taken_0x185370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185370u;
        // 0x185374: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185370) {
            ctx->pc = 0x1853BCu;
            goto label_1853bc;
        }
    }
    ctx->pc = 0x185378u;
label_185378:
    // 0x185378: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x185378u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18537c: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x18537cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x185380: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x185380u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x185384: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x185384u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x185388: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x185388u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x18538c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18538cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185390: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x185390u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185394: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x185394u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185398: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x185398u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18539c: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x18539cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1853a0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1853a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1853a4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1853a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1853a8: 0x0  nop
    ctx->pc = 0x1853a8u;
    // NOP
    // 0x1853ac: 0x0  nop
    ctx->pc = 0x1853acu;
    // NOP
    // 0x1853b0: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x1853B0u;
    {
        const bool branch_taken_0x1853b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1853B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853B0u;
        // 0x1853b4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1853b0) {
            ctx->pc = 0x185378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185378;
        }
    }
    ctx->pc = 0x1853B8u;
label_1853b8:
    // 0x1853b8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x1853b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_1853bc:
    // 0x1853bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1853bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1853c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1853c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1853c4: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x1853c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x1853c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1853c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1853cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1853ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1853d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1853D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1853D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1853D0u;
        // 0x1853d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1853D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1853D8u;
}
