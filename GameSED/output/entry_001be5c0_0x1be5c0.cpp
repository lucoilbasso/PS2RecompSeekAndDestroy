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

// Function: entry_001be5c0
// Address: 0x1be5c0 - 0x1be5e8
void entry_001be5c0_0x1be5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be5c0_0x1be5c0");
#endif

    ctx->pc = 0x1be5c0u;

    // 0x1be5c0: 0xafc20130  sw          $v0, 0x130($fp)
    ctx->pc = 0x1be5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 304), GPR_U32(ctx, 2));
    // 0x1be5c4: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x1be5c4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1be5c8: 0x8fc2012c  lw          $v0, 0x12C($fp)
    ctx->pc = 0x1be5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 300)));
    // 0x1be5cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1be5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1be5d0: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x1be5d0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1be5d4: 0x16e30004  bne         $s7, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE5D4u;
    {
        const bool branch_taken_0x1be5d4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5D4u;
        // 0x1be5d8: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5d4) {
            ctx->pc = 0x1BE5E8u;
            return;
        }
    }
    ctx->pc = 0x1BE5DCu;
    // 0x1be5dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1be5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1be5e0: 0x12c2006d  beq         $s6, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1BE5E0u;
    {
        const bool branch_taken_0x1be5e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE5E0u;
        // 0x1be5e4: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be5e0) {
            ctx->pc = 0x1BE798u;
            return;
        }
    }
    ctx->pc = 0x1BE5E8u;
}
