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

// Function: entry_001117c0
// Address: 0x1117c0 - 0x1117d0
void entry_001117c0_0x1117c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001117c0_0x1117c0");
#endif

    ctx->pc = 0x1117c0u;

    // 0x1117c0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1117c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1117c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1117c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1117c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1117C8u;
    {
        const bool branch_taken_0x1117c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C8u;
        // 0x1117cc: 0x247400d0  addiu       $s4, $v1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c8) {
            ctx->pc = 0x1117FCu;
            return;
        }
    }
    ctx->pc = 0x1117D0u;
}
