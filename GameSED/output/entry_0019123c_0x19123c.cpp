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

// Function: entry_0019123c
// Address: 0x19123c - 0x191240
void entry_0019123c_0x19123c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019123c_0x19123c");
#endif

    ctx->pc = 0x19123cu;

    // 0x19123c: 0x24040176  addiu       $a0, $zero, 0x176
    ctx->pc = 0x19123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    ctx->pc = 0x191240u;
}
