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

// Function: entry_001b1af0
// Address: 0x1b1af0 - 0x1b1b10
void entry_001b1af0_0x1b1af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1af0_0x1b1af0");
#endif

    ctx->pc = 0x1b1af0u;

label_1b1af0:
    // 0x1b1af0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b1af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1af4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1b1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1b1af8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b1af8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1afc: 0x0  nop
    ctx->pc = 0x1b1afcu;
    // NOP
    // 0x1b1b00: 0x0  nop
    ctx->pc = 0x1b1b00u;
    // NOP
    // 0x1b1b04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B1B04u;
    {
        const bool branch_taken_0x1b1b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1b04) {
            ctx->pc = 0x1B1AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1af0;
        }
    }
    ctx->pc = 0x1B1B0Cu;
    // 0x1b1b0c: 0xac910014  sw          $s1, 0x14($a0)
    ctx->pc = 0x1b1b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
    ctx->pc = 0x1b1b10u;
}
