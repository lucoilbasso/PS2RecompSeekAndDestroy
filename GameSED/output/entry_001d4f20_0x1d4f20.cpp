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

// Function: entry_001d4f20
// Address: 0x1d4f20 - 0x1d4f30
void entry_001d4f20_0x1d4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f20_0x1d4f20");
#endif

    ctx->pc = 0x1d4f20u;

    // 0x1d4f20: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1d4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1d4f24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4F24u;
    {
        const bool branch_taken_0x1d4f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F24u;
        // 0x1d4f28: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f24) {
            ctx->pc = 0x1D4F34u;
            return;
        }
    }
    ctx->pc = 0x1D4F2Cu;
    // 0x1d4f2c: 0x0  nop
    ctx->pc = 0x1d4f2cu;
    // NOP
    ctx->pc = 0x1d4f30u;
}
