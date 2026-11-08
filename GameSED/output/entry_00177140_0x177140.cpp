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

// Function: entry_00177140
// Address: 0x177140 - 0x177160
void entry_00177140_0x177140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177140_0x177140");
#endif

    ctx->pc = 0x177140u;

label_177140:
    // 0x177140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x177140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x177144: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x177144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x177148: 0x0  nop
    ctx->pc = 0x177148u;
    // NOP
    // 0x17714c: 0x0  nop
    ctx->pc = 0x17714cu;
    // NOP
    // 0x177150: 0x0  nop
    ctx->pc = 0x177150u;
    // NOP
    // 0x177154: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x177154u;
    {
        const bool branch_taken_0x177154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177154) {
            ctx->pc = 0x177140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177140;
        }
    }
    ctx->pc = 0x17715Cu;
    // 0x17715c: 0x0  nop
    ctx->pc = 0x17715cu;
    // NOP
    ctx->pc = 0x177160u;
}
