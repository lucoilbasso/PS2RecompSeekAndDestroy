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

// Function: BrzierDataVectorCopy__17BBrzierVectorWork
// Address: 0x1a9d68 - 0x1a9e60
void BrzierDataVectorCopy__17BBrzierVectorWork_0x1a9d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BrzierDataVectorCopy__17BBrzierVectorWork_0x1a9d68");
#endif

    switch (ctx->pc) {
        case 0x1a9d80u: goto label_1a9d80;
        default: break;
    }

    ctx->pc = 0x1a9d68u;

    // 0x1a9d68: 0x8c8200e8  lw          $v0, 0xE8($a0)
    ctx->pc = 0x1a9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x1a9d6c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1a9d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9d70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a9d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9d74: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1a9d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a9d78: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x1a9d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a9d7c: 0x0  nop
    ctx->pc = 0x1a9d7cu;
    // NOP
label_1a9d80:
    // 0x1a9d80: 0x8c8700e4  lw          $a3, 0xE4($a0)
    ctx->pc = 0x1a9d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x1a9d84: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9D84u;
    {
        const bool branch_taken_0x1a9d84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9D84u;
        // 0x1a9d88: 0x8c8300dc  lw          $v1, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9d84) {
            ctx->pc = 0x1A9DB8u;
            goto label_1a9db8;
        }
    }
    ctx->pc = 0x1A9D8Cu;
    // 0x1a9d8c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1a9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a9d90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a9d94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a9d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9d98: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a9d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a9d9c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1a9d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a9da0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1a9da0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1a9da4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a9da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9da8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1a9da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1a9dac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a9dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9db0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1A9DB0u;
    {
        const bool branch_taken_0x1a9db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DB0u;
        // 0x1a9db4: 0xe4c10008  swc1        $f1, 0x8($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9db0) {
            ctx->pc = 0x1A9E40u;
            goto label_1a9e40;
        }
    }
    ctx->pc = 0x1A9DB8u;
label_1a9db8:
    // 0x1a9db8: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1a9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1a9dbc: 0x14ea000c  bne         $a3, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9DBCu;
    {
        const bool branch_taken_0x1a9dbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x1A9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DBCu;
        // 0x1a9dc0: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9dbc) {
            ctx->pc = 0x1A9DF0u;
            goto label_1a9df0;
        }
    }
    ctx->pc = 0x1A9DC4u;
    // 0x1a9dc4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a9dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9dc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a9dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a9dcc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1a9dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9dd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a9dd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a9dd4: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x1a9dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9dd8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a9dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a9ddc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1a9ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a9de0: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1a9de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1a9de4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A9DE4u;
    {
        const bool branch_taken_0x1a9de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9DE4u;
        // 0x1a9de8: 0xe4c20008  swc1        $f2, 0x8($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9de4) {
            ctx->pc = 0x1A9E38u;
            goto label_1a9e38;
        }
    }
    ctx->pc = 0x1A9DECu;
    // 0x1a9dec: 0x0  nop
    ctx->pc = 0x1a9decu;
    // NOP
label_1a9df0:
    // 0x1a9df0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1a9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a9df4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1a9df4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a9df8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a9df8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9dfc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a9dfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9e04: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1a9e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a9e08: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a9e0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1a9e0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a9e10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a9e10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9e14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a9e14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9e1c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1a9e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1a9e20: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1a9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a9e24: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1a9e24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a9e28: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a9e28u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9e2c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a9e2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a9e34: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1a9e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1a9e38:
    // 0x1a9e38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a9e3c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1a9e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1a9e40:
    // 0x1a9e40: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1a9e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1a9e44: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1a9e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1a9e48: 0x521ffcd  bgez        $t1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1A9E48u;
    {
        const bool branch_taken_0x1a9e48 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1A9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E48u;
        // 0x1a9e4c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e48) {
            ctx->pc = 0x1A9D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9d80;
        }
    }
    ctx->pc = 0x1A9E50u;
    // 0x1a9e50: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1a9e54: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1a9e54u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1a9e58: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E58u;
        // 0x1a9e5c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E60u;
}
