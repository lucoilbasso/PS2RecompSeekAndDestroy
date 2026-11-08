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

// Function: entry_00186950
// Address: 0x186950 - 0x186958
void entry_00186950_0x186950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186950_0x186950");
#endif

    ctx->pc = 0x186950u;

    // 0x186950: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x186950u;
    {
        const bool branch_taken_0x186950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186950u;
        // 0x186954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186950) {
            ctx->pc = 0x18695Cu;
            return;
        }
    }
    ctx->pc = 0x186958u;
}
