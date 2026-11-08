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

// Function: entry_0019834c
// Address: 0x19834c - 0x198350
void entry_0019834c_0x19834c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019834c_0x19834c");
#endif

    ctx->pc = 0x19834cu;

    // 0x19834c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x19834cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->pc = 0x198350u;
}
