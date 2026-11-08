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

// Function: entry_0019ee78
// Address: 0x19ee78 - 0x19ee7c
void entry_0019ee78_0x19ee78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ee78_0x19ee78");
#endif

    ctx->pc = 0x19ee78u;

    // 0x19ee78: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x19ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    ctx->pc = 0x19ee7cu;
}
