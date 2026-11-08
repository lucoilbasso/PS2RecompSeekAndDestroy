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

// Function: entry_001c10c4
// Address: 0x1c10c4 - 0x1c10cc
void entry_001c10c4_0x1c10c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c10c4_0x1c10c4");
#endif

    ctx->pc = 0x1c10c4u;

    // 0x1c10c4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1C10C4u;
    {
        const bool branch_taken_0x1c10c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10C4u;
        // 0x1c10c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10c4) {
            ctx->pc = 0x1C11E4u;
            return;
        }
    }
    ctx->pc = 0x1C10CCu;
}
