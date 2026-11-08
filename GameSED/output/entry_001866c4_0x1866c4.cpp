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

// Function: entry_001866c4
// Address: 0x1866c4 - 0x1866d0
void entry_001866c4_0x1866c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001866c4_0x1866c4");
#endif

    ctx->pc = 0x1866c4u;

    // 0x1866c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1866C4u;
    {
        const bool branch_taken_0x1866c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866C4u;
        // 0x1866c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866c4) {
            ctx->pc = 0x186714u;
            return;
        }
    }
    ctx->pc = 0x1866CCu;
    // 0x1866cc: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1866ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x1866d0u;
}
