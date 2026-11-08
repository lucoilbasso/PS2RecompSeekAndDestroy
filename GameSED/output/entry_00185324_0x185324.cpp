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

// Function: entry_00185324
// Address: 0x185324 - 0x185378
void entry_00185324_0x185324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185324_0x185324");
#endif

    ctx->pc = 0x185324u;

    // 0x185324: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x185324u;
    {
        const bool branch_taken_0x185324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185324u;
        // 0x185328: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185324) {
            ctx->pc = 0x1853B8u;
            return;
        }
    }
    ctx->pc = 0x18532Cu;
    // 0x18532c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18532cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185330: 0x2442dc10  addiu       $v0, $v0, -0x23F0
    ctx->pc = 0x185330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958096));
    // 0x185334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x185334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x185338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18533c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18533cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185340: 0x14e3000d  bne         $a3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x185340u;
    {
        const bool branch_taken_0x185340 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x185344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185340u;
        // 0x185344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185340) {
            ctx->pc = 0x185378u;
            return;
        }
    }
    ctx->pc = 0x185348u;
    // 0x185348: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x185348u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18534c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x18534cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x185350: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x185350u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x185354: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x185354u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x185358: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x185358u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x18535c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x18535cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185360: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x185360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185364: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x185364u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x185368: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x185368u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x18536c: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x18536cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x185370: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x185370u;
    {
        const bool branch_taken_0x185370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185370u;
        // 0x185374: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185370) {
            ctx->pc = 0x1853BCu;
            return;
        }
    }
    ctx->pc = 0x185378u;
}
