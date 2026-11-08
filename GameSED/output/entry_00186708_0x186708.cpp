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

// Function: entry_00186708
// Address: 0x186708 - 0x186710
void entry_00186708_0x186708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186708_0x186708");
#endif

    ctx->pc = 0x186708u;

    // 0x186708: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x186708u;
    {
        const bool branch_taken_0x186708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x186708) {
            ctx->pc = 0x1866D0u;
            return;
        }
    }
    ctx->pc = 0x186710u;
}
