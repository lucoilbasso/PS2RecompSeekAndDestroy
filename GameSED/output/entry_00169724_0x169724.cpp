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

// Function: entry_00169724
// Address: 0x169724 - 0x169730
void entry_00169724_0x169724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169724_0x169724");
#endif

    ctx->pc = 0x169724u;

    // 0x169724: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x169724u;
    {
        const bool branch_taken_0x169724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169724u;
        // 0x169728: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169724) {
            ctx->pc = 0x1697B0u;
            return;
        }
    }
    ctx->pc = 0x16972Cu;
    // 0x16972c: 0x0  nop
    ctx->pc = 0x16972cu;
    // NOP
    ctx->pc = 0x169730u;
}
