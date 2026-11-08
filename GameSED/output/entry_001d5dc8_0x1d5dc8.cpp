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

// Function: entry_001d5dc8
// Address: 0x1d5dc8 - 0x1d5de4
void entry_001d5dc8_0x1d5dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5dc8_0x1d5dc8");
#endif

    ctx->pc = 0x1d5dc8u;

label_1d5dc8:
    // 0x1d5dc8: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x1d5dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x1d5dcc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d5dd0: 0x0  nop
    ctx->pc = 0x1d5dd0u;
    // NOP
    // 0x1d5dd4: 0x0  nop
    ctx->pc = 0x1d5dd4u;
    // NOP
    // 0x1d5dd8: 0x0  nop
    ctx->pc = 0x1d5dd8u;
    // NOP
    // 0x1d5ddc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D5DDCu;
    {
        const bool branch_taken_0x1d5ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DDCu;
        // 0x1d5de0: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ddc) {
            ctx->pc = 0x1D5DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5dc8;
        }
    }
    ctx->pc = 0x1D5DE4u;
}
