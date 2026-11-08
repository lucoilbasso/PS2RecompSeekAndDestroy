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

// Function: entry_0012b470
// Address: 0x12b470 - 0x12b4d0
void entry_0012b470_0x12b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b470_0x12b470");
#endif

    switch (ctx->pc) {
        case 0x12b48cu: goto label_12b48c;
        default: break;
    }

    ctx->pc = 0x12b470u;

    // 0x12b470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b474: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b478: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b47c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b480: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x12b480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x12b484: 0xc04844a  jal         func_121128
    ctx->pc = 0x12B484u;
    SET_GPR_U32(ctx, 31, 0x12B48Cu);
    ctx->pc = 0x12B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B484u;
    // 0x12b488: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12B484u, 0x12B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B48Cu;
label_12b48c:
    // 0x12b48c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12b48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b490: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x12B490u;
    {
        const bool branch_taken_0x12b490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b490) {
            ctx->pc = 0x12B494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B490u;
            // 0x12b494: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B4D0u;
            return;
        }
    }
    ctx->pc = 0x12B498u;
    // 0x12b498: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12b49c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12b49cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b4a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12b4a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b4a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12b4a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b4a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b4ac: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12b4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x12b4b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12b4b4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12b4b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12b4b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12b4b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12b4bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12b4bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12b4c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b4c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B4C4u;
    {
        const bool branch_taken_0x12b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4C4u;
        // 0x12b4c8: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4c4) {
            ctx->pc = 0x12B4D4u;
            return;
        }
    }
    ctx->pc = 0x12B4CCu;
    // 0x12b4cc: 0x0  nop
    ctx->pc = 0x12b4ccu;
    // NOP
    ctx->pc = 0x12b4d0u;
}
