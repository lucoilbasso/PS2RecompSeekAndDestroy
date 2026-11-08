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

// Function: entry_001693b8
// Address: 0x1693b8 - 0x1693c0
void entry_001693b8_0x1693b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001693b8_0x1693b8");
#endif

    ctx->pc = 0x1693b8u;

    // 0x1693b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1693B8u;
    {
        const bool branch_taken_0x1693b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693B8u;
        // 0x1693bc: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693b8) {
            ctx->pc = 0x169440u;
            return;
        }
    }
    ctx->pc = 0x1693C0u;
}
