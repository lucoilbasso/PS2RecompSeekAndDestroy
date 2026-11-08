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

// Function: entry_0017721c
// Address: 0x17721c - 0x177224
void entry_0017721c_0x17721c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017721c_0x17721c");
#endif

    ctx->pc = 0x17721cu;

    // 0x17721c: 0x2442cec0  addiu       $v0, $v0, -0x3140
    ctx->pc = 0x17721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954688));
    // 0x177220: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x177220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x177224u;
}
