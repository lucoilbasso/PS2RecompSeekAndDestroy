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

// Function: entry_001b9510
// Address: 0x1b9510 - 0x1b951c
void entry_001b9510_0x1b9510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9510_0x1b9510");
#endif

    ctx->pc = 0x1b9510u;

    // 0x1b9510: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b9510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b9514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9514u;
    {
        const bool branch_taken_0x1b9514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9514u;
        // 0x1b9518: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9514) {
            ctx->pc = 0x1B9528u;
            return;
        }
    }
    ctx->pc = 0x1B951Cu;
}
