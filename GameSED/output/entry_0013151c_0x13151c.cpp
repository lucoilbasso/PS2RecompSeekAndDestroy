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

// Function: entry_0013151c
// Address: 0x13151c - 0x131524
void entry_0013151c_0x13151c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013151c_0x13151c");
#endif

    ctx->pc = 0x13151cu;

    // 0x13151c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13151Cu;
    {
        const bool branch_taken_0x13151c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13151c) {
            ctx->pc = 0x131520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13151Cu;
            // 0x131520: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131508u;
            return;
        }
    }
    ctx->pc = 0x131524u;
}
