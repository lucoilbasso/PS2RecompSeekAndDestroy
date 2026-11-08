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

// Function: entry_00126b78
// Address: 0x126b78 - 0x126b98
void entry_00126b78_0x126b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126b78_0x126b78");
#endif

    ctx->pc = 0x126b78u;

label_126b78:
    // 0x126b78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x126b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x126b7c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x126b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x126b80: 0x0  nop
    ctx->pc = 0x126b80u;
    // NOP
    // 0x126b84: 0x0  nop
    ctx->pc = 0x126b84u;
    // NOP
    // 0x126b88: 0x0  nop
    ctx->pc = 0x126b88u;
    // NOP
    // 0x126b8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x126B8Cu;
    {
        const bool branch_taken_0x126b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126b8c) {
            ctx->pc = 0x126B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126b78;
        }
    }
    ctx->pc = 0x126B94u;
    // 0x126b94: 0x0  nop
    ctx->pc = 0x126b94u;
    // NOP
    ctx->pc = 0x126b98u;
}
