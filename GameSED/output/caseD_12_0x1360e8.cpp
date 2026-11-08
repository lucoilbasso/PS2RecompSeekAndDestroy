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

// Function: caseD_12
// Address: 0x1360e8 - 0x1360f0
void caseD_12_0x1360e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x1360e8");
#endif

    ctx->pc = 0x1360e8u;

    // 0x1360e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1360E8u;
    {
        const bool branch_taken_0x1360e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1360ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1360E8u;
        // 0x1360ec: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360e8) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x1360F0u;
}
