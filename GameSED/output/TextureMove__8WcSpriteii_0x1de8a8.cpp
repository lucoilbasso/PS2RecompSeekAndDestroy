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

// Function: TextureMove__8WcSpriteii
// Address: 0x1de8a8 - 0x1de968
void TextureMove__8WcSpriteii_0x1de8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TextureMove__8WcSpriteii_0x1de8a8");
#endif

    ctx->pc = 0x1de8a8u;

    // 0x1de8a8: 0x53c00  sll         $a3, $a1, 16
    ctx->pc = 0x1de8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1de8ac: 0x24880150  addiu       $t0, $a0, 0x150
    ctx->pc = 0x1de8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1de8b0: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x1de8b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1de8b4: 0x848b01a6  lh          $t3, 0x1A6($a0)
    ctx->pc = 0x1de8b4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 422)));
    // 0x1de8b8: 0x848901a4  lh          $t1, 0x1A4($a0)
    ctx->pc = 0x1de8b8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x1de8bc: 0x71bc0  sll         $v1, $a3, 15
    ctx->pc = 0x1de8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x1de8c0: 0x950a0008  lhu         $t2, 0x8($t0)
    ctx->pc = 0x1de8c0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1de8c4: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1de8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1de8c8: 0xa5050050  sh          $a1, 0x50($t0)
    ctx->pc = 0x1de8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x1de8cc: 0xa5060052  sh          $a2, 0x52($t0)
    ctx->pc = 0x1de8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 82), (uint16_t)GPR_U32(ctx, 6));
    // 0x1de8d0: 0x1431807  srav        $v1, $v1, $t2
    ctx->pc = 0x1de8d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 10) & 0x1F));
    // 0x1de8d4: 0xa5090054  sh          $t1, 0x54($t0)
    ctx->pc = 0x1de8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 84), (uint16_t)GPR_U32(ctx, 9));
    // 0x1de8d8: 0xa50b0056  sh          $t3, 0x56($t0)
    ctx->pc = 0x1de8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 86), (uint16_t)GPR_U32(ctx, 11));
    // 0x1de8dc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1de8dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1de8e0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1de8e0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1de8e4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1de8e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de8e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de8ec: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1de8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1de8f0: 0x9504000a  lhu         $a0, 0xA($t0)
    ctx->pc = 0x1de8f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x1de8f4: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x1de8f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1de8f8: 0xe5000060  swc1        $f0, 0x60($t0)
    ctx->pc = 0x1de8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 96), bits); }
    // 0x1de8fc: 0x61bc0  sll         $v1, $a2, 15
    ctx->pc = 0x1de8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x1de900: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1de900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1de904: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x1de904u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1de908: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1de908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1de90c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1de90cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1de910: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1de910u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de918: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1de918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1de91c: 0xe5000064  swc1        $f0, 0x64($t0)
    ctx->pc = 0x1de91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 100), bits); }
    // 0x1de920: 0x73bc0  sll         $a3, $a3, 15
    ctx->pc = 0x1de920u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x1de924: 0x24e7c000  addiu       $a3, $a3, -0x4000
    ctx->pc = 0x1de924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950912));
    // 0x1de928: 0x1473807  srav        $a3, $a3, $t2
    ctx->pc = 0x1de928u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
    // 0x1de92c: 0x48a72000  qmtc2.ni    $a3, $vf4
    ctx->pc = 0x1de92cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1de930: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1de930u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1de934: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1de934u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de93c: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1de93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1de940: 0xe5000068  swc1        $f0, 0x68($t0)
    ctx->pc = 0x1de940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 104), bits); }
    // 0x1de944: 0x633c0  sll         $a2, $a2, 15
    ctx->pc = 0x1de944u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x1de948: 0x24c6c000  addiu       $a2, $a2, -0x4000
    ctx->pc = 0x1de948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950912));
    // 0x1de94c: 0x863007  srav        $a2, $a2, $a0
    ctx->pc = 0x1de94cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x1de950: 0x48a62000  qmtc2.ni    $a2, $vf4
    ctx->pc = 0x1de950u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1de954: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1de954u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1de958: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1de958u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1de95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de960: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE960u;
        // 0x1de964: 0xe500006c  swc1        $f0, 0x6C($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE968u;
}
