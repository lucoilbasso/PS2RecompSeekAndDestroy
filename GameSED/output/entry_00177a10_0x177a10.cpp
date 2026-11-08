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

// Function: entry_00177a10
// Address: 0x177a10 - 0x177a14
void entry_00177a10_0x177a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177a10_0x177a10");
#endif

    ctx->pc = 0x177a10u;

    // 0x177a10: 0xaf808cb0  sw          $zero, -0x7350($gp)
    ctx->pc = 0x177a10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 0));
    ctx->pc = 0x177a14u;
}
