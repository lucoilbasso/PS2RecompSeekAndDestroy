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

// Function: entry_0017a548
// Address: 0x17a548 - 0x17a550
void entry_0017a548_0x17a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a548_0x17a548");
#endif

    ctx->pc = 0x17a548u;

    // 0x17a548: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x17A548u;
    {
        const bool branch_taken_0x17a548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a548) {
            ctx->pc = 0x17A540u;
            return;
        }
    }
    ctx->pc = 0x17A550u;
}
