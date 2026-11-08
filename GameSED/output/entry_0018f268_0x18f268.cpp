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

// Function: entry_0018f268
// Address: 0x18f268 - 0x18f278
void entry_0018f268_0x18f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f268_0x18f268");
#endif

    ctx->pc = 0x18f268u;

    // 0x18f268: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18f26c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18F26Cu;
    {
        const bool branch_taken_0x18f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F26Cu;
        // 0x18f270: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f26c) {
            ctx->pc = 0x18F27Cu;
            return;
        }
    }
    ctx->pc = 0x18F274u;
    // 0x18f274: 0x0  nop
    ctx->pc = 0x18f274u;
    // NOP
    ctx->pc = 0x18f278u;
}
