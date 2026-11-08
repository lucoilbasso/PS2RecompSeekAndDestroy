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

// Function: entry_0018b208
// Address: 0x18b208 - 0x18b228
void entry_0018b208_0x18b208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b208_0x18b208");
#endif

    ctx->pc = 0x18b208u;

label_18b208:
    // 0x18b208: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18b20c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x18b20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x18b210: 0x0  nop
    ctx->pc = 0x18b210u;
    // NOP
    // 0x18b214: 0x0  nop
    ctx->pc = 0x18b214u;
    // NOP
    // 0x18b218: 0x0  nop
    ctx->pc = 0x18b218u;
    // NOP
    // 0x18b21c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18B21Cu;
    {
        const bool branch_taken_0x18b21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b21c) {
            ctx->pc = 0x18B208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B224u;
    // 0x18b224: 0x0  nop
    ctx->pc = 0x18b224u;
    // NOP
    ctx->pc = 0x18b228u;
}
