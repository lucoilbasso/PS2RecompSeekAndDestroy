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

// Function: entry_00110844
// Address: 0x110844 - 0x110848
void entry_00110844_0x110844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110844_0x110844");
#endif

    ctx->pc = 0x110844u;

    // 0x110844: 0xaf83911c  sw          $v1, -0x6EE4($gp)
    ctx->pc = 0x110844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 3));
    ctx->pc = 0x110848u;
}
