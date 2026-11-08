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

// Function: entry_00116d00
// Address: 0x116d00 - 0x116d1c
void entry_00116d00_0x116d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d00_0x116d00");
#endif

    ctx->pc = 0x116d00u;

label_116d00:
    // 0x116d00: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x116d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x116d04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x116d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116d08: 0x0  nop
    ctx->pc = 0x116d08u;
    // NOP
    // 0x116d0c: 0x0  nop
    ctx->pc = 0x116d0cu;
    // NOP
    // 0x116d10: 0x0  nop
    ctx->pc = 0x116d10u;
    // NOP
    // 0x116d14: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116D14u;
    {
        const bool branch_taken_0x116d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x116D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D14u;
        // 0x116d18: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d14) {
            ctx->pc = 0x116D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116d00;
        }
    }
    ctx->pc = 0x116D1Cu;
}
