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

// Function: entry_0010be28
// Address: 0x10be28 - 0x10be48
void entry_0010be28_0x10be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be28_0x10be28");
#endif

    ctx->pc = 0x10be28u;

label_10be28:
    // 0x10be28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10be2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10be2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10be30: 0x0  nop
    ctx->pc = 0x10be30u;
    // NOP
    // 0x10be34: 0x0  nop
    ctx->pc = 0x10be34u;
    // NOP
    // 0x10be38: 0x0  nop
    ctx->pc = 0x10be38u;
    // NOP
    // 0x10be3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10BE3Cu;
    {
        const bool branch_taken_0x10be3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10be3c) {
            ctx->pc = 0x10BE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10be28;
        }
    }
    ctx->pc = 0x10BE44u;
    // 0x10be44: 0x0  nop
    ctx->pc = 0x10be44u;
    // NOP
    ctx->pc = 0x10be48u;
}
