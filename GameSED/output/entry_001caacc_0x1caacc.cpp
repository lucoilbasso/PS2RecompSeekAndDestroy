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

// Function: entry_001caacc
// Address: 0x1caacc - 0x1caad4
void entry_001caacc_0x1caacc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caacc_0x1caacc");
#endif

    ctx->pc = 0x1caaccu;

    // 0x1caacc: 0x55c0ffd0  bnel        $t6, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1CAACCu;
    {
        const bool branch_taken_0x1caacc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caacc) {
            ctx->pc = 0x1CAAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAACCu;
            // 0x1caad0: 0x25c4ffff  addiu       $a0, $t6, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAA10u;
            return;
        }
    }
    ctx->pc = 0x1CAAD4u;
}
