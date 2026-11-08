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

// Function: entry_00137e70
// Address: 0x137e70 - 0x137e80
void entry_00137e70_0x137e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e70_0x137e70");
#endif

    ctx->pc = 0x137e70u;

    // 0x137e70: 0xaf888a1c  sw          $t0, -0x75E4($gp)
    ctx->pc = 0x137e70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 8));
    // 0x137e74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137E74u;
    {
        const bool branch_taken_0x137e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E74u;
        // 0x137e78: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e74) {
            ctx->pc = 0x137E84u;
            return;
        }
    }
    ctx->pc = 0x137E7Cu;
    // 0x137e7c: 0x0  nop
    ctx->pc = 0x137e7cu;
    // NOP
    ctx->pc = 0x137e80u;
}
