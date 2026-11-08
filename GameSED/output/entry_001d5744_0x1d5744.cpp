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

// Function: entry_001d5744
// Address: 0x1d5744 - 0x1d574c
void entry_001d5744_0x1d5744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5744_0x1d5744");
#endif

    ctx->pc = 0x1d5744u;

    // 0x1d5744: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5744u;
    {
        const bool branch_taken_0x1d5744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5744) {
            ctx->pc = 0x1D5748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5744u;
            // 0x1d5748: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5760u;
            return;
        }
    }
    ctx->pc = 0x1D574Cu;
}
