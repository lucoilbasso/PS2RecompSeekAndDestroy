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

// Function: entry_001b6844
// Address: 0x1b6844 - 0x1b6860
void entry_001b6844_0x1b6844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6844_0x1b6844");
#endif

    ctx->pc = 0x1b6844u;

    // 0x1b6844: 0x24e3b400  addiu       $v1, $a3, -0x4C00
    ctx->pc = 0x1b6844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947840));
    // 0x1b6848: 0xacf2b400  sw          $s2, -0x4C00($a3)
    ctx->pc = 0x1b6848u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294947840), GPR_U32(ctx, 18));
    // 0x1b684c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B684Cu;
    {
        const bool branch_taken_0x1b684c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B684Cu;
        // 0x1b6850: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b684c) {
            ctx->pc = 0x1B6860u;
            return;
        }
    }
    ctx->pc = 0x1B6854u;
    // 0x1b6854: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1b6854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6858: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B6858u;
    {
        const bool branch_taken_0x1b6858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6858u;
        // 0x1b685c: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6858) {
            ctx->pc = 0x1B6890u;
            return;
        }
    }
    ctx->pc = 0x1B6860u;
}
