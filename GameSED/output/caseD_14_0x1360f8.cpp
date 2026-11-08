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

// Function: caseD_14
// Address: 0x1360f8 - 0x136100
void caseD_14_0x1360f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_14_0x1360f8");
#endif

    ctx->pc = 0x1360f8u;

    // 0x1360f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1360F8u;
    {
        const bool branch_taken_0x1360f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360F8u;
        // 0x1360fc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360f8) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136100u;
}
