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

// Function: entry_0013ad3c
// Address: 0x13ad3c - 0x13ad44
void entry_0013ad3c_0x13ad3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ad3c_0x13ad3c");
#endif

    ctx->pc = 0x13ad3cu;

    // 0x13ad3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13AD3Cu;
    {
        const bool branch_taken_0x13ad3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AD3Cu;
        // 0x13ad40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ad3c) {
            ctx->pc = 0x13AD4Cu;
            return;
        }
    }
    ctx->pc = 0x13AD44u;
}
