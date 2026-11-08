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

// Function: entry_0013267c
// Address: 0x13267c - 0x132684
void entry_0013267c_0x13267c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013267c_0x13267c");
#endif

    ctx->pc = 0x13267cu;

    // 0x13267c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13267Cu;
    {
        const bool branch_taken_0x13267c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13267Cu;
        // 0x132680: 0x24430160  addiu       $v1, $v0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13267c) {
            ctx->pc = 0x132690u;
            return;
        }
    }
    ctx->pc = 0x132684u;
}
