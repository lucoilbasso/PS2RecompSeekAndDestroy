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

// Function: entry_00131140
// Address: 0x131140 - 0x131264
void entry_00131140_0x131140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131140_0x131140");
#endif

    switch (ctx->pc) {
        case 0x131164u: goto label_131164;
        case 0x131184u: goto label_131184;
        case 0x1311a4u: goto label_1311a4;
        case 0x1311d8u: goto label_1311d8;
        case 0x1311e0u: goto label_1311e0;
        case 0x1311f0u: goto label_1311f0;
        case 0x131214u: goto label_131214;
        case 0x131238u: goto label_131238;
        default: break;
    }

    ctx->pc = 0x131140u;

label_131140:
    // 0x131140: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x131140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_131144:
    // 0x131144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_131148:
    // 0x131148: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x131148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_13114c:
    // 0x13114c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_131150:
    // 0x131150: 0x8ca20154  lw          $v0, 0x154($a1)
    ctx->pc = 0x131150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 340)));
label_131154:
    // 0x131154: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x131154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_131158:
    // 0x131158: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x131158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_13115c:
    // 0x13115c: 0xc06a25a  jal         func_1A8968
label_131160:
    if (ctx->pc == 0x131160u) {
        ctx->pc = 0x131160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13115Cu;
        // 0x131160: 0x8cb102f8  lw          $s1, 0x2F8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131164u;
        goto label_131164;
    }
    ctx->pc = 0x13115Cu;
    SET_GPR_U32(ctx, 31, 0x131164u);
    ctx->pc = 0x131160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13115Cu;
    // 0x131160: 0x8cb102f8  lw          $s1, 0x2F8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x13115Cu, 0x131164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131164u;
label_131164:
    // 0x131164: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131168:
    // 0x131168: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x131168u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13116c:
    // 0x13116c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x13116cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_131170:
    // 0x131170: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x131170u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_131174:
    // 0x131174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131178:
    // 0x131178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13117c:
    // 0x13117c: 0xc06a25a  jal         func_1A8968
label_131180:
    if (ctx->pc == 0x131180u) {
        ctx->pc = 0x131180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13117Cu;
        // 0x131180: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131184u;
        goto label_131184;
    }
    ctx->pc = 0x13117Cu;
    SET_GPR_U32(ctx, 31, 0x131184u);
    ctx->pc = 0x131180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13117Cu;
    // 0x131180: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x13117Cu, 0x131184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131184u;
label_131184:
    // 0x131184: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131188:
    // 0x131188: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x131188u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13118c:
    // 0x13118c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x13118cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_131190:
    // 0x131190: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x131190u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_131194:
    // 0x131194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131198:
    // 0x131198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13119c:
    // 0x13119c: 0xc06a25a  jal         func_1A8968
label_1311a0:
    if (ctx->pc == 0x1311A0u) {
        ctx->pc = 0x1311A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13119Cu;
        // 0x1311a0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1311A4u;
        goto label_1311a4;
    }
    ctx->pc = 0x13119Cu;
    SET_GPR_U32(ctx, 31, 0x1311A4u);
    ctx->pc = 0x1311A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13119Cu;
    // 0x1311a0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x13119Cu, 0x1311A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311A4u;
label_1311a4:
    // 0x1311a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1311a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1311a8:
    // 0x1311a8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1311a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1311ac:
    // 0x1311ac: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1311acu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1311b0:
    // 0x1311b0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1311b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_1311b4:
    // 0x1311b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1311b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1311b8:
    // 0x1311b8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1311b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1311bc:
    // 0x1311bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1311bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1311c0:
    // 0x1311c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1311c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1311c4:
    // 0x1311c4: 0x24c60068  addiu       $a2, $a2, 0x68
    ctx->pc = 0x1311c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 104));
label_1311c8:
    // 0x1311c8: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x1311c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1311cc:
    // 0x1311cc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1311ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1311d0:
    // 0x1311d0: 0x40f809  jalr        $v0
label_1311d4:
    if (ctx->pc == 0x1311D4u) {
        ctx->pc = 0x1311D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311D0u;
        // 0x1311d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1311D8u;
        goto label_1311d8;
    }
    ctx->pc = 0x1311D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1311D8u);
        ctx->pc = 0x1311D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311D0u;
        // 0x1311d4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1311D0u, 0x1311D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1311D8u;
label_1311d8:
    // 0x1311d8: 0xc06a3d4  jal         func_1A8F50
label_1311dc:
    if (ctx->pc == 0x1311DCu) {
        ctx->pc = 0x1311DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311D8u;
        // 0x1311dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1311E0u;
        goto label_1311e0;
    }
    ctx->pc = 0x1311D8u;
    SET_GPR_U32(ctx, 31, 0x1311E0u);
    ctx->pc = 0x1311DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1311D8u;
    // 0x1311dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x1311D8u, 0x1311E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311E0u;
label_1311e0:
    // 0x1311e0: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_1311e4:
    if (ctx->pc == 0x1311E4u) {
        ctx->pc = 0x1311E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311E0u;
        // 0x1311e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1311E8u;
        goto label_1311e8;
    }
    ctx->pc = 0x1311E0u;
    {
        const bool branch_taken_0x1311e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1311E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1311E0u;
        // 0x1311e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1311e0) {
            ctx->pc = 0x131274u;
            return;
        }
    }
    ctx->pc = 0x1311E8u;
label_1311e8:
    // 0x1311e8: 0xc06a25a  jal         func_1A8968
label_1311ec:
    if (ctx->pc == 0x1311ECu) {
        ctx->pc = 0x1311F0u;
        goto label_1311f0;
    }
    ctx->pc = 0x1311E8u;
    SET_GPR_U32(ctx, 31, 0x1311F0u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x1311E8u, 0x1311F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311F0u;
label_1311f0:
    // 0x1311f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1311f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1311f4:
    // 0x1311f4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1311f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_1311f8:
    // 0x1311f8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1311f8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1311fc:
    // 0x1311fc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1311fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_131200:
    // 0x131200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131204:
    // 0x131204: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x131204u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_131208:
    // 0x131208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13120c:
    // 0x13120c: 0xc06a25a  jal         func_1A8968
label_131210:
    if (ctx->pc == 0x131210u) {
        ctx->pc = 0x131210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13120Cu;
        // 0x131210: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131214u;
        goto label_131214;
    }
    ctx->pc = 0x13120Cu;
    SET_GPR_U32(ctx, 31, 0x131214u);
    ctx->pc = 0x131210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13120Cu;
    // 0x131210: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x13120Cu, 0x131214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131214u;
label_131214:
    // 0x131214: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131214u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_131218:
    // 0x131218: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x131218u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_13121c:
    // 0x13121c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x13121cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_131220:
    // 0x131220: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x131220u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_131224:
    // 0x131224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131228:
    // 0x131228: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x131228u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_13122c:
    // 0x13122c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13122cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131230:
    // 0x131230: 0xc06a25a  jal         func_1A8968
label_131234:
    if (ctx->pc == 0x131234u) {
        ctx->pc = 0x131234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131230u;
        // 0x131234: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131238u;
        goto label_131238;
    }
    ctx->pc = 0x131230u;
    SET_GPR_U32(ctx, 31, 0x131238u);
    ctx->pc = 0x131234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131230u;
    // 0x131234: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x131230u, 0x131238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131238u;
label_131238:
    // 0x131238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13123c:
    // 0x13123c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13123cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_131240:
    // 0x131240: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x131240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_131244:
    // 0x131244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131248:
    // 0x131248: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x131248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13124c:
    // 0x13124c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13124cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131250:
    // 0x131250: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x131250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_131254:
    // 0x131254: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x131254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_131258:
    // 0x131258: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x131258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_13125c:
    // 0x13125c: 0xc0674a2  jal         func_19D288
label_131260:
    if (ctx->pc == 0x131260u) {
        ctx->pc = 0x131260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13125Cu;
        // 0x131260: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131264u;
        goto label_fallthrough_0x13125c;
    }
    ctx->pc = 0x13125Cu;
    SET_GPR_U32(ctx, 31, 0x131264u);
    ctx->pc = 0x131260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13125Cu;
    // 0x131260: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x13125Cu, 0x131264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x13125c:
    ctx->pc = 0x131264u;
}
