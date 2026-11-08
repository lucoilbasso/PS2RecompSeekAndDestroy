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

// Function: entry_0015192c
// Address: 0x15192c - 0x151968
void entry_0015192c_0x15192c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015192c_0x15192c");
#endif

    ctx->pc = 0x15192cu;

    // 0x15192c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x15192cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151930: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x151930u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151934: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151938: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151938u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15193c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x15193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x151940: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x151940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x151944: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x151944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x151948: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x151948u;
    {
        const bool branch_taken_0x151948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151948u;
        // 0x15194c: 0x8f8288cc  lw          $v0, -0x7734($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151948) {
            ctx->pc = 0x151968u;
            return;
        }
    }
    ctx->pc = 0x151950u;
    // 0x151950: 0x264200c0  addiu       $v0, $s2, 0xC0
    ctx->pc = 0x151950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x151954: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151954u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x151958: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x151958u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15195c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15195cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151960: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x151960u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151964: 0x8f8288cc  lw          $v0, -0x7734($gp)
    ctx->pc = 0x151964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936780)));
    ctx->pc = 0x151968u;
}
