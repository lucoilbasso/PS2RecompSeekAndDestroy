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

// Function: caseD_19
// Address: 0x133d90 - 0x133df0
void caseD_19_0x133d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x133d90");
#endif

    switch (ctx->pc) {
        case 0x133dc8u: goto label_133dc8;
        default: break;
    }

    ctx->pc = 0x133d90u;

    // 0x133d90: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x133d94: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x133d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x133d98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133d9c: 0x506400c2  beql        $v1, $a0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x133D9Cu;
    {
        const bool branch_taken_0x133d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133d9c) {
            ctx->pc = 0x133DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133D9Cu;
            // 0x133da0: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133DA4u;
    // 0x133da4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x133da8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x133da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x133dac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x133dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133db0: 0x8c50b830  lw          $s0, -0x47D0($v0)
    ctx->pc = 0x133db0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x1FB830u));
    // 0x133db4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133db8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133dbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133dc0: 0xc05129a  jal         func_144A68
    ctx->pc = 0x133DC0u;
    SET_GPR_U32(ctx, 31, 0x133DC8u);
    ctx->pc = 0x133DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DC0u;
    // 0x133dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x133DC0u, 0x133DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DC8u;
label_133dc8:
    // 0x133dc8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x133dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133dcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x133dccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x133dd0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x133dd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x133dd4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133dd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x133dd8: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133dd8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x133ddc: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x133ddcu;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x133de0: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x133de0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
    // 0x133de4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x133DE4u;
    {
        const bool branch_taken_0x133de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133DE4u;
        // 0x133de8: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133de4) {
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133DECu;
    // 0x133dec: 0x0  nop
    ctx->pc = 0x133decu;
    // NOP
    ctx->pc = 0x133df0u;
}
