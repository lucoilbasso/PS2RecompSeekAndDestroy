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

// Function: entry_0014cf38
// Address: 0x14cf38 - 0x14cf40
void entry_0014cf38_0x14cf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cf38_0x14cf38");
#endif

    ctx->pc = 0x14cf38u;

    // 0x14cf38: 0x504a0001  beql        $v0, $t2, . + 4 + (0x1 << 2)
    ctx->pc = 0x14CF38u;
    {
        const bool branch_taken_0x14cf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x14cf38) {
            ctx->pc = 0x14CF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CF38u;
            // 0x14cf3c: 0xace001f4  sw          $zero, 0x1F4($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 500), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CF40u;
            return;
        }
    }
    ctx->pc = 0x14CF40u;
}
