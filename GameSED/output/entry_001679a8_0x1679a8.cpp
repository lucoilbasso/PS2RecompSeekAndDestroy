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

// Function: entry_001679a8
// Address: 0x1679a8 - 0x167a40
void entry_001679a8_0x1679a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001679a8_0x1679a8");
#endif

    ctx->pc = 0x1679a8u;

label_1679a8:
    // 0x1679a8: 0xffb10238  sd          $s1, 0x238($sp)
    ctx->pc = 0x1679a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 17));
label_1679ac:
    // 0x1679ac: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x1679acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
label_1679b0:
    // 0x1679b0: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x1679b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
label_1679b4:
    // 0x1679b4: 0xffb70268  sd          $s7, 0x268($sp)
    ctx->pc = 0x1679b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 23));
label_1679b8:
    // 0x1679b8: 0xffbe0270  sd          $fp, 0x270($sp)
    ctx->pc = 0x1679b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 30));
label_1679bc:
    // 0x1679bc: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x1679bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
label_1679c0:
    // 0x1679c0: 0xe7b50288  swc1        $f21, 0x288($sp)
    ctx->pc = 0x1679c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_1679c4:
    // 0x1679c4: 0xe7b40280  swc1        $f20, 0x280($sp)
    ctx->pc = 0x1679c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_1679c8:
    // 0x1679c8: 0x8ec41244  lw          $a0, 0x1244($s6)
    ctx->pc = 0x1679c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4676)));
label_1679cc:
    // 0x1679cc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1679ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1679d0:
    // 0x1679d0: 0x41083  sra         $v0, $a0, 2
    ctx->pc = 0x1679d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 2));
label_1679d4:
    // 0x1679d4: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x1679d4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1679d8:
    // 0x1679d8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1679d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1679dc:
    // 0x1679dc: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1679dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1679e0:
    // 0x1679e0: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x1679e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1679e4:
    // 0x1679e4: 0x70001030  pmfhl.lw    $v0
    ctx->pc = 0x1679e4u;
    SET_GPR_VEC(ctx, 2, PS2_PMFHL_LW(ctx->hi, ctx->lo));
label_1679e8:
    // 0x1679e8: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x1679e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
label_1679ec:
    // 0x1679ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1679ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1679f0:
    // 0x1679f0: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1679f0u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_1679f4:
    // 0x1679f4: 0x23800  sll         $a3, $v0, 0
    ctx->pc = 0x1679f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1679f8:
    // 0x1679f8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1679f8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_1679fc:
    // 0x1679fc: 0xafa701e0  sw          $a3, 0x1E0($sp)
    ctx->pc = 0x1679fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 7));
label_167a00:
    // 0x167a00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x167a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_167a04:
    // 0x167a04: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x167a04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_167a08:
    // 0x167a08: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x167a08u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_167a0c:
    // 0x167a0c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x167a0cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_167a10:
    // 0x167a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167a14:
    // 0x167a14: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x167a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_167a18:
    // 0x167a18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x167a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_167a1c:
    // 0x167a1c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x167a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_167a20:
    // 0x167a20: 0x104005ad  beqz        $v0, . + 4 + (0x5AD << 2)
label_167a24:
    if (ctx->pc == 0x167A24u) {
        ctx->pc = 0x167A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A20u;
        // 0x167a24: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167A28u;
        goto label_167a28;
    }
    ctx->pc = 0x167A20u;
    {
        const bool branch_taken_0x167a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A20u;
        // 0x167a24: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a20) {
            ctx->pc = 0x1690D8u;
            return;
        }
    }
    ctx->pc = 0x167A28u;
label_167a28:
    // 0x167a28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x167a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167a2c:
    // 0x167a2c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x167a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_167a30:
    // 0x167a30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167a34:
    // 0x167a34: 0x8c637250  lw          $v1, 0x7250($v1)
    ctx->pc = 0x167a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29264)));
label_167a38:
    // 0x167a38: 0x600008  jr          $v1
label_167a3c:
    if (ctx->pc == 0x167A3Cu) {
        ctx->pc = 0x167A40u;
        goto label_fallthrough_0x167a38;
    }
    ctx->pc = 0x167A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167A38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x167a38:
    ctx->pc = 0x167A40u;
}
