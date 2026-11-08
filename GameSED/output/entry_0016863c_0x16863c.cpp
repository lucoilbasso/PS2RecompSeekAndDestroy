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

// Function: entry_0016863c
// Address: 0x16863c - 0x1686d4
void entry_0016863c_0x16863c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016863c_0x16863c");
#endif

    switch (ctx->pc) {
        case 0x168680u: goto label_168680;
        case 0x1686d0u: goto label_1686d0;
        default: break;
    }

    ctx->pc = 0x16863cu;

    // 0x16863c: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x16863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x168640: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168644: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x168644u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168648: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16864c: 0x4a0002ff  vnop
    ctx->pc = 0x16864cu;
    // NOP operation, no action needed for VU0
    // 0x168650: 0x4a0002ff  vnop
    ctx->pc = 0x168650u;
    // NOP operation, no action needed for VU0
    // 0x168654: 0x4a0002ff  vnop
    ctx->pc = 0x168654u;
    // NOP operation, no action needed for VU0
    // 0x168658: 0x4a0002ff  vnop
    ctx->pc = 0x168658u;
    // NOP operation, no action needed for VU0
    // 0x16865c: 0x4a0002ff  vnop
    ctx->pc = 0x16865cu;
    // NOP operation, no action needed for VU0
    // 0x168660: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x168660u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x168664: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x168664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x168668: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x168668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x16866c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x16866Cu;
    {
        const bool branch_taken_0x16866c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16866c) {
            ctx->pc = 0x168670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16866Cu;
            // 0x168670: 0x26300020  addiu       $s0, $s1, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1686D4u;
            return;
        }
    }
    ctx->pc = 0x168674u;
    // 0x168674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168678: 0xc06164c  jal         func_185930
    ctx->pc = 0x168678u;
    SET_GPR_U32(ctx, 31, 0x168680u);
    ctx->pc = 0x16867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168678u;
    // 0x16867c: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x168678u, 0x168680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168680u;
label_168680:
    // 0x168680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168684: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168684u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168688: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x168688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16868c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16868cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x168690: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168690u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168694: 0x4be1097f  vftoi15.xyzw $vf1, $vf1
    ctx->pc = 0x168694u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168698: 0xfac10000  sqc2        $vf1, 0x0($s6)
    ctx->pc = 0x168698u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16869c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x16869cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1686a0: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1686a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1686a4: 0x4bc2113c  vitof0.xyz  $vf2, $vf2
    ctx->pc = 0x1686a4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[2]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1686a8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x1686a8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1686ac: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1686acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1686b0: 0x8f829074  lw          $v0, -0x6F8C($gp)
    ctx->pc = 0x1686b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938740)));
    // 0x1686b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1686b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1686b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1686b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1686bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686c0: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x1686c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1686c4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1686c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1686c8: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1686C8u;
    SET_GPR_U32(ctx, 31, 0x1686D0u);
    ctx->pc = 0x1686CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1686C8u;
    // 0x1686cc: 0xaf829074  sw          $v0, -0x6F8C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1686C8u, 0x1686D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1686D0u;
label_1686d0:
    // 0x1686d0: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x1686d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x1686d4u;
}
