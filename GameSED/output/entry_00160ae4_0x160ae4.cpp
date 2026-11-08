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

// Function: entry_00160ae4
// Address: 0x160ae4 - 0x160af0
void entry_00160ae4_0x160ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ae4_0x160ae4");
#endif

    ctx->pc = 0x160ae4u;

    // 0x160ae4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x160AE4u;
    {
        const bool branch_taken_0x160ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160AE4u;
        // 0x160ae8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ae4) {
            ctx->pc = 0x160AF0u;
            return;
        }
    }
    ctx->pc = 0x160AECu;
    // 0x160aec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x160af0u;
}
