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

// Function: entry_00186878
// Address: 0x186878 - 0x186880
void entry_00186878_0x186878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186878_0x186878");
#endif

    ctx->pc = 0x186878u;

    // 0x186878: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x186878u;
    {
        const bool branch_taken_0x186878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186878) {
            ctx->pc = 0x18687Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186878u;
            // 0x18687c: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1868A4u;
            return;
        }
    }
    ctx->pc = 0x186880u;
}
