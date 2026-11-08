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

// Function: entry_001cc588
// Address: 0x1cc588 - 0x1cc598
void entry_001cc588_0x1cc588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc588_0x1cc588");
#endif

    ctx->pc = 0x1cc588u;

    // 0x1cc588: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1cc588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1cc58c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x1cc58cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x1cc590: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x1CC590u;
    {
        const bool branch_taken_0x1cc590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC590u;
        // 0x1cc594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc590) {
            ctx->pc = 0x1CC8D0u;
            return;
        }
    }
    ctx->pc = 0x1CC598u;
}
