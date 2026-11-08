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

// Function: entry_001cacac
// Address: 0x1cacac - 0x1cacbc
void entry_001cacac_0x1cacac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cacac_0x1cacac");
#endif

    ctx->pc = 0x1cacacu;

    // 0x1cacac: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1cacacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1cacb0: 0x4e102b  sltu        $v0, $v0, $t6
    ctx->pc = 0x1cacb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x1cacb4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CACB4u;
    {
        const bool branch_taken_0x1cacb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CACB4u;
        // 0x1cacb8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cacb4) {
            ctx->pc = 0x1CAC10u;
            return;
        }
    }
    ctx->pc = 0x1CACBCu;
}
