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

// Function: entry_00114710
// Address: 0x114710 - 0x114718
void entry_00114710_0x114710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114710_0x114710");
#endif

    ctx->pc = 0x114710u;

    // 0x114710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114710u;
    {
        const bool branch_taken_0x114710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114710u;
        // 0x114714: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114710) {
            ctx->pc = 0x114724u;
            return;
        }
    }
    ctx->pc = 0x114718u;
}
