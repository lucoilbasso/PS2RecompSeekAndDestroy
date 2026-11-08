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

// Function: entry_00170040
// Address: 0x170040 - 0x170060
void entry_00170040_0x170040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170040_0x170040");
#endif

    ctx->pc = 0x170040u;

label_170040:
    // 0x170040: 0x0  nop
    ctx->pc = 0x170040u;
    // NOP
    // 0x170044: 0x0  nop
    ctx->pc = 0x170044u;
    // NOP
    // 0x170048: 0x0  nop
    ctx->pc = 0x170048u;
    // NOP
    // 0x17004c: 0x0  nop
    ctx->pc = 0x17004cu;
    // NOP
    // 0x170050: 0x0  nop
    ctx->pc = 0x170050u;
    // NOP
    // 0x170054: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x170054u;
    {
        const bool branch_taken_0x170054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170054) {
            ctx->pc = 0x170040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170040;
        }
    }
    ctx->pc = 0x17005Cu;
    // 0x17005c: 0x0  nop
    ctx->pc = 0x17005cu;
    // NOP
    ctx->pc = 0x170060u;
}
