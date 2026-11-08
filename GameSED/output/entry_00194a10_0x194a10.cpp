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

// Function: entry_00194a10
// Address: 0x194a10 - 0x194a40
void entry_00194a10_0x194a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194a10_0x194a10");
#endif

    ctx->pc = 0x194a10u;

    // 0x194a10: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x194A10u;
    {
        const bool branch_taken_0x194a10 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x194A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A10u;
        // 0x194a14: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a10) {
            ctx->pc = 0x194A40u;
            return;
        }
    }
    ctx->pc = 0x194A18u;
    // 0x194a18: 0x26230110  addiu       $v1, $s1, 0x110
    ctx->pc = 0x194a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x194a1c: 0x2442ecb0  addiu       $v0, $v0, -0x1350
    ctx->pc = 0x194a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x194a20: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x194a20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194a24: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x194a24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x194a28: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x194a28u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x194a2c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x194a2cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x194a30: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x194a30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x194a34: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x194a34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194a38: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x194a38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194a3c: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x194a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    ctx->pc = 0x194a40u;
}
