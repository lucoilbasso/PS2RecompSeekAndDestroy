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

// Function: entry_00110a10
// Address: 0x110a10 - 0x110a7c
void entry_00110a10_0x110a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110a10_0x110a10");
#endif

    ctx->pc = 0x110a10u;

    // 0x110a10: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x110A10u;
    {
        const bool branch_taken_0x110a10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A10u;
        // 0x110a14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a10) {
            ctx->pc = 0x110A7Cu;
            return;
        }
    }
    ctx->pc = 0x110A18u;
    // 0x110a18: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x110a18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110a1c: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x110a1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x110a20: 0x4a0002ff  vnop
    ctx->pc = 0x110a20u;
    // NOP operation, no action needed for VU0
    // 0x110a24: 0x4a0002ff  vnop
    ctx->pc = 0x110a24u;
    // NOP operation, no action needed for VU0
    // 0x110a28: 0x4a0002ff  vnop
    ctx->pc = 0x110a28u;
    // NOP operation, no action needed for VU0
    // 0x110a2c: 0x4a0002ff  vnop
    ctx->pc = 0x110a2cu;
    // NOP operation, no action needed for VU0
    // 0x110a30: 0x4a0002ff  vnop
    ctx->pc = 0x110a30u;
    // NOP operation, no action needed for VU0
    // 0x110a34: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x110a34u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x110a38: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x110a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x110a3c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x110a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x110a40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x110A40u;
    {
        const bool branch_taken_0x110a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A40u;
        // 0x110a44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a40) {
            ctx->pc = 0x110A7Cu;
            return;
        }
    }
    ctx->pc = 0x110A48u;
    // 0x110a48: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x110a48u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110a4c: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x110a4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x110a50: 0xdac50010  lqc2        $vf5, 0x10($s6)
    ctx->pc = 0x110a50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x110a54: 0xdac60020  lqc2        $vf6, 0x20($s6)
    ctx->pc = 0x110a54u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x110a58: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x110a58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x110a5c: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x110a5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x110a60: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x110a60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x110a64: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x110a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x110a68: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x110a68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x110a6c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x110a6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110a70: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x110a70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x110a74: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x110a74u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x110a78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x110a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x110a7cu;
}
