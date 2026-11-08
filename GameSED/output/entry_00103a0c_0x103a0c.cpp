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

// Function: entry_00103a0c
// Address: 0x103a0c - 0x103a10
void entry_00103a0c_0x103a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103a0c_0x103a0c");
#endif

    ctx->pc = 0x103a0cu;

    // 0x103a0c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x103a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x103a10u;
}
