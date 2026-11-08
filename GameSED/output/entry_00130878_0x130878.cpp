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

// Function: entry_00130878
// Address: 0x130878 - 0x130914
void entry_00130878_0x130878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130878_0x130878");
#endif

    switch (ctx->pc) {
        case 0x130884u: goto label_130884;
        case 0x13089cu: goto label_13089c;
        default: break;
    }

    ctx->pc = 0x130878u;

    // 0x130878: 0x26250108  addiu       $a1, $s1, 0x108
    ctx->pc = 0x130878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x13087c: 0xc04c04c  jal         func_130130
    ctx->pc = 0x13087Cu;
    SET_GPR_U32(ctx, 31, 0x130884u);
    ctx->pc = 0x130880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13087Cu;
    // 0x130880: 0x2626010c  addiu       $a2, $s1, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130130u, 0x13087Cu, 0x130884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130884u;
label_130884:
    // 0x130884: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x130884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x130888: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x130888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x13088c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130890: 0x94620024  lhu         $v0, 0x24($v1)
    ctx->pc = 0x130890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x130894: 0xc04844a  jal         func_121128
    ctx->pc = 0x130894u;
    SET_GPR_U32(ctx, 31, 0x13089Cu);
    ctx->pc = 0x130898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130894u;
    // 0x130898: 0xa6220126  sh          $v0, 0x126($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 294), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130894u, 0x13089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13089Cu;
label_13089c:
    // 0x13089c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13089cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308a0: 0x50a0001c  beql        $a1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1308A0u;
    {
        const bool branch_taken_0x1308a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1308a0) {
            ctx->pc = 0x1308A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1308A0u;
            // 0x1308a4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130914u;
            return;
        }
    }
    ctx->pc = 0x1308A8u;
    // 0x1308a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1308a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1308ac: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x1308acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
    // 0x1308b0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1308b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1308b4: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x1308b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x1308b8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1308b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1308bc: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x1308bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
    // 0x1308c0: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1308c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1308c4: 0xae2400f8  sw          $a0, 0xF8($s1)
    ctx->pc = 0x1308c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 4));
    // 0x1308c8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1308c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1308cc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1308ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1308d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1308d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1308d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1308d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1308d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1308d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1308dc: 0xe62000fc  swc1        $f0, 0xFC($s1)
    ctx->pc = 0x1308dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
    // 0x1308e0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1308e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1308e4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1308e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1308e8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1308e8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1308ec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1308ecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1308f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1308f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1308f4: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x1308f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x1308f8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1308f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1308fc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1308fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x130900: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x130900u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x130904: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x130904u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x130908: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13090c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x13090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x130910: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->pc = 0x130914u;
}
