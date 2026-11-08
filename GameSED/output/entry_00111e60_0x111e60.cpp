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

// Function: entry_00111e60
// Address: 0x111e60 - 0x111e68
void entry_00111e60_0x111e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111e60_0x111e60");
#endif

    ctx->pc = 0x111e60u;

    // 0x111e60: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x111E60u;
    {
        const bool branch_taken_0x111e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E60u;
        // 0x111e64: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e60) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111E68u;
}
