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

// Function: entry_001ba724
// Address: 0x1ba724 - 0x1ba730
void entry_001ba724_0x1ba724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba724_0x1ba724");
#endif

    ctx->pc = 0x1ba724u;

    // 0x1ba724: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BA724u;
    {
        const bool branch_taken_0x1ba724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA724u;
        // 0x1ba728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba724) {
            ctx->pc = 0x1BA698u;
            return;
        }
    }
    ctx->pc = 0x1BA72Cu;
    // 0x1ba72c: 0xae40c0b8  sw          $zero, -0x3F48($s2)
    ctx->pc = 0x1ba72cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951096), GPR_U32(ctx, 0));
    ctx->pc = 0x1ba730u;
}
