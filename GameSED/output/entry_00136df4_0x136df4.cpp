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

// Function: entry_00136df4
// Address: 0x136df4 - 0x136dfc
void entry_00136df4_0x136df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136df4_0x136df4");
#endif

    ctx->pc = 0x136df4u;

    // 0x136df4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x136DF4u;
    {
        const bool branch_taken_0x136df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136df4) {
            ctx->pc = 0x136DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136DF4u;
            // 0x136df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136E08u;
            return;
        }
    }
    ctx->pc = 0x136DFCu;
}
