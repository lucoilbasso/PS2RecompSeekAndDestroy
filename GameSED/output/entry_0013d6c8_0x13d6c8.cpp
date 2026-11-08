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

// Function: entry_0013d6c8
// Address: 0x13d6c8 - 0x13d6e8
void entry_0013d6c8_0x13d6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d6c8_0x13d6c8");
#endif

    ctx->pc = 0x13d6c8u;

label_13d6c8:
    // 0x13d6c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d6cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13d6d0: 0x0  nop
    ctx->pc = 0x13d6d0u;
    // NOP
    // 0x13d6d4: 0x0  nop
    ctx->pc = 0x13d6d4u;
    // NOP
    // 0x13d6d8: 0x0  nop
    ctx->pc = 0x13d6d8u;
    // NOP
    // 0x13d6dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13D6DCu;
    {
        const bool branch_taken_0x13d6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d6dc) {
            ctx->pc = 0x13D6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d6c8;
        }
    }
    ctx->pc = 0x13D6E4u;
    // 0x13d6e4: 0x0  nop
    ctx->pc = 0x13d6e4u;
    // NOP
    ctx->pc = 0x13d6e8u;
}
