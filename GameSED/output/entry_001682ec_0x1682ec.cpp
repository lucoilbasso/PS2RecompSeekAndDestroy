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

// Function: entry_001682ec
// Address: 0x1682ec - 0x1682f8
void entry_001682ec_0x1682ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001682ec_0x1682ec");
#endif

    ctx->pc = 0x1682ecu;

    // 0x1682ec: 0x100002d8  b           . + 4 + (0x2D8 << 2)
    ctx->pc = 0x1682ECu;
    {
        const bool branch_taken_0x1682ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1682F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682ECu;
        // 0x1682f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1682ec) {
            ctx->pc = 0x168E50u;
            return;
        }
    }
    ctx->pc = 0x1682F4u;
    // 0x1682f4: 0x0  nop
    ctx->pc = 0x1682f4u;
    // NOP
    ctx->pc = 0x1682f8u;
}
