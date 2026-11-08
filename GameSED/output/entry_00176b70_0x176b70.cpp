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

// Function: entry_00176b70
// Address: 0x176b70 - 0x176b90
void entry_00176b70_0x176b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176b70_0x176b70");
#endif

    ctx->pc = 0x176b70u;

label_176b70:
    // 0x176b70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176b74: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x176b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x176b78: 0x0  nop
    ctx->pc = 0x176b78u;
    // NOP
    // 0x176b7c: 0x0  nop
    ctx->pc = 0x176b7cu;
    // NOP
    // 0x176b80: 0x0  nop
    ctx->pc = 0x176b80u;
    // NOP
    // 0x176b84: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176B84u;
    {
        const bool branch_taken_0x176b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176b84) {
            ctx->pc = 0x176B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176b70;
        }
    }
    ctx->pc = 0x176B8Cu;
    // 0x176b8c: 0x0  nop
    ctx->pc = 0x176b8cu;
    // NOP
    ctx->pc = 0x176b90u;
}
