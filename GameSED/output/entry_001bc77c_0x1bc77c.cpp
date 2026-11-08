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

// Function: entry_001bc77c
// Address: 0x1bc77c - 0x1bc784
void entry_001bc77c_0x1bc77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc77c_0x1bc77c");
#endif

    ctx->pc = 0x1bc77cu;

    // 0x1bc77c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC77Cu;
    {
        const bool branch_taken_0x1bc77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC77Cu;
        // 0x1bc780: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc77c) {
            ctx->pc = 0x1BC788u;
            return;
        }
    }
    ctx->pc = 0x1BC784u;
}
