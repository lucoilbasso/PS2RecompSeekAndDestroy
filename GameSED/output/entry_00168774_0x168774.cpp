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

// Function: entry_00168774
// Address: 0x168774 - 0x168780
void entry_00168774_0x168774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168774_0x168774");
#endif

    ctx->pc = 0x168774u;

    // 0x168774: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x168774u;
    {
        const bool branch_taken_0x168774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168774u;
        // 0x168778: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168774) {
            ctx->pc = 0x168E50u;
            return;
        }
    }
    ctx->pc = 0x16877Cu;
    // 0x16877c: 0x0  nop
    ctx->pc = 0x16877cu;
    // NOP
    ctx->pc = 0x168780u;
}
