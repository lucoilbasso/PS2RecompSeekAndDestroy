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

// Function: entry_00173a84
// Address: 0x173a84 - 0x173a98
void entry_00173a84_0x173a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173a84_0x173a84");
#endif

    ctx->pc = 0x173a84u;

    // 0x173a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173a88: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x173a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x173a8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x173a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x173a90: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x173A90u;
    {
        const bool branch_taken_0x173a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173a90) {
            ctx->pc = 0x173A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173A90u;
            // 0x173a94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x173A98u;
            return;
        }
    }
    ctx->pc = 0x173A98u;
}
