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

// Function: entry_00162858
// Address: 0x162858 - 0x1628b4
void entry_00162858_0x162858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162858_0x162858");
#endif

    switch (ctx->pc) {
        case 0x1628a4u: goto label_1628a4;
        default: break;
    }

    ctx->pc = 0x162858u;

    // 0x162858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x162858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16285c: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16285cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x162860: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x162864: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x162864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162868: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16286c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16286cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x162870: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x162870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162874: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x162874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162878: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162878u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16287c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x16287cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x162880: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x162880u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x162884: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x162884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x162888: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x162888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16288c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x16288cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x162890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162894: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x162894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x162898: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x162898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16289c: 0xc0618d4  jal         func_186350
    ctx->pc = 0x16289Cu;
    SET_GPR_U32(ctx, 31, 0x1628A4u);
    ctx->pc = 0x1628A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16289Cu;
    // 0x1628a0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186350u, 0x16289Cu, 0x1628A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628A4u;
label_1628a4:
    // 0x1628a4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1628a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1628a8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1628a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1628ac: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1628ACu;
    {
        const bool branch_taken_0x1628ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1628ac) {
            ctx->pc = 0x1628B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1628ACu;
            // 0x1628b0: 0xc6000030  lwc1        $f0, 0x30($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x162848u;
            return;
        }
    }
    ctx->pc = 0x1628B4u;
}
