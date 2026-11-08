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

// Function: entry_00142650
// Address: 0x142650 - 0x142658
void entry_00142650_0x142650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142650_0x142650");
#endif

    ctx->pc = 0x142650u;

    // 0x142650: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142650u;
    {
        const bool branch_taken_0x142650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142650u;
        // 0x142654: 0xac700194  sw          $s0, 0x194($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 404), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142650) {
            ctx->pc = 0x142660u;
            return;
        }
    }
    ctx->pc = 0x142658u;
}
