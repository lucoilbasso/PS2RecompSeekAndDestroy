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

// Function: entry_00131f5c
// Address: 0x131f5c - 0x131f64
void entry_00131f5c_0x131f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131f5c_0x131f5c");
#endif

    ctx->pc = 0x131f5cu;

    // 0x131f5c: 0x54a0fff0  bnel        $a1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x131F5Cu;
    {
        const bool branch_taken_0x131f5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f5c) {
            ctx->pc = 0x131F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131F5Cu;
            // 0x131f60: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131F20u;
            return;
        }
    }
    ctx->pc = 0x131F64u;
}
