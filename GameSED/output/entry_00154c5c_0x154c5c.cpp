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

// Function: entry_00154c5c
// Address: 0x154c5c - 0x154c68
void entry_00154c5c_0x154c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154c5c_0x154c5c");
#endif

    ctx->pc = 0x154c5cu;

    // 0x154c5c: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x154C5Cu;
    {
        const bool branch_taken_0x154c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C5Cu;
        // 0x154c60: 0xae000684  sw          $zero, 0x684($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c5c) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154C64u;
    // 0x154c64: 0x0  nop
    ctx->pc = 0x154c64u;
    // NOP
    ctx->pc = 0x154c68u;
}
