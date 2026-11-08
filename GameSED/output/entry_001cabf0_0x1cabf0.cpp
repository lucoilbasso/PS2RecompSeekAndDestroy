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

// Function: entry_001cabf0
// Address: 0x1cabf0 - 0x1cac00
void entry_001cabf0_0x1cabf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cabf0_0x1cabf0");
#endif

    ctx->pc = 0x1cabf0u;

    // 0x1cabf0: 0x1c0682d  daddu       $t5, $t6, $zero
    ctx->pc = 0x1cabf0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cabf4: 0x11a00033  beqz        $t5, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CABF4u;
    {
        const bool branch_taken_0x1cabf4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CABF4u;
        // 0x1cabf8: 0x1a0782d  daddu       $t7, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cabf4) {
            ctx->pc = 0x1CACC4u;
            return;
        }
    }
    ctx->pc = 0x1CABFCu;
    // 0x1cabfc: 0x25e4ffff  addiu       $a0, $t7, -0x1
    ctx->pc = 0x1cabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    ctx->pc = 0x1cac00u;
}
