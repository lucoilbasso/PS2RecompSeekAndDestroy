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

// Function: entry_001332c8
// Address: 0x1332c8 - 0x1332d8
void entry_001332c8_0x1332c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001332c8_0x1332c8");
#endif

    ctx->pc = 0x1332c8u;

    // 0x1332c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1332C8u;
    {
        const bool branch_taken_0x1332c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1332c8) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x1332D0u;
    // 0x1332d0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1332D0u;
    {
        const bool branch_taken_0x1332d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1332D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1332D0u;
        // 0x1332d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1332d0) {
            ctx->pc = 0x133344u;
            return;
        }
    }
    ctx->pc = 0x1332D8u;
}
