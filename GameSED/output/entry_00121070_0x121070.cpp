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

// Function: entry_00121070
// Address: 0x121070 - 0x121084
void entry_00121070_0x121070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121070_0x121070");
#endif

    ctx->pc = 0x121070u;

    // 0x121070: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x121070u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x121074: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x121074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x121078: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x121078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12107c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x12107Cu;
    {
        const bool branch_taken_0x12107c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12107Cu;
        // 0x121080: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12107c) {
            ctx->pc = 0x121018u;
            return;
        }
    }
    ctx->pc = 0x121084u;
}
