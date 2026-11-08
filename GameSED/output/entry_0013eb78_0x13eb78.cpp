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

// Function: entry_0013eb78
// Address: 0x13eb78 - 0x13eb7c
void entry_0013eb78_0x13eb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013eb78_0x13eb78");
#endif

    ctx->pc = 0x13eb78u;

    // 0x13eb78: 0x261011c0  addiu       $s0, $s0, 0x11C0
    ctx->pc = 0x13eb78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4544));
    ctx->pc = 0x13eb7cu;
}
