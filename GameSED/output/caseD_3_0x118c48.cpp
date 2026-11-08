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

// Function: caseD_3
// Address: 0x118c48 - 0x118c50
void caseD_3_0x118c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x118c48");
#endif

    ctx->pc = 0x118c48u;

    // 0x118c48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118C48u;
    {
        const bool branch_taken_0x118c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118C48u;
        // 0x118c4c: 0x2623007c  addiu       $v1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118c48) {
            ctx->pc = 0x118C8Cu;
            return;
        }
    }
    ctx->pc = 0x118C50u;
}
