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

// Function: entry_001b049c
// Address: 0x1b049c - 0x1b04a8
void entry_001b049c_0x1b049c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b049c_0x1b049c");
#endif

    ctx->pc = 0x1b049cu;

    // 0x1b049c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b04a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B04A0u;
    {
        const bool branch_taken_0x1b04a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04A0u;
        // 0x1b04a4: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04a0) {
            ctx->pc = 0x1B04C0u;
            return;
        }
    }
    ctx->pc = 0x1B04A8u;
}
