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

// Function: entry_00110af8
// Address: 0x110af8 - 0x110b50
void entry_00110af8_0x110af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110af8_0x110af8");
#endif

    ctx->pc = 0x110af8u;

    // 0x110af8: 0x50c0001a  beql        $a2, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x110AF8u;
    {
        const bool branch_taken_0x110af8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x110af8) {
            ctx->pc = 0x110AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110AF8u;
            // 0x110afc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110B64u;
            return;
        }
    }
    ctx->pc = 0x110B00u;
    // 0x110b00: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x110b00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110b04: 0x4bc00868  vadd.xyz    $vf1, $vf1, $vf0
    ctx->pc = 0x110b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x110b08: 0x4a0002ff  vnop
    ctx->pc = 0x110b08u;
    // NOP operation, no action needed for VU0
    // 0x110b0c: 0x4a0002ff  vnop
    ctx->pc = 0x110b0cu;
    // NOP operation, no action needed for VU0
    // 0x110b10: 0x4a0002ff  vnop
    ctx->pc = 0x110b10u;
    // NOP operation, no action needed for VU0
    // 0x110b14: 0x4a0002ff  vnop
    ctx->pc = 0x110b14u;
    // NOP operation, no action needed for VU0
    // 0x110b18: 0x4a0002ff  vnop
    ctx->pc = 0x110b18u;
    // NOP operation, no action needed for VU0
    // 0x110b1c: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x110b1cu;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x110b20: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x110b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x110b24: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x110b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x110b28: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x110B28u;
    {
        const bool branch_taken_0x110b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x110b28) {
            ctx->pc = 0x110B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110B28u;
            // 0x110b2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110B64u;
            return;
        }
    }
    ctx->pc = 0x110B30u;
    // 0x110b30: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x110b30u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110b34: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x110b34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x110b38: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x110b38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x110b3c: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x110b3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x110b40: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x110b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x110b44: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x110b44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x110b48: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x110b48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x110b4c: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x110b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    ctx->pc = 0x110b50u;
}
