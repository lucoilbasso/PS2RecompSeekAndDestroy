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

// Function: entry_00197620
// Address: 0x197620 - 0x19763c
void entry_00197620_0x197620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197620_0x197620");
#endif

    ctx->pc = 0x197620u;

label_197620:
    // 0x197620: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197624: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x197624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x197628: 0x0  nop
    ctx->pc = 0x197628u;
    // NOP
    // 0x19762c: 0x0  nop
    ctx->pc = 0x19762cu;
    // NOP
    // 0x197630: 0x0  nop
    ctx->pc = 0x197630u;
    // NOP
    // 0x197634: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x197634u;
    {
        const bool branch_taken_0x197634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197634) {
            ctx->pc = 0x197620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197620;
        }
    }
    ctx->pc = 0x19763Cu;
}
