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

// Function: entry_0017ed50
// Address: 0x17ed50 - 0x17ed64
void entry_0017ed50_0x17ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ed50_0x17ed50");
#endif

    ctx->pc = 0x17ed50u;

    // 0x17ed50: 0x12c00031  beqz        $s6, . + 4 + (0x31 << 2)
    ctx->pc = 0x17ED50u;
    {
        const bool branch_taken_0x17ed50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED50u;
        // 0x17ed54: 0x1628c0  sll         $a1, $s6, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed50) {
            ctx->pc = 0x17EE18u;
            return;
        }
    }
    ctx->pc = 0x17ED58u;
    // 0x17ed58: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x17ED58u;
    {
        const bool branch_taken_0x17ed58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED58u;
        // 0x17ed5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed58) {
            ctx->pc = 0x17ED64u;
            return;
        }
    }
    ctx->pc = 0x17ED60u;
    // 0x17ed60: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x17ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x17ed64u;
}
