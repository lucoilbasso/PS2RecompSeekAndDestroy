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

// Function: entry_001c1198
// Address: 0x1c1198 - 0x1c11a4
void entry_001c1198_0x1c1198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1198_0x1c1198");
#endif

    ctx->pc = 0x1c1198u;

    // 0x1c1198: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x1c1198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x1c119c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C119Cu;
    {
        const bool branch_taken_0x1c119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C119Cu;
        // 0x1c11a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c119c) {
            ctx->pc = 0x1C11E4u;
            return;
        }
    }
    ctx->pc = 0x1C11A4u;
}
