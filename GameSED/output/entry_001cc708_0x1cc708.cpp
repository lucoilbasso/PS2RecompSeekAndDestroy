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

// Function: entry_001cc708
// Address: 0x1cc708 - 0x1cc710
void entry_001cc708_0x1cc708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc708_0x1cc708");
#endif

    ctx->pc = 0x1cc708u;

    // 0x1cc708: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC708u;
    {
        const bool branch_taken_0x1cc708 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc708) {
            ctx->pc = 0x1CC718u;
            return;
        }
    }
    ctx->pc = 0x1CC710u;
}
