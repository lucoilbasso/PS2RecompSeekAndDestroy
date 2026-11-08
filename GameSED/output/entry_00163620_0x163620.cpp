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

// Function: entry_00163620
// Address: 0x163620 - 0x163628
void entry_00163620_0x163620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163620_0x163620");
#endif

    ctx->pc = 0x163620u;

    // 0x163620: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x163620u;
    {
        const bool branch_taken_0x163620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163620u;
        // 0x163624: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163620) {
            ctx->pc = 0x1638CCu;
            return;
        }
    }
    ctx->pc = 0x163628u;
}
