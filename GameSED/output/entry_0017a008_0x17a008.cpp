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

// Function: entry_0017a008
// Address: 0x17a008 - 0x17a00c
void entry_0017a008_0x17a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a008_0x17a008");
#endif

    ctx->pc = 0x17a008u;

    // 0x17a008: 0x14a00037  bnez        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x17A008u;
    {
        const bool branch_taken_0x17a008 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a008) {
            ctx->pc = 0x17A0E8u;
            return;
        }
    }
    ctx->pc = 0x17A010u;
}
