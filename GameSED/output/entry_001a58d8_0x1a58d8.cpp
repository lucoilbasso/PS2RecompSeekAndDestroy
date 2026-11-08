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

// Function: entry_001a58d8
// Address: 0x1a58d8 - 0x1a5900
void entry_001a58d8_0x1a58d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a58d8_0x1a58d8");
#endif

    ctx->pc = 0x1a58d8u;

    // 0x1a58d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a58dc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a58e0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a58e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a58e4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a58e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a58e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a58ec: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A58ECu;
    {
        const bool branch_taken_0x1a58ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A58ECu;
        // 0x1a58f0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a58ec) {
            ctx->pc = 0x1A5994u;
            return;
        }
    }
    ctx->pc = 0x1A58F4u;
    // 0x1a58f4: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x1a58f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1a58f8: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x1a58f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x1a58fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1a5900u;
}
