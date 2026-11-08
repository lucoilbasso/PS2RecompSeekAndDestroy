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

// Function: entry_00177500
// Address: 0x177500 - 0x177518
void entry_00177500_0x177500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177500_0x177500");
#endif

    ctx->pc = 0x177500u;

    // 0x177500: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x177500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x177504: 0x0  nop
    ctx->pc = 0x177504u;
    // NOP
    // 0x177508: 0x0  nop
    ctx->pc = 0x177508u;
    // NOP
    // 0x17750c: 0x0  nop
    ctx->pc = 0x17750cu;
    // NOP
    // 0x177510: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x177510u;
    {
        const bool branch_taken_0x177510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177510) {
            ctx->pc = 0x1774D8u;
            return;
        }
    }
    ctx->pc = 0x177518u;
}
