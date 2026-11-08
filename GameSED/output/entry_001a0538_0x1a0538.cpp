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

// Function: entry_001a0538
// Address: 0x1a0538 - 0x1a0540
void entry_001a0538_0x1a0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0538_0x1a0538");
#endif

    ctx->pc = 0x1a0538u;

    // 0x1a0538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0538u;
    {
        const bool branch_taken_0x1a0538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0538u;
        // 0x1a053c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0538) {
            ctx->pc = 0x1A0548u;
            return;
        }
    }
    ctx->pc = 0x1A0540u;
}
