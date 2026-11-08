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

// Function: entry_0019ca00
// Address: 0x19ca00 - 0x19ca1c
void entry_0019ca00_0x19ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ca00_0x19ca00");
#endif

    ctx->pc = 0x19ca00u;

label_19ca00:
    // 0x19ca00: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x19ca00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x19ca04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x19ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19ca08: 0x0  nop
    ctx->pc = 0x19ca08u;
    // NOP
    // 0x19ca0c: 0x0  nop
    ctx->pc = 0x19ca0cu;
    // NOP
    // 0x19ca10: 0x0  nop
    ctx->pc = 0x19ca10u;
    // NOP
    // 0x19ca14: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19CA14u;
    {
        const bool branch_taken_0x19ca14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA14u;
        // 0x19ca18: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca14) {
            ctx->pc = 0x19CA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ca00;
        }
    }
    ctx->pc = 0x19CA1Cu;
}
