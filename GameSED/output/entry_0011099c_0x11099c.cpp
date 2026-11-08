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

// Function: entry_0011099c
// Address: 0x11099c - 0x1109a0
void entry_0011099c_0x11099c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011099c_0x11099c");
#endif

    ctx->pc = 0x11099cu;

    // 0x11099c: 0x26540020  addiu       $s4, $s2, 0x20
    ctx->pc = 0x11099cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->pc = 0x1109a0u;
}
