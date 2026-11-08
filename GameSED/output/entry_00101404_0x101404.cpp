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

// Function: entry_00101404
// Address: 0x101404 - 0x101418
void entry_00101404_0x101404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101404_0x101404");
#endif

    ctx->pc = 0x101404u;

    // 0x101404: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x101404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x101408: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x101408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10140c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10140cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x101410: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x101410u;
    {
        const bool branch_taken_0x101410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101410u;
        // 0x101414: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101410) {
            ctx->pc = 0x101438u;
            return;
        }
    }
    ctx->pc = 0x101418u;
}
