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

// Function: entry_0019a32c
// Address: 0x19a32c - 0x19a3f0
void entry_0019a32c_0x19a32c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a32c_0x19a32c");
#endif

    ctx->pc = 0x19a32cu;

    // 0x19a32c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a32cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a330: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x19a330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x19a334: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x19a334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a338: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x19a338u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x19a33c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19a33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19a340: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x19A340u;
    {
        const bool branch_taken_0x19a340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A340u;
        // 0x19a344: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a340) {
            ctx->pc = 0x19A3F0u;
            return;
        }
    }
    ctx->pc = 0x19A348u;
    // 0x19a348: 0x24e50080  addiu       $a1, $a3, 0x80
    ctx->pc = 0x19a348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x19a34c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x19a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x19a350: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x19a350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x19a354: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x19a354u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a358: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x19a358u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a35c: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19a35cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a360: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a364: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x19a364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19a368: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x19a368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x19a36c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x19a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x19a370: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x19a370u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19a374: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x19a374u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a378: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19a378u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a37c: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a380: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x19a380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x19a384: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x19a384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19a388: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x19a388u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x19a38c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x19a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a390: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19a390u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a394: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19a394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19a398: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19a398u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19a39c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a39cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19a3a0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19a3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a3a4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19a3a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a3a8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x19a3a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a3ac: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19a3acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a3b0: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19a3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a3b4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x19a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a3b8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x19a3b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a3bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19a3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19a3c0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19a3c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19a3c4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19a3c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19a3c8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x19a3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19a3cc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19a3ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a3d0: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x19a3d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19a3d4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x19a3d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19a3d8: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x19a3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19a3dc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x19a3dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19a3e0: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x19a3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x19a3e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19A3E4u;
    {
        const bool branch_taken_0x19a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a3e4) {
            ctx->pc = 0x19A40Cu;
            return;
        }
    }
    ctx->pc = 0x19A3ECu;
    // 0x19a3ec: 0x0  nop
    ctx->pc = 0x19a3ecu;
    // NOP
    ctx->pc = 0x19a3f0u;
}
