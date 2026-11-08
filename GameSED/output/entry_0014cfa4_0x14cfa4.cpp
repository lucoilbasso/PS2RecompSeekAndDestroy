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

// Function: entry_0014cfa4
// Address: 0x14cfa4 - 0x14cfac
void entry_0014cfa4_0x14cfa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cfa4_0x14cfa4");
#endif

    ctx->pc = 0x14cfa4u;

    // 0x14cfa4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CFA4u;
    {
        const bool branch_taken_0x14cfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CFA4u;
        // 0x14cfa8: 0xac430230  sw          $v1, 0x230($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cfa4) {
            ctx->pc = 0x14CFB4u;
            return;
        }
    }
    ctx->pc = 0x14CFACu;
}
