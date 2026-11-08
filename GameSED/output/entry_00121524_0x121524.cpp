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

// Function: entry_00121524
// Address: 0x121524 - 0x121538
void entry_00121524_0x121524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121524_0x121524");
#endif

    ctx->pc = 0x121524u;

    // 0x121524: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x121524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x121528: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x121528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12152c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x12152cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x121530: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x121530u;
    {
        const bool branch_taken_0x121530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x121534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121530u;
        // 0x121534: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121530) {
            ctx->pc = 0x121510u;
            return;
        }
    }
    ctx->pc = 0x121538u;
}
