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

// Function: entry_001d5a8c
// Address: 0x1d5a8c - 0x1d5a94
void entry_001d5a8c_0x1d5a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5a8c_0x1d5a8c");
#endif

    ctx->pc = 0x1d5a8cu;

    // 0x1d5a8c: 0x5620ffea  bnel        $s1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D5A8Cu;
    {
        const bool branch_taken_0x1d5a8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a8c) {
            ctx->pc = 0x1D5A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5A8Cu;
            // 0x1d5a90: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5A38u;
            return;
        }
    }
    ctx->pc = 0x1D5A94u;
}
