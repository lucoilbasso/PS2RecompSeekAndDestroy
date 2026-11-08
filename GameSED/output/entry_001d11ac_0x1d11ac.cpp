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

// Function: entry_001d11ac
// Address: 0x1d11ac - 0x1d11b0
void entry_001d11ac_0x1d11ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d11ac_0x1d11ac");
#endif

    ctx->pc = 0x1d11acu;

    // 0x1d11ac: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x1d11acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x1d11b0u;
}
