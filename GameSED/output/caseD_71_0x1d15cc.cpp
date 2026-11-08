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

// Function: caseD_71
// Address: 0x1d15cc - 0x1d15d8
void caseD_71_0x1d15cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_71_0x1d15cc");
#endif

    ctx->pc = 0x1d15ccu;

    // 0x1d15cc: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x1D15CCu;
    {
        const bool branch_taken_0x1d15cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D15CCu;
        // 0x1d15d0: 0x36f70020  ori         $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d15cc) {
            ctx->pc = 0x1D145Cu;
            return;
        }
    }
    ctx->pc = 0x1D15D4u;
    // 0x1d15d4: 0x0  nop
    ctx->pc = 0x1d15d4u;
    // NOP
    ctx->pc = 0x1d15d8u;
}
