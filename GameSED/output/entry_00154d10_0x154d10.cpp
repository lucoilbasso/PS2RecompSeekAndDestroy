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

// Function: entry_00154d10
// Address: 0x154d10 - 0x154d18
void entry_00154d10_0x154d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154d10_0x154d10");
#endif

    ctx->pc = 0x154d10u;

    // 0x154d10: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x154D10u;
    {
        const bool branch_taken_0x154d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D10u;
        // 0x154d14: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d10) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154D18u;
}
