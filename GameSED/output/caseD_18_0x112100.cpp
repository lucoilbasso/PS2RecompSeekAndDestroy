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

// Function: caseD_18
// Address: 0x112100 - 0x112108
void caseD_18_0x112100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_18_0x112100");
#endif

    ctx->pc = 0x112100u;

    // 0x112100: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112100u;
    {
        const bool branch_taken_0x112100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112100u;
        // 0x112104: 0x24110015  addiu       $s1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112100) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x112108u;
}
