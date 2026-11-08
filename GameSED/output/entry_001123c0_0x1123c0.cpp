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

// Function: entry_001123c0
// Address: 0x1123c0 - 0x1123e0
void entry_001123c0_0x1123c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001123c0_0x1123c0");
#endif

    ctx->pc = 0x1123c0u;

    // 0x1123c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1123c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1123c4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x1123c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1123c8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1123C8u;
    {
        const bool branch_taken_0x1123c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1123CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123C8u;
        // 0x1123cc: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123c8) {
            ctx->pc = 0x1123E0u;
            return;
        }
    }
    ctx->pc = 0x1123D0u;
    // 0x1123d0: 0x8e2301b4  lw          $v1, 0x1B4($s1)
    ctx->pc = 0x1123d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x1123d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1123D4u;
    {
        const bool branch_taken_0x1123d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123D4u;
        // 0x1123d8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123d4) {
            ctx->pc = 0x1123E4u;
            return;
        }
    }
    ctx->pc = 0x1123DCu;
    // 0x1123dc: 0x0  nop
    ctx->pc = 0x1123dcu;
    // NOP
    ctx->pc = 0x1123e0u;
}
