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

// Function: entry_00150268
// Address: 0x150268 - 0x150270
void entry_00150268_0x150268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150268_0x150268");
#endif

    ctx->pc = 0x150268u;

    // 0x150268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x150268u;
    {
        const bool branch_taken_0x150268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150268u;
        // 0x15026c: 0xae110840  sw          $s1, 0x840($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2112), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150268) {
            ctx->pc = 0x150278u;
            return;
        }
    }
    ctx->pc = 0x150270u;
}
