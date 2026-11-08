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

// Function: entry_00127920
// Address: 0x127920 - 0x127938
void entry_00127920_0x127920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127920_0x127920");
#endif

    ctx->pc = 0x127920u;

    // 0x127920: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x127920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x127924: 0xaf8789d8  sw          $a3, -0x7628($gp)
    ctx->pc = 0x127924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 7));
    // 0x127928: 0xaf8089e4  sw          $zero, -0x761C($gp)
    ctx->pc = 0x127928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 0));
    // 0x12792c: 0xaf8089dc  sw          $zero, -0x7624($gp)
    ctx->pc = 0x12792cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 0));
    // 0x127930: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x127930u;
    {
        const bool branch_taken_0x127930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127930u;
        // 0x127934: 0xaf8089e0  sw          $zero, -0x7620($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127930) {
            ctx->pc = 0x1279B0u;
            return;
        }
    }
    ctx->pc = 0x127938u;
}
