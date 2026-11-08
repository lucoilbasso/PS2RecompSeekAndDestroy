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

// Function: entry_00121ab8
// Address: 0x121ab8 - 0x121af4
void entry_00121ab8_0x121ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121ab8_0x121ab8");
#endif

    switch (ctx->pc) {
        case 0x121ac0u: goto label_121ac0;
        case 0x121ad0u: goto label_121ad0;
        default: break;
    }

    ctx->pc = 0x121ab8u;

    // 0x121ab8: 0xc04844a  jal         func_121128
    ctx->pc = 0x121AB8u;
    SET_GPR_U32(ctx, 31, 0x121AC0u);
    ctx->pc = 0x121ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AB8u;
    // 0x121abc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x121AB8u, 0x121AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AC0u;
label_121ac0:
    // 0x121ac0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x121AC0u;
    {
        const bool branch_taken_0x121ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121AC0u;
        // 0x121ac4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ac0) {
            ctx->pc = 0x121AF4u;
            return;
        }
    }
    ctx->pc = 0x121AC8u;
    // 0x121ac8: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x121AC8u;
    SET_GPR_U32(ctx, 31, 0x121AD0u);
    ctx->pc = 0x121ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121AC8u;
    // 0x121acc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x121AC8u, 0x121AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121AD0u;
label_121ad0:
    // 0x121ad0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121ad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121ad4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x121ad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x121ad8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x121ad8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x121adc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x121adcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x121ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x121ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121ae4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x121ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x121ae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x121ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x121aec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x121aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121af0: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x121af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->pc = 0x121af4u;
}
