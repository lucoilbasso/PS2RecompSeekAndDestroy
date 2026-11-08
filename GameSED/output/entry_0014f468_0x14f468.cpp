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

// Function: entry_0014f468
// Address: 0x14f468 - 0x14f478
void entry_0014f468_0x14f468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f468_0x14f468");
#endif

    ctx->pc = 0x14f468u;

    // 0x14f468: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x14f468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x14f46c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x14f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x14f470: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14F470u;
    {
        const bool branch_taken_0x14f470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F470u;
        // 0x14f474: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f470) {
            ctx->pc = 0x14F4ACu;
            return;
        }
    }
    ctx->pc = 0x14F478u;
}
