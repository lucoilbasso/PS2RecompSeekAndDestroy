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

// Function: entry_00102738
// Address: 0x102738 - 0x102758
void entry_00102738_0x102738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102738_0x102738");
#endif

    ctx->pc = 0x102738u;

    // 0x102738: 0x0  nop
    ctx->pc = 0x102738u;
    // NOP
    // 0x10273c: 0x0  nop
    ctx->pc = 0x10273cu;
    // NOP
    // 0x102740: 0x0  nop
    ctx->pc = 0x102740u;
    // NOP
    // 0x102744: 0x0  nop
    ctx->pc = 0x102744u;
    // NOP
    // 0x102748: 0x0  nop
    ctx->pc = 0x102748u;
    // NOP
    // 0x10274c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x10274Cu;
    {
        const bool branch_taken_0x10274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10274Cu;
        // 0x102750: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10274c) {
            ctx->pc = 0x102730u;
            return;
        }
    }
    ctx->pc = 0x102754u;
    // 0x102754: 0x0  nop
    ctx->pc = 0x102754u;
    // NOP
    ctx->pc = 0x102758u;
}
