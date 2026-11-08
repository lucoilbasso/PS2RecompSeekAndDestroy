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

// Function: entry_001769c0
// Address: 0x1769c0 - 0x1769e0
void entry_001769c0_0x1769c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001769c0_0x1769c0");
#endif

    ctx->pc = 0x1769c0u;

label_1769c0:
    // 0x1769c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1769c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1769c4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1769c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1769c8: 0x0  nop
    ctx->pc = 0x1769c8u;
    // NOP
    // 0x1769cc: 0x0  nop
    ctx->pc = 0x1769ccu;
    // NOP
    // 0x1769d0: 0x0  nop
    ctx->pc = 0x1769d0u;
    // NOP
    // 0x1769d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1769D4u;
    {
        const bool branch_taken_0x1769d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1769d4) {
            ctx->pc = 0x1769C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1769c0;
        }
    }
    ctx->pc = 0x1769DCu;
    // 0x1769dc: 0x0  nop
    ctx->pc = 0x1769dcu;
    // NOP
    ctx->pc = 0x1769e0u;
}
