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

// Function: ApDisp3dLoadStrobjStruct__FP5BcObjPiT1PPi
// Address: 0x10ed20 - 0x10ef30
void ApDisp3dLoadStrobjStruct__FP5BcObjPiT1PPi_0x10ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApDisp3dLoadStrobjStruct__FP5BcObjPiT1PPi_0x10ed20");
#endif

    switch (ctx->pc) {
        case 0x10ed6cu: goto label_10ed6c;
        case 0x10ed88u: goto label_10ed88;
        case 0x10edb0u: goto label_10edb0;
        default: break;
    }

    ctx->pc = 0x10ed20u;

    // 0x10ed20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ed24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ed28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10ed28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ed2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10ed30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ed30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10ed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10ed38: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x10ed38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed3c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10ed3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10ed40: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x10ed40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10ed48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10ed48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed4c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10ed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10ed50: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x10ed50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ed54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ed54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ed58: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10ED58u;
    {
        const bool branch_taken_0x10ed58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED58u;
        // 0x10ed5c: 0x122980  sll         $a1, $s2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed58) {
            ctx->pc = 0x10ED64u;
            goto label_10ed64;
        }
    }
    ctx->pc = 0x10ED60u;
    // 0x10ed60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10ed64:
    // 0x10ed64: 0xc068086  jal         func_1A0218
    ctx->pc = 0x10ED64u;
    SET_GPR_U32(ctx, 31, 0x10ED6Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10ED64u, 0x10ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED6Cu;
label_10ed6c:
    // 0x10ed6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ed6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed70: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10ED70u;
    {
        const bool branch_taken_0x10ed70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED70u;
        // 0x10ed74: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed70) {
            ctx->pc = 0x10ED90u;
            goto label_10ed90;
        }
    }
    ctx->pc = 0x10ED78u;
    // 0x10ed78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed7c: 0x24a53dc8  addiu       $a1, $a1, 0x3DC8
    ctx->pc = 0x10ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15816));
    // 0x10ed80: 0xc068186  jal         func_1A0618
    ctx->pc = 0x10ED80u;
    SET_GPR_U32(ctx, 31, 0x10ED88u);
    ctx->pc = 0x10ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ED80u;
    // 0x10ed84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x10ED80u, 0x10ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ED88u;
label_10ed88:
    // 0x10ed88: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x10ED88u;
    {
        const bool branch_taken_0x10ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED88u;
        // 0x10ed8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed88) {
            ctx->pc = 0x10EF10u;
            goto label_10ef10;
        }
    }
    ctx->pc = 0x10ED90u;
label_10ed90:
    // 0x10ed90: 0x1a40005b  blez        $s2, . + 4 + (0x5B << 2)
    ctx->pc = 0x10ED90u;
    {
        const bool branch_taken_0x10ed90 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x10ed90) {
            ctx->pc = 0x10EF00u;
            goto label_10ef00;
        }
    }
    ctx->pc = 0x10ED98u;
    // 0x10ed98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ed98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ed9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10ed9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10eda0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x10eda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eda4: 0xc7818060  lwc1        $f1, -0x7FA0($gp)
    ctx->pc = 0x10eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10eda8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10eda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edac: 0x0  nop
    ctx->pc = 0x10edacu;
    // NOP
label_10edb0:
    // 0x10edb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edb4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10edb8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10edb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10edbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edc0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10edc4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x10edc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x10edc8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edcc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10edd0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x10edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x10edd4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edd8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10eddc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10eddcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ede0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ede0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ede4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ede4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ede8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ede8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10edec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10edecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10edf0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10edf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10edf4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x10edf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x10edf8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10edf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10edfc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10edfcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee00: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ee0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ee0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ee10: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x10ee10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x10ee14: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10ee14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ee18: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ee18u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee1c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee1cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ee28: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ee28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ee2c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x10ee2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x10ee30: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x10ee30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x10ee34: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10ee34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ee38: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ee38u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee3c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee3cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10ee44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10ee48: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ee48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x10ee4c: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x10ee4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x10ee50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ee54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ee54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ee58: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10ee58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ee5c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ee5cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee60: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10ee68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10ee6c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ee6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x10ee70: 0xe4830024  swc1        $f3, 0x24($a0)
    ctx->pc = 0x10ee70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x10ee74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ee78: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10ee78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10ee7c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10ee7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10ee80: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10ee80u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10ee84: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10ee84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10ee88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ee88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ee8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10ee8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10ee90: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x10ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x10ee94: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10ee94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x10ee98: 0xe4830028  swc1        $f3, 0x28($a0)
    ctx->pc = 0x10ee98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x10ee9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10eea0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10eea0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10eea4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10eea4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10eea8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10eea8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10eeac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10eeacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10eeb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10eeb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eeb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10eeb8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10eeb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10eebc: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x10eebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x10eec0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10eec0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10eec4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10eec4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10eec8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10eec8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10eecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10eeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eed0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10eed4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10eed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10eed8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x10eed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x10eedc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x10eedcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x10eee0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x10eee0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x10eee4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x10eee4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x10eee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10eee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eeec: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x10eeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10eef0: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x10eef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x10eef4: 0xe482003c  swc1        $f2, 0x3C($a0)
    ctx->pc = 0x10eef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x10eef8: 0x14a0ffad  bnez        $a1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x10EEF8u;
    {
        const bool branch_taken_0x10eef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EEF8u;
        // 0x10eefc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eef8) {
            ctx->pc = 0x10EDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10edb0;
        }
    }
    ctx->pc = 0x10EF00u;
label_10ef00:
    // 0x10ef00: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x10EF00u;
    {
        const bool branch_taken_0x10ef00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF00u;
        // 0x10ef04: 0xae920000  sw          $s2, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef00) {
            ctx->pc = 0x10EF0Cu;
            goto label_10ef0c;
        }
    }
    ctx->pc = 0x10EF08u;
    // 0x10ef08: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x10ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_10ef0c:
    // 0x10ef0c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x10ef0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10ef10:
    // 0x10ef10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ef10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ef14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ef14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ef18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ef18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ef1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10ef1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ef20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10ef20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ef24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10ef24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10ef28: 0x3e00008  jr          $ra
    ctx->pc = 0x10EF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF28u;
        // 0x10ef2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EF30u;
}
