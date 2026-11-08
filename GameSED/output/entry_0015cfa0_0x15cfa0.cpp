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

// Function: entry_0015cfa0
// Address: 0x15cfa0 - 0x15cfa4
void entry_0015cfa0_0x15cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cfa0_0x15cfa0");
#endif

    ctx->pc = 0x15cfa0u;

    // 0x15cfa0: 0x2454a498  addiu       $s4, $v0, -0x5B68
    ctx->pc = 0x15cfa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943896));
    ctx->pc = 0x15cfa4u;
}
