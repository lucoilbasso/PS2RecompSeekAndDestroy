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

// Function: entry_001d1048
// Address: 0x1d1048 - 0x1d1050
void entry_001d1048_0x1d1048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1048_0x1d1048");
#endif

    ctx->pc = 0x1d1048u;

    // 0x1d1048: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1048u;
    {
        const bool branch_taken_0x1d1048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1048u;
        // 0x1d104c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1048) {
            ctx->pc = 0x1D1060u;
            return;
        }
    }
    ctx->pc = 0x1D1050u;
}
