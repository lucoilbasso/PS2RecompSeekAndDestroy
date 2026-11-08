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

// Function: entry_001518a8
// Address: 0x1518a8 - 0x1518f4
void entry_001518a8_0x1518a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001518a8_0x1518a8");
#endif

    ctx->pc = 0x1518a8u;

    // 0x1518a8: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1518a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1518ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1518acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518b0: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1518b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x1518b4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1518b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1518b8: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1518b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1518bc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1518bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1518c0: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x1518c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1518c4: 0x8e4203b0  lw          $v0, 0x3B0($s2)
    ctx->pc = 0x1518c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
    // 0x1518c8: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x1518c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x1518cc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1518ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1518d0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1518d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1518d4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1518D4u;
    {
        const bool branch_taken_0x1518d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1518D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518D4u;
        // 0x1518d8: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518d4) {
            ctx->pc = 0x1518F4u;
            return;
        }
    }
    ctx->pc = 0x1518DCu;
    // 0x1518dc: 0x26420630  addiu       $v0, $s2, 0x630
    ctx->pc = 0x1518dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1584));
    // 0x1518e0: 0x26430820  addiu       $v1, $s2, 0x820
    ctx->pc = 0x1518e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2080));
    // 0x1518e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1518e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1518e8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1518e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1518ec: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1518ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1518f0: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1518f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x1518f4u;
}
