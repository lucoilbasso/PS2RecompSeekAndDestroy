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

// Function: entry_001a3258
// Address: 0x1a3258 - 0x1a32cc
void entry_001a3258_0x1a3258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3258_0x1a3258");
#endif

    ctx->pc = 0x1a3258u;

    // 0x1a3258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a325c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a325cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3260: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a3260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3264: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1a3264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3268: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1a3268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a326c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a326cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a3270: 0x4a0002ff  vnop
    ctx->pc = 0x1a3270u;
    // NOP operation, no action needed for VU0
    // 0x1a3274: 0x4a0002ff  vnop
    ctx->pc = 0x1a3274u;
    // NOP operation, no action needed for VU0
    // 0x1a3278: 0x4a0002ff  vnop
    ctx->pc = 0x1a3278u;
    // NOP operation, no action needed for VU0
    // 0x1a327c: 0x4a0002ff  vnop
    ctx->pc = 0x1a327cu;
    // NOP operation, no action needed for VU0
    // 0x1a3280: 0x4a0002ff  vnop
    ctx->pc = 0x1a3280u;
    // NOP operation, no action needed for VU0
    // 0x1a3284: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1a3284u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1a3288: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1a3288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1a328c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1a328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1a3290: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3290u;
    {
        const bool branch_taken_0x1a3290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3290) {
            ctx->pc = 0x1A3294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3290u;
            // 0x1a3294: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A32CCu;
            return;
        }
    }
    ctx->pc = 0x1A3298u;
    // 0x1a3298: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1a3298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1a329c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a329cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a32a0: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x1a32a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a32a4: 0x4a0002ff  vnop
    ctx->pc = 0x1a32a4u;
    // NOP operation, no action needed for VU0
    // 0x1a32a8: 0x4a0002ff  vnop
    ctx->pc = 0x1a32a8u;
    // NOP operation, no action needed for VU0
    // 0x1a32ac: 0x4a0002ff  vnop
    ctx->pc = 0x1a32acu;
    // NOP operation, no action needed for VU0
    // 0x1a32b0: 0x4a0002ff  vnop
    ctx->pc = 0x1a32b0u;
    // NOP operation, no action needed for VU0
    // 0x1a32b4: 0x4a0002ff  vnop
    ctx->pc = 0x1a32b4u;
    // NOP operation, no action needed for VU0
    // 0x1a32b8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x1a32b8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x1a32bc: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1a32bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1a32c0: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x1a32c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1a32c4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A32C4u;
    {
        const bool branch_taken_0x1a32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a32c4) {
            ctx->pc = 0x1A32C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A32C4u;
            // 0x1a32c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A32CCu;
            return;
        }
    }
    ctx->pc = 0x1A32CCu;
}
