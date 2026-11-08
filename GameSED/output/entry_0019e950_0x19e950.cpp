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

// Function: entry_0019e950
// Address: 0x19e950 - 0x19e958
void entry_0019e950_0x19e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e950_0x19e950");
#endif

    ctx->pc = 0x19e950u;

    // 0x19e950: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19E950u;
    {
        const bool branch_taken_0x19e950 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e950) {
            ctx->pc = 0x19E970u;
            return;
        }
    }
    ctx->pc = 0x19E958u;
}
