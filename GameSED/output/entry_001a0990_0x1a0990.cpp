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

// Function: entry_001a0990
// Address: 0x1a0990 - 0x1a09c0
void entry_001a0990_0x1a0990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0990_0x1a0990");
#endif

    ctx->pc = 0x1a0990u;

    // 0x1a0990: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x1a0990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x1a0994: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x1a0994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x1a0998: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1a0998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a099c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a09a0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1a09a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a09a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A09A4u;
    {
        const bool branch_taken_0x1a09a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09A4u;
        // 0x1a09a8: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09a4) {
            ctx->pc = 0x1A09F0u;
            return;
        }
    }
    ctx->pc = 0x1A09ACu;
    // 0x1a09ac: 0x2463f6a8  addiu       $v1, $v1, -0x958
    ctx->pc = 0x1a09acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964904));
    // 0x1a09b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a09b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A09B4u;
    {
        const bool branch_taken_0x1a09b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09B4u;
        // 0x1a09b8: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09b4) {
            ctx->pc = 0x1A0A30u;
            return;
        }
    }
    ctx->pc = 0x1A09BCu;
    // 0x1a09bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->pc = 0x1a09c0u;
}
