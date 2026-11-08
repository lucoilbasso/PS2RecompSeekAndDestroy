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

// Function: entry_0012b380
// Address: 0x12b380 - 0x12b3a0
void entry_0012b380_0x12b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b380_0x12b380");
#endif

    ctx->pc = 0x12b380u;

label_12b380:
    // 0x12b380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b384: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12b384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12b388: 0x0  nop
    ctx->pc = 0x12b388u;
    // NOP
    // 0x12b38c: 0x0  nop
    ctx->pc = 0x12b38cu;
    // NOP
    // 0x12b390: 0x0  nop
    ctx->pc = 0x12b390u;
    // NOP
    // 0x12b394: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B394u;
    {
        const bool branch_taken_0x12b394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b394) {
            ctx->pc = 0x12B380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b380;
        }
    }
    ctx->pc = 0x12B39Cu;
    // 0x12b39c: 0x0  nop
    ctx->pc = 0x12b39cu;
    // NOP
    ctx->pc = 0x12b3a0u;
}
