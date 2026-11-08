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

// Function: entry_0012c07c
// Address: 0x12c07c - 0x12c088
void entry_0012c07c_0x12c07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c07c_0x12c07c");
#endif

    ctx->pc = 0x12c07cu;

    // 0x12c07c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x12c07cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12c080: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x12C080u;
    {
        const bool branch_taken_0x12c080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c080) {
            ctx->pc = 0x12C084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C080u;
            // 0x12c084: 0x8e030114  lw          $v1, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C040u;
            return;
        }
    }
    ctx->pc = 0x12C088u;
}
