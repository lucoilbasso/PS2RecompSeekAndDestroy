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

// Function: entry_00149094
// Address: 0x149094 - 0x14909c
void entry_00149094_0x149094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149094_0x149094");
#endif

    ctx->pc = 0x149094u;

    // 0x149094: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149094u;
    {
        const bool branch_taken_0x149094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149094u;
        // 0x149098: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149094) {
            ctx->pc = 0x1490ACu;
            return;
        }
    }
    ctx->pc = 0x14909Cu;
}
