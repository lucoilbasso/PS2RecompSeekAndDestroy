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

// Function: entry_00181518
// Address: 0x181518 - 0x181520
void entry_00181518_0x181518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181518_0x181518");
#endif

    ctx->pc = 0x181518u;

    // 0x181518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x181518u;
    {
        const bool branch_taken_0x181518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181518u;
        // 0x18151c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181518) {
            ctx->pc = 0x181524u;
            return;
        }
    }
    ctx->pc = 0x181520u;
}
