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

// Function: entry_001caabc
// Address: 0x1caabc - 0x1caacc
void entry_001caabc_0x1caabc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caabc_0x1caabc");
#endif

    ctx->pc = 0x1caabcu;

    // 0x1caabc: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1caabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1caac0: 0x4d102b  sltu        $v0, $v0, $t5
    ctx->pc = 0x1caac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1caac4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CAAC4u;
    {
        const bool branch_taken_0x1caac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAC4u;
        // 0x1caac8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caac4) {
            ctx->pc = 0x1CAA20u;
            return;
        }
    }
    ctx->pc = 0x1CAACCu;
}
