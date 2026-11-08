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

// Function: entry_0014fef4
// Address: 0x14fef4 - 0x14ff30
void entry_0014fef4_0x14fef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fef4_0x14fef4");
#endif

    ctx->pc = 0x14fef4u;

    // 0x14fef4: 0x52200023  beql        $s1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x14FEF4u;
    {
        const bool branch_taken_0x14fef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fef4) {
            ctx->pc = 0x14FEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FEF4u;
            // 0x14fef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF84u;
            return;
        }
    }
    ctx->pc = 0x14FEFCu;
    // 0x14fefc: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x14fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x14ff00: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14ff00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x14ff04: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x14FF04u;
    {
        const bool branch_taken_0x14ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ff04) {
            ctx->pc = 0x14FF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FF04u;
            // 0x14ff08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FF84u;
            return;
        }
    }
    ctx->pc = 0x14FF0Cu;
    // 0x14ff0c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x14ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x14ff10: 0x26020820  addiu       $v0, $s0, 0x820
    ctx->pc = 0x14ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x14ff14: 0x24639b70  addiu       $v1, $v1, -0x6490
    ctx->pc = 0x14ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x14ff18: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x14ff18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14ff1c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x14ff1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(FAST_READ128(0x209B70u));
    // 0x14ff20: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x14ff20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x14ff24: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x14ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14ff28: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14FF28u;
    {
        const bool branch_taken_0x14ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF28u;
        // 0x14ff2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ff28) {
            ctx->pc = 0x14FF84u;
            return;
        }
    }
    ctx->pc = 0x14FF30u;
}
