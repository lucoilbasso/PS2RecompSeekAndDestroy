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

// Function: entry_0012dd60
// Address: 0x12dd60 - 0x12dd80
void entry_0012dd60_0x12dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dd60_0x12dd60");
#endif

    ctx->pc = 0x12dd60u;

label_12dd60:
    // 0x12dd60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12dd64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12dd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12dd68: 0x0  nop
    ctx->pc = 0x12dd68u;
    // NOP
    // 0x12dd6c: 0x0  nop
    ctx->pc = 0x12dd6cu;
    // NOP
    // 0x12dd70: 0x0  nop
    ctx->pc = 0x12dd70u;
    // NOP
    // 0x12dd74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DD74u;
    {
        const bool branch_taken_0x12dd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12dd74) {
            ctx->pc = 0x12DD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12dd60;
        }
    }
    ctx->pc = 0x12DD7Cu;
    // 0x12dd7c: 0x0  nop
    ctx->pc = 0x12dd7cu;
    // NOP
    ctx->pc = 0x12dd80u;
}
