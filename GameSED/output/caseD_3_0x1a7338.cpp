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

// Function: caseD_3
// Address: 0x1a7338 - 0x1a7348
void caseD_3_0x1a7338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1a7338");
#endif

    ctx->pc = 0x1a7338u;

    // 0x1a7338: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x1a7338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a733c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A733Cu;
    {
        const bool branch_taken_0x1a733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A733Cu;
        // 0x1a7340: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a733c) {
            ctx->pc = 0x1A7370u;
            return;
        }
    }
    ctx->pc = 0x1A7344u;
    // 0x1a7344: 0x0  nop
    ctx->pc = 0x1a7344u;
    // NOP
    ctx->pc = 0x1a7348u;
}
