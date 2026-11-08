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

// Function: entry_0016648c
// Address: 0x16648c - 0x166498
void entry_0016648c_0x16648c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016648c_0x16648c");
#endif

    ctx->pc = 0x16648cu;

    // 0x16648c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x16648Cu;
    {
        const bool branch_taken_0x16648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16648Cu;
        // 0x166490: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16648c) {
            ctx->pc = 0x16659Cu;
            return;
        }
    }
    ctx->pc = 0x166494u;
    // 0x166494: 0x0  nop
    ctx->pc = 0x166494u;
    // NOP
    ctx->pc = 0x166498u;
}
