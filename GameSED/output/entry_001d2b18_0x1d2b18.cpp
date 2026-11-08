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

// Function: entry_001d2b18
// Address: 0x1d2b18 - 0x1d2b1c
void entry_001d2b18_0x1d2b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2b18_0x1d2b18");
#endif

    ctx->pc = 0x1d2b18u;

    // 0x1d2b18: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1d2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->pc = 0x1d2b1cu;
}
