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

// Function: entry_001cfcf4
// Address: 0x1cfcf4 - 0x1cfd04
void entry_001cfcf4_0x1cfcf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfcf4_0x1cfcf4");
#endif

    ctx->pc = 0x1cfcf4u;

    // 0x1cfcf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFCF4u;
    {
        const bool branch_taken_0x1cfcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFCF4u;
        // 0x1cfcf8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcf4) {
            ctx->pc = 0x1CFD04u;
            return;
        }
    }
    ctx->pc = 0x1CFCFCu;
    // 0x1cfcfc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1cfcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1cfd00: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cfd00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    ctx->pc = 0x1cfd04u;
}
