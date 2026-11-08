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

// Function: entry_00190454
// Address: 0x190454 - 0x1904a8
void entry_00190454_0x190454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190454_0x190454");
#endif

    ctx->pc = 0x190454u;

    // 0x190454: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190458: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x190458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x19045c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x19045Cu;
    {
        const bool branch_taken_0x19045c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19045Cu;
        // 0x190460: 0x24c64000  addiu       $a2, $a2, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19045c) {
            ctx->pc = 0x1904C4u;
            return;
        }
    }
    ctx->pc = 0x190464u;
    // 0x190464: 0x950301a0  lhu         $v1, 0x1A0($t0)
    ctx->pc = 0x190464u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 416)));
    // 0x190468: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x190468u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x19046c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x19046cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x190470: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x190470u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190474: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x190474u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x190478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19047c: 0x723c0  sll         $a0, $a3, 15
    ctx->pc = 0x19047cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x190480: 0x950301a2  lhu         $v1, 0x1A2($t0)
    ctx->pc = 0x190480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 418)));
    // 0x190484: 0x24844000  addiu       $a0, $a0, 0x4000
    ctx->pc = 0x190484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    // 0x190488: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x190488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19048c: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x19048cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x190490: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x190490u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x190494: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x190494u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x190498: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x190498u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19049c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19049cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1904a0: 0x9502015a  lhu         $v0, 0x15A($t0)
    ctx->pc = 0x1904a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 346)));
    // 0x1904a4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1904a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    ctx->pc = 0x1904a8u;
}
