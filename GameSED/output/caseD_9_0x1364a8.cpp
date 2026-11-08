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

// Function: caseD_9
// Address: 0x1364a8 - 0x1364b0
void caseD_9_0x1364a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1364a8");
#endif

    ctx->pc = 0x1364a8u;

    // 0x1364a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1364A8u;
    {
        const bool branch_taken_0x1364a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364A8u;
        // 0x1364ac: 0x24130200  addiu       $s3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364a8) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x1364B0u;
}
