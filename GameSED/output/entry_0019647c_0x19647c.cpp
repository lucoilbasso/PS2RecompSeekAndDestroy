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

// Function: entry_0019647c
// Address: 0x19647c - 0x196488
void entry_0019647c_0x19647c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019647c_0x19647c");
#endif

    ctx->pc = 0x19647cu;

    // 0x19647c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19647Cu;
    {
        const bool branch_taken_0x19647c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19647Cu;
        // 0x196480: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19647c) {
            ctx->pc = 0x196488u;
            return;
        }
    }
    ctx->pc = 0x196484u;
    // 0x196484: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x196484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x196488u;
}
