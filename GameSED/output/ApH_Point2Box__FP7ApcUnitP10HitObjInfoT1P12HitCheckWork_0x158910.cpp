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

// Function: ApH_Point2Box__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork
// Address: 0x158910 - 0x158b48
void ApH_Point2Box__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x158910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApH_Point2Box__FP7ApcUnitP10HitObjInfoT1P12HitCheckWork_0x158910");
#endif

    switch (ctx->pc) {
        case 0x158990u: goto label_158990;
        case 0x158a78u: goto label_158a78;
        case 0x158aa4u: goto label_158aa4;
        case 0x158ad0u: goto label_158ad0;
        case 0x158b04u: goto label_158b04;
        case 0x158b2cu: goto label_158b2c;
        default: break;
    }

    ctx->pc = 0x158910u;

    // 0x158910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158918: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x158918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15891c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x158920: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x158920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158924: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x158928: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x158928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15892c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15892cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x158930: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x158930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x158934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x158938: 0x260303d0  addiu       $v1, $s0, 0x3D0
    ctx->pc = 0x158938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x15893c: 0x260403e0  addiu       $a0, $s0, 0x3E0
    ctx->pc = 0x15893cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
    // 0x158940: 0x260203b0  addiu       $v0, $s0, 0x3B0
    ctx->pc = 0x158940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x158944: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x158944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158948: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x158948u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15894c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15894cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158950: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x158950u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x158954: 0x260503f0  addiu       $a1, $s0, 0x3F0
    ctx->pc = 0x158954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x158958: 0x260203c0  addiu       $v0, $s0, 0x3C0
    ctx->pc = 0x158958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x15895c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x15895cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158960: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x158960u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158964: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x158964u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x158968: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x158968u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15896c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x15896cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x158970: 0x94a20022  lhu         $v0, 0x22($a1)
    ctx->pc = 0x158970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x158974: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x158974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x158978: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x158978u;
    {
        const bool branch_taken_0x158978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158978) {
            ctx->pc = 0x15897Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158978u;
            // 0x15897c: 0x26230070  addiu       $v1, $s1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1589C0u;
            goto label_1589c0;
        }
    }
    ctx->pc = 0x158980u;
    // 0x158980: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x158980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158988: 0xc061468  jal         func_1851A0
    ctx->pc = 0x158988u;
    SET_GPR_U32(ctx, 31, 0x158990u);
    ctx->pc = 0x15898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158988u;
    // 0x15898c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1851A0u, 0x158988u, 0x158990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158990u;
label_158990:
    // 0x158990: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x158990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x158994: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x158994u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158998: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x158998u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15899c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x15899cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1589a0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1589a0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1589a4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1589a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1589a8: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1589a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1589ac: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1589acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1589b0: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1589b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1589b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1589B4u;
    {
        const bool branch_taken_0x1589b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B4u;
        // 0x1589b8: 0x260303e0  addiu       $v1, $s0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589b4) {
            ctx->pc = 0x158A08u;
            goto label_158a08;
        }
    }
    ctx->pc = 0x1589BCu;
    // 0x1589bc: 0x0  nop
    ctx->pc = 0x1589bcu;
    // NOP
label_1589c0:
    // 0x1589c0: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1589c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1589c4: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1589c4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1589c8: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x1589c8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1589cc: 0x784a0020  lq          $t2, 0x20($v0)
    ctx->pc = 0x1589ccu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1589d0: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x1589d0u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1589d4: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x1589d4u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1589d8: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x1589d8u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1589dc: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x1589dcu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1589e0: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x1589e0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x1589e4: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x1589e4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x1589e8: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x1589e8u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x1589ec: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x1589ecu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x1589f0: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x1589f0u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x1589f4: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x1589f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x1589f8: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x1589f8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x1589fc: 0x7c6a0020  sq          $t2, 0x20($v1)
    ctx->pc = 0x1589fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 10));
    // 0x158a00: 0x7c6b0030  sq          $t3, 0x30($v1)
    ctx->pc = 0x158a00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 11));
    // 0x158a04: 0x260303e0  addiu       $v1, $s0, 0x3E0
    ctx->pc = 0x158a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 992));
label_158a08:
    // 0x158a08: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x158a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x158a0c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x158a0cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158a10: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158a10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158a14: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158a14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158a18: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x158a18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158a1c: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x158a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x158a20: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x158a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x158a24: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x158a24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x158a28: 0xf8680000  sqc2        $vf8, 0x0($v1)
    ctx->pc = 0x158a28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x158a2c: 0x260203f0  addiu       $v0, $s0, 0x3F0
    ctx->pc = 0x158a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1008));
    // 0x158a30: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x158a30u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x158a34: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x158a34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158a38: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x158a38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158a3c: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x158a3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x158a40: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x158a40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x158a44: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x158a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x158a48: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x158a48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x158a4c: 0xf8480000  sqc2        $vf8, 0x0($v0)
    ctx->pc = 0x158a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x158a50: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x158a54: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x158A54u;
    {
        const bool branch_taken_0x158a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A54u;
        // 0x158a58: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a54) {
            ctx->pc = 0x158A80u;
            goto label_158a80;
        }
    }
    ctx->pc = 0x158A5Cu;
    // 0x158a5c: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158a60: 0xae02047c  sw          $v0, 0x47C($s0)
    ctx->pc = 0x158a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1148), GPR_U32(ctx, 2));
    // 0x158a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a70: 0xc056314  jal         func_158C50
    ctx->pc = 0x158A70u;
    SET_GPR_U32(ctx, 31, 0x158A78u);
    ctx->pc = 0x158A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A70u;
    // 0x158a74: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C50u, 0x158A70u, 0x158A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A78u;
label_158a78:
    // 0x158a78: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x158A78u;
    {
        const bool branch_taken_0x158a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A78u;
        // 0x158a7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a78) {
            ctx->pc = 0x158B30u;
            goto label_158b30;
        }
    }
    ctx->pc = 0x158A80u;
label_158a80:
    // 0x158a80: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x158a84: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x158A84u;
    {
        const bool branch_taken_0x158a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A84u;
        // 0x158a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a84) {
            ctx->pc = 0x158B10u;
            goto label_158b10;
        }
    }
    ctx->pc = 0x158A8Cu;
    // 0x158a8c: 0xae00047c  sw          $zero, 0x47C($s0)
    ctx->pc = 0x158a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1148), GPR_U32(ctx, 0));
    // 0x158a90: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158a94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158a9c: 0xc056314  jal         func_158C50
    ctx->pc = 0x158A9Cu;
    SET_GPR_U32(ctx, 31, 0x158AA4u);
    ctx->pc = 0x158AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158A9Cu;
    // 0x158aa0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C50u, 0x158A9Cu, 0x158AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AA4u;
label_158aa4:
    // 0x158aa4: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x158AA4u;
    {
        const bool branch_taken_0x158aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158aa4) {
            ctx->pc = 0x158AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AA4u;
            // 0x158aa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B30u;
            goto label_158b30;
        }
    }
    ctx->pc = 0x158AACu;
    // 0x158aac: 0x8e02047c  lw          $v0, 0x47C($s0)
    ctx->pc = 0x158aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x158ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ab4: 0xae00047c  sw          $zero, 0x47C($s0)
    ctx->pc = 0x158ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1148), GPR_U32(ctx, 0));
    // 0x158ab8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158abc: 0xae020480  sw          $v0, 0x480($s0)
    ctx->pc = 0x158abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1152), GPR_U32(ctx, 2));
    // 0x158ac0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158ac4: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158ac8: 0xc056314  jal         func_158C50
    ctx->pc = 0x158AC8u;
    SET_GPR_U32(ctx, 31, 0x158AD0u);
    ctx->pc = 0x158ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AC8u;
    // 0x158acc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C50u, 0x158AC8u, 0x158AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AD0u;
label_158ad0:
    // 0x158ad0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x158AD0u;
    {
        const bool branch_taken_0x158ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158ad0) {
            ctx->pc = 0x158AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158AD0u;
            // 0x158ad4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158B30u;
            goto label_158b30;
        }
    }
    ctx->pc = 0x158AD8u;
    // 0x158ad8: 0x8e03047c  lw          $v1, 0x47C($s0)
    ctx->pc = 0x158ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x158adc: 0x8e020480  lw          $v0, 0x480($s0)
    ctx->pc = 0x158adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1152)));
    // 0x158ae0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x158ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x158ae4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x158AE4u;
    {
        const bool branch_taken_0x158ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AE4u;
        // 0x158ae8: 0xae030484  sw          $v1, 0x484($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ae4) {
            ctx->pc = 0x158B2Cu;
            goto label_158b2c;
        }
    }
    ctx->pc = 0x158AECu;
    // 0x158aec: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158af4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158af8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158afc: 0xc056434  jal         func_1590D0
    ctx->pc = 0x158AFCu;
    SET_GPR_U32(ctx, 31, 0x158B04u);
    ctx->pc = 0x158B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AFCu;
    // 0x158b00: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1590D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1590D0u, 0x158AFCu, 0x158B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B04u;
label_158b04:
    // 0x158b04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x158B04u;
    {
        const bool branch_taken_0x158b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B04u;
        // 0x158b08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b04) {
            ctx->pc = 0x158B30u;
            goto label_158b30;
        }
    }
    ctx->pc = 0x158B0Cu;
    // 0x158b0c: 0x0  nop
    ctx->pc = 0x158b0cu;
    // NOP
label_158b10:
    // 0x158b10: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x158b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x158b14: 0x8e450160  lw          $a1, 0x160($s2)
    ctx->pc = 0x158b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
    // 0x158b18: 0xae02047c  sw          $v0, 0x47C($s0)
    ctx->pc = 0x158b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1148), GPR_U32(ctx, 2));
    // 0x158b1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x158b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b20: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x158b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b24: 0xc056314  jal         func_158C50
    ctx->pc = 0x158B24u;
    SET_GPR_U32(ctx, 31, 0x158B2Cu);
    ctx->pc = 0x158B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158B24u;
    // 0x158b28: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C50u, 0x158B24u, 0x158B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B2Cu;
label_158b2c:
    // 0x158b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158b30:
    // 0x158b30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158b34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158b38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x158b38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x158b3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158b40: 0x3e00008  jr          $ra
    ctx->pc = 0x158B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B40u;
        // 0x158b44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158B48u;
}
