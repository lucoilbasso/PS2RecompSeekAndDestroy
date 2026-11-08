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

// Function: entry_00155cd4
// Address: 0x155cd4 - 0x155ce0
void entry_00155cd4_0x155cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155cd4_0x155cd4");
#endif

    ctx->pc = 0x155cd4u;

    // 0x155cd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x155CD4u;
    {
        const bool branch_taken_0x155cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CD4u;
        // 0x155cd8: 0xaca3003c  sw          $v1, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cd4) {
            ctx->pc = 0x155CE4u;
            return;
        }
    }
    ctx->pc = 0x155CDCu;
    // 0x155cdc: 0x0  nop
    ctx->pc = 0x155cdcu;
    // NOP
    ctx->pc = 0x155ce0u;
}
