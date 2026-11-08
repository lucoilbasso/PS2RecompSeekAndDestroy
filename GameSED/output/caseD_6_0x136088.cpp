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

// Function: caseD_6
// Address: 0x136088 - 0x136090
void caseD_6_0x136088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x136088");
#endif

    ctx->pc = 0x136088u;

    // 0x136088: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x136088u;
    {
        const bool branch_taken_0x136088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136088u;
        // 0x13608c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136088) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136090u;
}
