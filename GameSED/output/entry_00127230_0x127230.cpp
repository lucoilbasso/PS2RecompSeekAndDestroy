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

// Function: entry_00127230
// Address: 0x127230 - 0x127250
void entry_00127230_0x127230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127230_0x127230");
#endif

    ctx->pc = 0x127230u;

label_127230:
    // 0x127230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127234: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x127234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x127238: 0x0  nop
    ctx->pc = 0x127238u;
    // NOP
    // 0x12723c: 0x0  nop
    ctx->pc = 0x12723cu;
    // NOP
    // 0x127240: 0x0  nop
    ctx->pc = 0x127240u;
    // NOP
    // 0x127244: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x127244u;
    {
        const bool branch_taken_0x127244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127244) {
            ctx->pc = 0x127230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127230;
        }
    }
    ctx->pc = 0x12724Cu;
    // 0x12724c: 0x0  nop
    ctx->pc = 0x12724cu;
    // NOP
    ctx->pc = 0x127250u;
}
