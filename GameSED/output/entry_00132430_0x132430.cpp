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

// Function: entry_00132430
// Address: 0x132430 - 0x132438
void entry_00132430_0x132430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132430_0x132430");
#endif

    ctx->pc = 0x132430u;

    // 0x132430: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x132430u;
    {
        const bool branch_taken_0x132430 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x132430) {
            ctx->pc = 0x132440u;
            return;
        }
    }
    ctx->pc = 0x132438u;
}
