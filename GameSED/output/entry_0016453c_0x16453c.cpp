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

// Function: entry_0016453c
// Address: 0x16453c - 0x16459c
void entry_0016453c_0x16453c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016453c_0x16453c");
#endif

    ctx->pc = 0x16453cu;

    // 0x16453c: 0x12e00081  beqz        $s7, . + 4 + (0x81 << 2)
    ctx->pc = 0x16453Cu;
    {
        const bool branch_taken_0x16453c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x164540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16453Cu;
        // 0x164540: 0x2e0802d  daddu       $s0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16453c) {
            ctx->pc = 0x164744u;
            return;
        }
    }
    ctx->pc = 0x164544u;
    // 0x164544: 0x26b119c0  addiu       $s1, $s5, 0x19C0
    ctx->pc = 0x164544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 6592));
    // 0x164548: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x164548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16454c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16454cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164550: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x164550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164554: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x164554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x164558: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x164558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16455c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16455cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164560: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164560u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164564: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164564u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164568: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164568u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16456c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16456cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164574: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x164574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164578: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x16457c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x16457cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x164580: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x164580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x164584: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x164584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x164588: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x164588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16458c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x16458cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164590: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x164590u;
    {
        const bool branch_taken_0x164590 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x164594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164590u;
        // 0x164594: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164590) {
            ctx->pc = 0x16459Cu;
            return;
        }
    }
    ctx->pc = 0x164598u;
    // 0x164598: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x164598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->pc = 0x16459cu;
}
