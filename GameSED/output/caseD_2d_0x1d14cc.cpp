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

// Function: caseD_2d
// Address: 0x1d14cc - 0x1d14d8
void caseD_2d_0x1d14cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2d_0x1d14cc");
#endif

    ctx->pc = 0x1d14ccu;

    // 0x1d14cc: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D14CCu;
    {
        const bool branch_taken_0x1d14cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D14D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D14CCu;
        // 0x1d14d0: 0x36f70004  ori         $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d14cc) {
            ctx->pc = 0x1D145Cu;
            return;
        }
    }
    ctx->pc = 0x1D14D4u;
    // 0x1d14d4: 0x0  nop
    ctx->pc = 0x1d14d4u;
    // NOP
    ctx->pc = 0x1d14d8u;
}
