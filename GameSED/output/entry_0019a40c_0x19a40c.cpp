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

// Function: entry_0019a40c
// Address: 0x19a40c - 0x19a458
void entry_0019a40c_0x19a40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a40c_0x19a40c");
#endif

    ctx->pc = 0x19a40cu;

    // 0x19a40c: 0x11200013  beqz        $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x19A40Cu;
    {
        const bool branch_taken_0x19a40c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A40Cu;
        // 0x19a410: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a40c) {
            ctx->pc = 0x19A45Cu;
            return;
        }
    }
    ctx->pc = 0x19A414u;
    // 0x19a414: 0x90e20020  lbu         $v0, 0x20($a3)
    ctx->pc = 0x19a414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x19a418: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x19a418u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x19a41c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a420: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19A420u;
    {
        const bool branch_taken_0x19a420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A420u;
        // 0x19a424: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a420) {
            ctx->pc = 0x19A45Cu;
            return;
        }
    }
    ctx->pc = 0x19A428u;
    // 0x19a428: 0x8ce3009c  lw          $v1, 0x9C($a3)
    ctx->pc = 0x19a428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x19a42c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a430: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A430u;
    {
        const bool branch_taken_0x19a430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A430u;
        // 0x19a434: 0x24e20030  addiu       $v0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a430) {
            ctx->pc = 0x19A458u;
            return;
        }
    }
    ctx->pc = 0x19A438u;
    // 0x19a438: 0xd9080000  lqc2        $vf8, 0x0($t0)
    ctx->pc = 0x19a438u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19a43c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x19a43cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a440: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x19a440u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19a444: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x19a444u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x19a448: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x19a448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x19a44c: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x19a44cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x19a450: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x19a450u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x19a454: 0xf9080000  sqc2        $vf8, 0x0($t0)
    ctx->pc = 0x19a454u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->pc = 0x19a458u;
}
