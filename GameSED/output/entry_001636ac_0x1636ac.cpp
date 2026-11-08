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

// Function: entry_001636ac
// Address: 0x1636ac - 0x1636b8
void entry_001636ac_0x1636ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001636ac_0x1636ac");
#endif

    ctx->pc = 0x1636acu;

    // 0x1636ac: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1636ACu;
    {
        const bool branch_taken_0x1636ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1636B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636ACu;
        // 0x1636b0: 0xae510274  sw          $s1, 0x274($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636ac) {
            ctx->pc = 0x1638CCu;
            return;
        }
    }
    ctx->pc = 0x1636B4u;
    // 0x1636b4: 0x0  nop
    ctx->pc = 0x1636b4u;
    // NOP
    ctx->pc = 0x1636b8u;
}
