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

// Function: entry_0012c45c
// Address: 0x12c45c - 0x12c460
void entry_0012c45c_0x12c45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c45c_0x12c45c");
#endif

    ctx->pc = 0x12c45cu;

    // 0x12c45c: 0x248501bc  addiu       $a1, $a0, 0x1BC
    ctx->pc = 0x12c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 444));
    ctx->pc = 0x12c460u;
}
