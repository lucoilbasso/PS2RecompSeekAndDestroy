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

// Function: entry_00180824
// Address: 0x180824 - 0x180830
void entry_00180824_0x180824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00180824_0x180824");
#endif

    ctx->pc = 0x180824u;

    // 0x180824: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x180824u;
    {
        const bool branch_taken_0x180824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180824u;
        // 0x180828: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180824) {
            ctx->pc = 0x180834u;
            return;
        }
    }
    ctx->pc = 0x18082Cu;
    // 0x18082c: 0x0  nop
    ctx->pc = 0x18082cu;
    // NOP
    ctx->pc = 0x180830u;
}
