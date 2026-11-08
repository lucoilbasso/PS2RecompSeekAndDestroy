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

// Function: entry_001c3138
// Address: 0x1c3138 - 0x1c3160
void entry_001c3138_0x1c3138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3138_0x1c3138");
#endif

    ctx->pc = 0x1c3138u;

label_1c3138:
    // 0x1c3138: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c3138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c313c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1c313cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1c3140: 0x0  nop
    ctx->pc = 0x1c3140u;
    // NOP
    // 0x1c3144: 0x0  nop
    ctx->pc = 0x1c3144u;
    // NOP
    // 0x1c3148: 0x0  nop
    ctx->pc = 0x1c3148u;
    // NOP
    // 0x1c314c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C314Cu;
    {
        const bool branch_taken_0x1c314c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c314c) {
            ctx->pc = 0x1C3138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3138;
        }
    }
    ctx->pc = 0x1C3154u;
    // 0x1c3154: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1c3154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1c3158: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x1c3158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x1c315c: 0x0  nop
    ctx->pc = 0x1c315cu;
    // NOP
    ctx->pc = 0x1c3160u;
}
