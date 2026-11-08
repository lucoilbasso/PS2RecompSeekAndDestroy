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

// Function: entry_001a0408
// Address: 0x1a0408 - 0x1a0410
void entry_001a0408_0x1a0408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0408_0x1a0408");
#endif

    ctx->pc = 0x1a0408u;

    // 0x1a0408: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0408u;
    {
        const bool branch_taken_0x1a0408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0408u;
        // 0x1a040c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0408) {
            ctx->pc = 0x1A0418u;
            return;
        }
    }
    ctx->pc = 0x1A0410u;
}
