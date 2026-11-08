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

// Function: entry_00178d70
// Address: 0x178d70 - 0x178d88
void entry_00178d70_0x178d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178d70_0x178d70");
#endif

    ctx->pc = 0x178d70u;

    // 0x178d70: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x178d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x178d74: 0x0  nop
    ctx->pc = 0x178d74u;
    // NOP
    // 0x178d78: 0x0  nop
    ctx->pc = 0x178d78u;
    // NOP
    // 0x178d7c: 0x0  nop
    ctx->pc = 0x178d7cu;
    // NOP
    // 0x178d80: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x178D80u;
    {
        const bool branch_taken_0x178d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178d80) {
            ctx->pc = 0x178D48u;
            return;
        }
    }
    ctx->pc = 0x178D88u;
}
