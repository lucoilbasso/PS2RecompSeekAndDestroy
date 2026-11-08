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

// Function: entry_0012c244
// Address: 0x12c244 - 0x12c2a8
void entry_0012c244_0x12c244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c244_0x12c244");
#endif

    switch (ctx->pc) {
        case 0x12c268u: goto label_12c268;
        default: break;
    }

    ctx->pc = 0x12c244u;

    // 0x12c244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c24c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c250: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x12c250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x12c254: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12c254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x12c258: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x12c258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x12c25c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12c260: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C260u;
    SET_GPR_U32(ctx, 31, 0x12C268u);
    ctx->pc = 0x12C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C260u;
    // 0x12c264: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C260u, 0x12C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C268u;
label_12c268:
    // 0x12c268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c26c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12C26Cu;
    {
        const bool branch_taken_0x12c26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c26c) {
            ctx->pc = 0x12C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C26Cu;
            // 0x12c270: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C2A8u;
            return;
        }
    }
    ctx->pc = 0x12C274u;
    // 0x12c274: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12c274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12c278: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c27c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c27cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c280: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c280u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c288: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x12c288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x12c28c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c290: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c290u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c294: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c294u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c298: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c298u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c2a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C2A0u;
    {
        const bool branch_taken_0x12c2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2A0u;
        // 0x12c2a4: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2a0) {
            ctx->pc = 0x12C2ACu;
            return;
        }
    }
    ctx->pc = 0x12C2A8u;
}
