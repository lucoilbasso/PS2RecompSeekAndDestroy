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

// Function: entry_001cb774
// Address: 0x1cb774 - 0x1cb780
void entry_001cb774_0x1cb774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb774_0x1cb774");
#endif

    ctx->pc = 0x1cb774u;

    // 0x1cb774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cb774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cb778: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1CB778u;
    {
        const bool branch_taken_0x1cb778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB778u;
        // 0x1cb77c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb778) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB780u;
}
