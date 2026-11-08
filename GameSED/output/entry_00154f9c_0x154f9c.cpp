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

// Function: entry_00154f9c
// Address: 0x154f9c - 0x154fa8
void entry_00154f9c_0x154f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154f9c_0x154f9c");
#endif

    ctx->pc = 0x154f9cu;

    // 0x154f9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x154f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x154fa0: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x154FA0u;
    {
        const bool branch_taken_0x154fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154FA0u;
        // 0x154fa4: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154fa0) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154FA8u;
}
