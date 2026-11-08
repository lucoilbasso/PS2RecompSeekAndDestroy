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

// Function: caseD_17
// Address: 0x108e00 - 0x108eb8
void caseD_17_0x108e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x108e00");
#endif

    switch (ctx->pc) {
        case 0x108e18u: goto label_108e18;
        case 0x108e30u: goto label_108e30;
        case 0x108e38u: goto label_108e38;
        case 0x108e44u: goto label_108e44;
        case 0x108e60u: goto label_108e60;
        case 0x108e7cu: goto label_108e7c;
        case 0x108eb0u: goto label_108eb0;
        default: break;
    }

    ctx->pc = 0x108e00u;

    // 0x108e00: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x108e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x108e04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x108e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x108e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e10: 0xc042170  jal         func_1085C0
    ctx->pc = 0x108E10u;
    SET_GPR_U32(ctx, 31, 0x108E18u);
    ctx->pc = 0x108E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E10u;
    // 0x108e14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x108E10u, 0x108E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E18u;
label_108e18:
    // 0x108e18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x108e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e1c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x108e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x108e20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x108e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e28: 0xc042170  jal         func_1085C0
    ctx->pc = 0x108E28u;
    SET_GPR_U32(ctx, 31, 0x108E30u);
    ctx->pc = 0x108E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E28u;
    // 0x108e2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x108E28u, 0x108E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E30u;
label_108e30:
    // 0x108e30: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108E30u;
    SET_GPR_U32(ctx, 31, 0x108E38u);
    ctx->pc = 0x108E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E30u;
    // 0x108e34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108E30u, 0x108E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E38u;
label_108e38:
    // 0x108e38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x108e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e3c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108E3Cu;
    SET_GPR_U32(ctx, 31, 0x108E44u);
    ctx->pc = 0x108E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E3Cu;
    // 0x108e40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108E3Cu, 0x108E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E44u;
label_108e44:
    // 0x108e44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e48: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x108e48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x108e4c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x108e4cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x108e50: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x108e50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x108e54: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x108e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x108e58: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108E58u;
    SET_GPR_U32(ctx, 31, 0x108E60u);
    ctx->pc = 0x108E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E58u;
    // 0x108e5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108E58u, 0x108E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E60u;
label_108e60:
    // 0x108e60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108e60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e64: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x108e64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x108e68: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x108e68u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x108e6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x108e6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x108e70: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x108e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x108e74: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x108E74u;
    SET_GPR_U32(ctx, 31, 0x108E7Cu);
    ctx->pc = 0x108E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108E74u;
    // 0x108e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x108E74u, 0x108E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108E7Cu;
label_108e7c:
    // 0x108e7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e80: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x108e80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x108e84: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x108e84u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x108e88: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x108e88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x108e8c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x108e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x108e90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x108e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108e9c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x108e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ea0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x108ea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ea4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x108ea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x108ea8: 0xc0694fe  jal         func_1A53F8
    ctx->pc = 0x108EA8u;
    SET_GPR_U32(ctx, 31, 0x108EB0u);
    ctx->pc = 0x108EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108EA8u;
    // 0x108eac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53F8u, 0x108EA8u, 0x108EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108EB0u;
label_108eb0:
    // 0x108eb0: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x108EB0u;
    {
        const bool branch_taken_0x108eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108EB0u;
        // 0x108eb4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108eb0) {
            ctx->pc = 0x109104u;
            return;
        }
    }
    ctx->pc = 0x108EB8u;
}
