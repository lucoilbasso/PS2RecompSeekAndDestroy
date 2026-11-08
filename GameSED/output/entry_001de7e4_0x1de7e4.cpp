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

// Function: entry_001de7e4
// Address: 0x1de7e4 - 0x1de8a4
void entry_001de7e4_0x1de7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de7e4_0x1de7e4");
#endif

    ctx->pc = 0x1de7e4u;

    // 0x1de7e4: 0x95280008  lhu         $t0, 0x8($t1)
    ctx->pc = 0x1de7e4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1de7e8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1de7e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1de7ec: 0xa5250050  sh          $a1, 0x50($t1)
    ctx->pc = 0x1de7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x1de7f0: 0x61bc0  sll         $v1, $a2, 15
    ctx->pc = 0x1de7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x1de7f4: 0xa5270052  sh          $a3, 0x52($t1)
    ctx->pc = 0x1de7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 82), (uint16_t)GPR_U32(ctx, 7));
    // 0x1de7f8: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1de7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1de7fc: 0xa52a0054  sh          $t2, 0x54($t1)
    ctx->pc = 0x1de7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 84), (uint16_t)GPR_U32(ctx, 10));
    // 0x1de800: 0xa52b0056  sh          $t3, 0x56($t1)
    ctx->pc = 0x1de800u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 86), (uint16_t)GPR_U32(ctx, 11));
    // 0x1de804: 0x1031807  srav        $v1, $v1, $t0
    ctx->pc = 0x1de804u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 8) & 0x1F));
    // 0x1de808: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1de808u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1de80c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1de80cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1de810: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1de810u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de818: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x1de818u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1de81c: 0x9527000a  lhu         $a3, 0xA($t1)
    ctx->pc = 0x1de81cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x1de820: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1de820u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1de824: 0xe5200060  swc1        $f0, 0x60($t1)
    ctx->pc = 0x1de824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 96), bits); }
    // 0x1de828: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x1de828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x1de82c: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1de82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1de830: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x1de830u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x1de834: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1de834u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1de838: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1de838u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1de83c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1de83cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de844: 0xa2400  sll         $a0, $t2, 16
    ctx->pc = 0x1de844u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1de848: 0xe5200064  swc1        $f0, 0x64($t1)
    ctx->pc = 0x1de848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 100), bits); }
    // 0x1de84c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1de84cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1de850: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1de850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1de854: 0x633c0  sll         $a2, $a2, 15
    ctx->pc = 0x1de854u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x1de858: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x1de858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    // 0x1de85c: 0x1063007  srav        $a2, $a2, $t0
    ctx->pc = 0x1de85cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x1de860: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x1de860u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1de864: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1de864u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1de868: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1de868u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de86c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de870: 0xb1c00  sll         $v1, $t3, 16
    ctx->pc = 0x1de870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1de874: 0xe5200068  swc1        $f0, 0x68($t1)
    ctx->pc = 0x1de874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 104), bits); }
    // 0x1de878: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1de878u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1de87c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1de87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1de880: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x1de880u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x1de884: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x1de884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x1de888: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x1de888u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
    // 0x1de88c: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1de88cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1de890: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1de890u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1de894: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1de894u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de89c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE89Cu;
        // 0x1de8a0: 0xe520006c  swc1        $f0, 0x6C($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE8A4u;
}
