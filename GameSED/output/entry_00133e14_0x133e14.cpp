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

// Function: entry_00133e14
// Address: 0x133e14 - 0x133e98
void entry_00133e14_0x133e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133e14_0x133e14");
#endif

    switch (ctx->pc) {
        case 0x133e20u: goto label_133e20;
        case 0x133e58u: goto label_133e58;
        default: break;
    }

    ctx->pc = 0x133e14u;

    // 0x133e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e18: 0xc061422  jal         func_185088
    ctx->pc = 0x133E18u;
    SET_GPR_U32(ctx, 31, 0x133E20u);
    ctx->pc = 0x133E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E18u;
    // 0x133e1c: 0x26710110  addiu       $s1, $s3, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x133E18u, 0x133E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E20u;
label_133e20:
    // 0x133e20: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x133e24: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x133e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x133e28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133e2c: 0x5064009e  beql        $v1, $a0, . + 4 + (0x9E << 2)
    ctx->pc = 0x133E2Cu;
    {
        const bool branch_taken_0x133e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133e2c) {
            ctx->pc = 0x133E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133E2Cu;
            // 0x133e30: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133E34u;
    // 0x133e34: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x133e38: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x133e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x133e3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x133e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133e40: 0x8c50b830  lw          $s0, -0x47D0($v0)
    ctx->pc = 0x133e40u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x1FB830u));
    // 0x133e44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x133e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e50: 0xc05129a  jal         func_144A68
    ctx->pc = 0x133E50u;
    SET_GPR_U32(ctx, 31, 0x133E58u);
    ctx->pc = 0x133E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133E50u;
    // 0x133e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x133E50u, 0x133E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E58u;
label_133e58:
    // 0x133e58: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x133e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133e5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x133e5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x133e60: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x133e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x133e64: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x133e68: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133e68u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x133e6c: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x133e6cu;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x133e70: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x133e70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
    // 0x133e74: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x133e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133e78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x133e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x133e7c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133e7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x133e80: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133e80u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x133e84: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x133e84u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x133e88: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x133e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x133e8c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x133E8Cu;
    {
        const bool branch_taken_0x133e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E8Cu;
        // 0x133e90: 0x2038023  subu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e8c) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133E94u;
    // 0x133e94: 0x0  nop
    ctx->pc = 0x133e94u;
    // NOP
    ctx->pc = 0x133e98u;
}
