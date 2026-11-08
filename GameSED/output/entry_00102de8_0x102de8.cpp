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

// Function: entry_00102de8
// Address: 0x102de8 - 0x102e08
void entry_00102de8_0x102de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102de8_0x102de8");
#endif

    ctx->pc = 0x102de8u;

    // 0x102de8: 0x0  nop
    ctx->pc = 0x102de8u;
    // NOP
    // 0x102dec: 0x0  nop
    ctx->pc = 0x102decu;
    // NOP
    // 0x102df0: 0x0  nop
    ctx->pc = 0x102df0u;
    // NOP
    // 0x102df4: 0x0  nop
    ctx->pc = 0x102df4u;
    // NOP
    // 0x102df8: 0x0  nop
    ctx->pc = 0x102df8u;
    // NOP
    // 0x102dfc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x102DFCu;
    {
        const bool branch_taken_0x102dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102DFCu;
        // 0x102e00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102dfc) {
            ctx->pc = 0x102DE0u;
            return;
        }
    }
    ctx->pc = 0x102E04u;
    // 0x102e04: 0x0  nop
    ctx->pc = 0x102e04u;
    // NOP
    ctx->pc = 0x102e08u;
}
