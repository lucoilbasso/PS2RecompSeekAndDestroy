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

// Function: entry_001681b4
// Address: 0x1681b4 - 0x16824c
void entry_001681b4_0x1681b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001681b4_0x1681b4");
#endif

    switch (ctx->pc) {
        case 0x1681f8u: goto label_1681f8;
        case 0x168248u: goto label_168248;
        default: break;
    }

    ctx->pc = 0x1681b4u;

    // 0x1681b4: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x1681b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1681b8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1681b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1681bc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1681bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1681c0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1681c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1681c4: 0x4a0002ff  vnop
    ctx->pc = 0x1681c4u;
    // NOP operation, no action needed for VU0
    // 0x1681c8: 0x4a0002ff  vnop
    ctx->pc = 0x1681c8u;
    // NOP operation, no action needed for VU0
    // 0x1681cc: 0x4a0002ff  vnop
    ctx->pc = 0x1681ccu;
    // NOP operation, no action needed for VU0
    // 0x1681d0: 0x4a0002ff  vnop
    ctx->pc = 0x1681d0u;
    // NOP operation, no action needed for VU0
    // 0x1681d4: 0x4a0002ff  vnop
    ctx->pc = 0x1681d4u;
    // NOP operation, no action needed for VU0
    // 0x1681d8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1681d8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1681dc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1681dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1681e0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1681e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1681e4: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1681E4u;
    {
        const bool branch_taken_0x1681e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1681e4) {
            ctx->pc = 0x1681E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1681E4u;
            // 0x1681e8: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16824Cu;
            return;
        }
    }
    ctx->pc = 0x1681ECu;
    // 0x1681ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1681ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681f0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1681F0u;
    SET_GPR_U32(ctx, 31, 0x1681F8u);
    ctx->pc = 0x1681F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1681F0u;
    // 0x1681f4: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1681F0u, 0x1681F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1681F8u;
label_1681f8:
    // 0x1681f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1681f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1681fc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1681fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168200: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x168200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x168204: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x168204u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168208: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16820c: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x16820cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168210: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168210u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168214: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x168214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x168218: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x168218u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x16821c: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x16821cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x168220: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x168220u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x168224: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x168224u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x168228: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x168228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x16822c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16822cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168230: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x168230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168238: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x168238u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x16823c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x16823cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168240: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x168240u;
    SET_GPR_U32(ctx, 31, 0x168248u);
    ctx->pc = 0x168244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168240u;
    // 0x168244: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x168240u, 0x168248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168248u;
label_168248:
    // 0x168248: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x168248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x16824cu;
}
