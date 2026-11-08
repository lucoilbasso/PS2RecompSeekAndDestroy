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

// Function: entry_001d6cf8
// Address: 0x1d6cf8 - 0x1d6d18
void entry_001d6cf8_0x1d6cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6cf8_0x1d6cf8");
#endif

    ctx->pc = 0x1d6cf8u;

label_1d6cf8:
    // 0x1d6cf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d6cfc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d6cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d6d00: 0x0  nop
    ctx->pc = 0x1d6d00u;
    // NOP
    // 0x1d6d04: 0x0  nop
    ctx->pc = 0x1d6d04u;
    // NOP
    // 0x1d6d08: 0x0  nop
    ctx->pc = 0x1d6d08u;
    // NOP
    // 0x1d6d0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D6D0Cu;
    {
        const bool branch_taken_0x1d6d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6D0Cu;
        // 0x1d6d10: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d0c) {
            ctx->pc = 0x1D6CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6cf8;
        }
    }
    ctx->pc = 0x1D6D14u;
    // 0x1d6d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d6d18u;
}
