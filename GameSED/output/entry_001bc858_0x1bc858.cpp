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

// Function: entry_001bc858
// Address: 0x1bc858 - 0x1bc878
void entry_001bc858_0x1bc858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc858_0x1bc858");
#endif

    ctx->pc = 0x1bc858u;

    // 0x1bc858: 0x10eb0011  beq         $a3, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BC858u;
    {
        const bool branch_taken_0x1bc858 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x1BC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC858u;
        // 0x1bc85c: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc858) {
            ctx->pc = 0x1BC8A0u;
            return;
        }
    }
    ctx->pc = 0x1BC860u;
    // 0x1bc860: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC860u;
    {
        const bool branch_taken_0x1bc860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc860) {
            ctx->pc = 0x1BC878u;
            return;
        }
    }
    ctx->pc = 0x1BC868u;
    // 0x1bc868: 0x50f70028  beql        $a3, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BC868u;
    {
        const bool branch_taken_0x1bc868 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        if (branch_taken_0x1bc868) {
            ctx->pc = 0x1BC86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC868u;
            // 0x1bc86c: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC90Cu;
            return;
        }
    }
    ctx->pc = 0x1BC870u;
    // 0x1bc870: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1BC870u;
    {
        const bool branch_taken_0x1bc870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC870u;
        // 0x1bc874: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc870) {
            ctx->pc = 0x1BC964u;
            return;
        }
    }
    ctx->pc = 0x1BC878u;
}
