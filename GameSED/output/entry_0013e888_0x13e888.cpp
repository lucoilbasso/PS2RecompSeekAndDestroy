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

// Function: entry_0013e888
// Address: 0x13e888 - 0x13e88c
void entry_0013e888_0x13e888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e888_0x13e888");
#endif

    ctx->pc = 0x13e888u;

    // 0x13e888: 0xaf809130  sw          $zero, -0x6ED0($gp)
    ctx->pc = 0x13e888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938928), GPR_U32(ctx, 0));
    ctx->pc = 0x13e88cu;
}
