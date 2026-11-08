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

// Function: entry_0019e454
// Address: 0x19e454 - 0x19e45c
void entry_0019e454_0x19e454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e454_0x19e454");
#endif

    ctx->pc = 0x19e454u;

    // 0x19e454: 0x15400004  bnez        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E454u;
    {
        const bool branch_taken_0x19e454 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e454) {
            ctx->pc = 0x19E468u;
            return;
        }
    }
    ctx->pc = 0x19E45Cu;
}
