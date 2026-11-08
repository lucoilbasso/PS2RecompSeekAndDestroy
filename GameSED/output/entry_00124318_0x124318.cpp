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

// Function: entry_00124318
// Address: 0x124318 - 0x124324
void entry_00124318_0x124318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124318_0x124318");
#endif

    ctx->pc = 0x124318u;

    // 0x124318: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x124318u;
    {
        const bool branch_taken_0x124318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124318u;
        // 0x12431c: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124318) {
            ctx->pc = 0x124324u;
            return;
        }
    }
    ctx->pc = 0x124320u;
    // 0x124320: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x124320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    ctx->pc = 0x124324u;
}
