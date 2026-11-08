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

// Function: entry_0010834c
// Address: 0x10834c - 0x108358
void entry_0010834c_0x10834c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010834c_0x10834c");
#endif

    ctx->pc = 0x10834cu;

    // 0x10834c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x10834Cu;
    {
        const bool branch_taken_0x10834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10834Cu;
        // 0x108350: 0xac600014  sw          $zero, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10834c) {
            ctx->pc = 0x1084D8u;
            return;
        }
    }
    ctx->pc = 0x108354u;
    // 0x108354: 0x0  nop
    ctx->pc = 0x108354u;
    // NOP
    ctx->pc = 0x108358u;
}
