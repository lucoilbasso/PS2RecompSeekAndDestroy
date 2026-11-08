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

// Function: entry_0012e04c
// Address: 0x12e04c - 0x12e050
void entry_0012e04c_0x12e04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e04c_0x12e04c");
#endif

    ctx->pc = 0x12e04cu;

    // 0x12e04c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x12e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    ctx->pc = 0x12e050u;
}
