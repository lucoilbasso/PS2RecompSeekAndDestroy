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

// Function: entry_001128e4
// Address: 0x1128e4 - 0x1128f0
void entry_001128e4_0x1128e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001128e4_0x1128e4");
#endif

    ctx->pc = 0x1128e4u;

    // 0x1128e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1128E4u;
    {
        const bool branch_taken_0x1128e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128E4u;
        // 0x1128e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128e4) {
            ctx->pc = 0x1128F4u;
            return;
        }
    }
    ctx->pc = 0x1128ECu;
    // 0x1128ec: 0x0  nop
    ctx->pc = 0x1128ecu;
    // NOP
    ctx->pc = 0x1128f0u;
}
