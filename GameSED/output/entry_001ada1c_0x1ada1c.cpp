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

// Function: entry_001ada1c
// Address: 0x1ada1c - 0x1ada24
void entry_001ada1c_0x1ada1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ada1c_0x1ada1c");
#endif

    ctx->pc = 0x1ada1cu;

    // 0x1ada1c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ADA1Cu;
    {
        const bool branch_taken_0x1ada1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ada1c) {
            ctx->pc = 0x1ADA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADA1Cu;
            // 0x1ada20: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADA24u;
            return;
        }
    }
    ctx->pc = 0x1ADA24u;
}
