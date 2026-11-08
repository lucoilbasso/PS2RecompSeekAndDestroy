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

// Function: entry_0016aa40
// Address: 0x16aa40 - 0x16aa48
void entry_0016aa40_0x16aa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016aa40_0x16aa40");
#endif

    ctx->pc = 0x16aa40u;

    // 0x16aa40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16AA40u;
    {
        const bool branch_taken_0x16aa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA40u;
        // 0x16aa44: 0x26301218  addiu       $s0, $s1, 0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa40) {
            ctx->pc = 0x16AA4Cu;
            return;
        }
    }
    ctx->pc = 0x16AA48u;
}
