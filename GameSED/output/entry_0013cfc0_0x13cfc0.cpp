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

// Function: entry_0013cfc0
// Address: 0x13cfc0 - 0x13cfe0
void entry_0013cfc0_0x13cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cfc0_0x13cfc0");
#endif

    ctx->pc = 0x13cfc0u;

label_13cfc0:
    // 0x13cfc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13cfc4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13cfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13cfc8: 0x0  nop
    ctx->pc = 0x13cfc8u;
    // NOP
    // 0x13cfcc: 0x0  nop
    ctx->pc = 0x13cfccu;
    // NOP
    // 0x13cfd0: 0x0  nop
    ctx->pc = 0x13cfd0u;
    // NOP
    // 0x13cfd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13CFD4u;
    {
        const bool branch_taken_0x13cfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cfd4) {
            ctx->pc = 0x13CFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cfc0;
        }
    }
    ctx->pc = 0x13CFDCu;
    // 0x13cfdc: 0x0  nop
    ctx->pc = 0x13cfdcu;
    // NOP
    ctx->pc = 0x13cfe0u;
}
