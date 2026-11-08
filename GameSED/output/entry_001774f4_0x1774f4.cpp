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

// Function: entry_001774f4
// Address: 0x1774f4 - 0x177500
void entry_001774f4_0x1774f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001774f4_0x1774f4");
#endif

    ctx->pc = 0x1774f4u;

    // 0x1774f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1774F4u;
    {
        const bool branch_taken_0x1774f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1774F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774F4u;
        // 0x1774f8: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1774f4) {
            ctx->pc = 0x177518u;
            return;
        }
    }
    ctx->pc = 0x1774FCu;
    // 0x1774fc: 0x0  nop
    ctx->pc = 0x1774fcu;
    // NOP
    ctx->pc = 0x177500u;
}
