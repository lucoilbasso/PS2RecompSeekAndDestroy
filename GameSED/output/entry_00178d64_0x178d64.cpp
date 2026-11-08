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

// Function: entry_00178d64
// Address: 0x178d64 - 0x178d70
void entry_00178d64_0x178d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d64_0x178d64");
#endif

    ctx->pc = 0x178d64u;

    // 0x178d64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x178D64u;
    {
        const bool branch_taken_0x178d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D64u;
        // 0x178d68: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d64) {
            ctx->pc = 0x178D88u;
            return;
        }
    }
    ctx->pc = 0x178D6Cu;
    // 0x178d6c: 0x0  nop
    ctx->pc = 0x178d6cu;
    // NOP
    ctx->pc = 0x178d70u;
}
