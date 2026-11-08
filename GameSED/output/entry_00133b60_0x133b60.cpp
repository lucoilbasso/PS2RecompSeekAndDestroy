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

// Function: entry_00133b60
// Address: 0x133b60 - 0x133b88
void entry_00133b60_0x133b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133b60_0x133b60");
#endif

    ctx->pc = 0x133b60u;

    // 0x133b60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x133b60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x133b64: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x133b64u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x133b68: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x133b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x133b6c: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x133b6cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x133b70: 0x4be5217f  vftoi15.xyzw $vf5, $vf4
    ctx->pc = 0x133b70u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(32768.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x133b74: 0x48302800  qmfc2.ni    $s0, $vf5
    ctx->pc = 0x133b74u;
    SET_GPR_VEC(ctx, 16, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x133b78: 0x108000  sll         $s0, $s0, 0
    ctx->pc = 0x133b78u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
    // 0x133b7c: 0x1000014a  b           . + 4 + (0x14A << 2)
    ctx->pc = 0x133B7Cu;
    {
        const bool branch_taken_0x133b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B7Cu;
        // 0x133b80: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b7c) {
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x133B84u;
    // 0x133b84: 0x0  nop
    ctx->pc = 0x133b84u;
    // NOP
    ctx->pc = 0x133b88u;
}
