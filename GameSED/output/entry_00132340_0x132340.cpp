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

// Function: entry_00132340
// Address: 0x132340 - 0x13234c
void entry_00132340_0x132340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132340_0x132340");
#endif

    ctx->pc = 0x132340u;

    // 0x132340: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x132340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x132344: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x132344u;
    {
        const bool branch_taken_0x132344 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x132348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132344u;
        // 0x132348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132344) {
            ctx->pc = 0x132338u;
            return;
        }
    }
    ctx->pc = 0x13234Cu;
}
