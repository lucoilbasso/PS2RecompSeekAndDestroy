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

// Function: caseD_14
// Address: 0x1339e8 - 0x133a6c
void caseD_14_0x1339e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x1339e8");
#endif

    switch (ctx->pc) {
        case 0x1339f0u: goto label_1339f0;
        case 0x1339fcu: goto label_1339fc;
        case 0x133a18u: goto label_133a18;
        default: break;
    }

    ctx->pc = 0x1339e8u;

    // 0x1339e8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1339E8u;
    SET_GPR_U32(ctx, 31, 0x1339F0u);
    ctx->pc = 0x1339ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339E8u;
    // 0x1339ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1339E8u, 0x1339F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339F0u;
label_1339f0:
    // 0x1339f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1339f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1339f4: 0xc04db4e  jal         func_136D38
    ctx->pc = 0x1339F4u;
    SET_GPR_U32(ctx, 31, 0x1339FCu);
    ctx->pc = 0x1339F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1339F4u;
    // 0x1339f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136D38u, 0x1339F4u, 0x1339FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339FCu;
label_1339fc:
    // 0x1339fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1339fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x133a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x133a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x133a08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x133a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x133a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133a10: 0xc05129a  jal         func_144A68
    ctx->pc = 0x133A10u;
    SET_GPR_U32(ctx, 31, 0x133A18u);
    ctx->pc = 0x133A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133A10u;
    // 0x133a14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x133A10u, 0x133A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A18u;
label_133a18:
    // 0x133a18: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x133a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133a1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x133a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x133a20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x133a20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x133a24: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x133a24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x133a28: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133a28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x133a2c: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133a2cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x133a30: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x133a30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x133a34: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x133a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x133a38: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x133a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x133a3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x133a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133a40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x133a40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x133a44: 0x56040009  bnel        $s0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133A44u;
    {
        const bool branch_taken_0x133a44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x133a44) {
            ctx->pc = 0x133A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133A44u;
            // 0x133a48: 0x8ea40328  lw          $a0, 0x328($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133A6Cu;
            return;
        }
    }
    ctx->pc = 0x133A4Cu;
    // 0x133a4c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x133a50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x133a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x133a54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133a58: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133A58u;
    {
        const bool branch_taken_0x133a58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133a58) {
            ctx->pc = 0x133A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133A58u;
            // 0x133a5c: 0x8ea40328  lw          $a0, 0x328($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133A6Cu;
            return;
        }
    }
    ctx->pc = 0x133A60u;
    // 0x133a60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x133a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x133a64: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x133a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x133a68: 0x8ea40328  lw          $a0, 0x328($s5)
    ctx->pc = 0x133a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 808)));
    ctx->pc = 0x133a6cu;
}
