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

// Function: entry_0015da18
// Address: 0x15da18 - 0x15da1c
void entry_0015da18_0x15da18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015da18_0x15da18");
#endif

    ctx->pc = 0x15da18u;

    // 0x15da18: 0x26d50da0  addiu       $s5, $s6, 0xDA0
    ctx->pc = 0x15da18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 3488));
    ctx->pc = 0x15da1cu;
}
