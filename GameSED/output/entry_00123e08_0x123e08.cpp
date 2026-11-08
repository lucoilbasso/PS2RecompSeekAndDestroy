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

// Function: entry_00123e08
// Address: 0x123e08 - 0x123ee0
void entry_00123e08_0x123e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123e08_0x123e08");
#endif

    switch (ctx->pc) {
        case 0x123e20u: goto label_123e20;
        default: break;
    }

    ctx->pc = 0x123e08u;

label_123e08:
    // 0x123e08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x123e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e0c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x123e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x123e10: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x123e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x123e14: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x123e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x123e18: 0xc048424  jal         func_121090
    ctx->pc = 0x123E18u;
    SET_GPR_U32(ctx, 31, 0x123E20u);
    ctx->pc = 0x123E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E18u;
    // 0x123e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x123E18u, 0x123E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E20u;
label_123e20:
    // 0x123e20: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x123e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
    // 0x123e24: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x123e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x123e28: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x123e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x123e2c: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x123e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x123e30: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x123e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x123e34: 0xe63400dc  swc1        $f20, 0xDC($s1)
    ctx->pc = 0x123e34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x123e38: 0xe63500e0  swc1        $f21, 0xE0($s1)
    ctx->pc = 0x123e38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x123e3c: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x123e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x123e40: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x123e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x123e44: 0xe63400ec  swc1        $f20, 0xEC($s1)
    ctx->pc = 0x123e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
    // 0x123e48: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x123e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x123e4c: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x123e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x123e50: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x123e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    // 0x123e54: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x123e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x123e58: 0xe6340104  swc1        $f20, 0x104($s1)
    ctx->pc = 0x123e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x123e5c: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x123e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x123e60: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x123e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x123e64: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x123e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x123e68: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x123e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
    // 0x123e6c: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x123e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x123e70: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x123e70u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x123e74: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x123e74u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123e78: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x123e78u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x123e7c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x123e7cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x123e80: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x123e80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123e84: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x123e84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123e88: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x123e88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123e8c: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x123e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123e90: 0x26220160  addiu       $v0, $s1, 0x160
    ctx->pc = 0x123e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x123e94: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x123e94u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x123e98: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x123e98u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123e9c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x123e9cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x123ea0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x123ea0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x123ea4: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123ea8: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x123ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123eac: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x123eacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123eb0: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x123eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123eb4: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x123eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x123eb8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x123eb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ebc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x123ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x123ec0: 0xae2001a4  sw          $zero, 0x1A4($s1)
    ctx->pc = 0x123ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 0));
    // 0x123ec4: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x123ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x123ec8: 0x131240  sll         $v0, $s3, 9
    ctx->pc = 0x123ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x123ecc: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x123eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x123ed0: 0x660002d  bltz        $s3, . + 4 + (0x2D << 2)
    ctx->pc = 0x123ED0u;
    {
        const bool branch_taken_0x123ed0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x123ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ED0u;
        // 0x123ed4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ed0) {
            ctx->pc = 0x123F88u;
            return;
        }
    }
    ctx->pc = 0x123ED8u;
    // 0x123ed8: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x123ED8u;
    {
        const bool branch_taken_0x123ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ED8u;
        // 0x123edc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ed8) {
            ctx->pc = 0x123E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123e08;
        }
    }
    ctx->pc = 0x123EE0u;
}
