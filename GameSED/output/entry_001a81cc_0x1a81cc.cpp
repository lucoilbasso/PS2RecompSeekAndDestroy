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

// Function: entry_001a81cc
// Address: 0x1a81cc - 0x1a8208
void entry_001a81cc_0x1a81cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a81cc_0x1a81cc");
#endif

    switch (ctx->pc) {
        case 0x1a8200u: goto label_1a8200;
        default: break;
    }

    ctx->pc = 0x1a81ccu;

    // 0x1a81cc: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1a81ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1a81d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a81d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a81d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a81d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a81d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a81d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a81dc: 0x8f829080  lw          $v0, -0x6F80($gp)
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a81e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a81e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a81e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A81E4u;
    {
        const bool branch_taken_0x1a81e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81E4u;
        // 0x1a81e8: 0x2664d910  addiu       $a0, $s3, -0x26F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81e4) {
            ctx->pc = 0x1A8208u;
            return;
        }
    }
    ctx->pc = 0x1A81ECu;
    // 0x1a81ec: 0x46146002  mul.s       $f0, $f12, $f20
    ctx->pc = 0x1a81ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1a81f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a81f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a81f4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1a81f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a81f8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A81F8u;
    SET_GPR_U32(ctx, 31, 0x1A8200u);
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A81F8u, 0x1A8200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8200u;
label_1a8200:
    // 0x1a8200: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A8200u;
    {
        const bool branch_taken_0x1a8200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8200u;
        // 0x1a8204: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8200) {
            ctx->pc = 0x1A8244u;
            return;
        }
    }
    ctx->pc = 0x1A8208u;
}
