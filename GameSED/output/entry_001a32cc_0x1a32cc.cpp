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

// Function: entry_001a32cc
// Address: 0x1a32cc - 0x1a3330
void entry_001a32cc_0x1a32cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a32cc_0x1a32cc");
#endif

    ctx->pc = 0x1a32ccu;

    // 0x1a32cc: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1A32CCu;
    {
        const bool branch_taken_0x1a32cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a32cc) {
            ctx->pc = 0x1A33D8u;
            return;
        }
    }
    ctx->pc = 0x1A32D4u;
    // 0x1a32d4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1a32d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1a32d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a32d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a32dc: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1A32DCu;
    {
        const bool branch_taken_0x1a32dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A32DCu;
        // 0x1a32e0: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32dc) {
            ctx->pc = 0x1A33D8u;
            return;
        }
    }
    ctx->pc = 0x1A32E4u;
    // 0x1a32e4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1a32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a32e8: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1a32e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a32ec: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x1a32ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a32f0: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a32f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a32f4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1a32f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a32f8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a32f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a32fc: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a32fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a3300: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a3300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a3304: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1a3304u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3308: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1a3308u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a330c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1a330cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1a3310: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3310u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1a3314: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x1a3314u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a3318: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1a3318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a331c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a331cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1a3320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3320u;
    {
        const bool branch_taken_0x1a3320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3320u;
        // 0x1a3324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3320) {
            ctx->pc = 0x1A3330u;
            return;
        }
    }
    ctx->pc = 0x1A3328u;
    // 0x1a3328: 0x2c620011  sltiu       $v0, $v1, 0x11
    ctx->pc = 0x1a3328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1a332c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1a332cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x1a3330u;
}
