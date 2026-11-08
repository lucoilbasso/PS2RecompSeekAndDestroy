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

// Function: entry_0012e0b8
// Address: 0x12e0b8 - 0x12e0ec
void entry_0012e0b8_0x12e0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e0b8_0x12e0b8");
#endif

    ctx->pc = 0x12e0b8u;

    // 0x12e0b8: 0x5447000d  bnel        $v0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x12E0B8u;
    {
        const bool branch_taken_0x12e0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x12e0b8) {
            ctx->pc = 0x12E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E0B8u;
            // 0x12e0bc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E0F0u;
            return;
        }
    }
    ctx->pc = 0x12E0C0u;
    // 0x12e0c0: 0x24c40090  addiu       $a0, $a2, 0x90
    ctx->pc = 0x12e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x12e0c4: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x12e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x12e0c8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12e0c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12e0cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12e0ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12e0d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12e0d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12e0d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x12e0d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12e0d8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x12e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12e0dc: 0x8ce50114  lw          $a1, 0x114($a3)
    ctx->pc = 0x12e0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 276)));
    // 0x12e0e0: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x12e0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x12e0e4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12e0e8: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x12e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
    ctx->pc = 0x12e0ecu;
}
