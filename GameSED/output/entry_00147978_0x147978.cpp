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

// Function: entry_00147978
// Address: 0x147978 - 0x1479dc
void entry_00147978_0x147978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147978_0x147978");
#endif

    ctx->pc = 0x147978u;

    // 0x147978: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x147978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14797c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x14797cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x147980: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x147980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147984: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x147984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147988: 0xfc4c0008  sd          $t4, 0x8($v0)
    ctx->pc = 0x147988u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 12));
    // 0x14798c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x14798cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x147990: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x147990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x147994: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x147994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x147998: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x147998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14799c: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x14799cu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1479a0: 0xf9620000  sqc2        $vf2, 0x0($t3)
    ctx->pc = 0x1479a0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1479a4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x1479a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1479a8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1479a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1479ac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1479acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1479b0: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x1479b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x1479b4: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x1479b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x1479b8: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x1479b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x1479bc: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x1479bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1479c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1479C0u;
    {
        const bool branch_taken_0x1479c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1479C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479C0u;
        // 0x1479c4: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479c0) {
            ctx->pc = 0x1479DCu;
            return;
        }
    }
    ctx->pc = 0x1479C8u;
    // 0x1479c8: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x1479c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1479cc: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x1479ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x1479d0: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x1479d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1479d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1479D4u;
    {
        const bool branch_taken_0x1479d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1479D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1479D4u;
        // 0x1479d8: 0xed1024  and         $v0, $a3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479d4) {
            ctx->pc = 0x1479E8u;
            return;
        }
    }
    ctx->pc = 0x1479DCu;
}
