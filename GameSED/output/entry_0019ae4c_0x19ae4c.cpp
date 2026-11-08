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

// Function: entry_0019ae4c
// Address: 0x19ae4c - 0x19ae54
void entry_0019ae4c_0x19ae4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ae4c_0x19ae4c");
#endif

    ctx->pc = 0x19ae4cu;

    // 0x19ae4c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19AE4Cu;
    {
        const bool branch_taken_0x19ae4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE4Cu;
        // 0x19ae50: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae4c) {
            ctx->pc = 0x19AE28u;
            return;
        }
    }
    ctx->pc = 0x19AE54u;
}
