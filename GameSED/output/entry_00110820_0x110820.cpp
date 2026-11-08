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

// Function: entry_00110820
// Address: 0x110820 - 0x110824
void entry_00110820_0x110820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110820_0x110820");
#endif

    ctx->pc = 0x110820u;

    // 0x110820: 0xaf829118  sw          $v0, -0x6EE8($gp)
    ctx->pc = 0x110820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 2));
    ctx->pc = 0x110824u;
}
