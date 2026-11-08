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

// Function: entry_001b8538
// Address: 0x1b8538 - 0x1b8540
void entry_001b8538_0x1b8538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8538_0x1b8538");
#endif

    ctx->pc = 0x1b8538u;

    // 0x1b8538: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B8538u;
    {
        const bool branch_taken_0x1b8538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8538u;
        // 0x1b853c: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8538) {
            ctx->pc = 0x1B8518u;
            return;
        }
    }
    ctx->pc = 0x1B8540u;
}
