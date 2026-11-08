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

// Function: entry_001dd3a0
// Address: 0x1dd3a0 - 0x1dd3ac
void entry_001dd3a0_0x1dd3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd3a0_0x1dd3a0");
#endif

    ctx->pc = 0x1dd3a0u;

    // 0x1dd3a0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD3A0u;
    {
        const bool branch_taken_0x1dd3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3A0u;
        // 0x1dd3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3a0) {
            ctx->pc = 0x1DD3ACu;
            return;
        }
    }
    ctx->pc = 0x1DD3A8u;
    // 0x1dd3a8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->pc = 0x1dd3acu;
}
