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

// Function: entry_0013c94c
// Address: 0x13c94c - 0x13c950
void entry_0013c94c_0x13c94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c94c_0x13c94c");
#endif

    ctx->pc = 0x13c94cu;

    // 0x13c94c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x13c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->pc = 0x13c950u;
}
