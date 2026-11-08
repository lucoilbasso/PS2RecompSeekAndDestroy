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

// Function: entry_0011ac9c
// Address: 0x11ac9c - 0x11aca0
void entry_0011ac9c_0x11ac9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ac9c_0x11ac9c");
#endif

    ctx->pc = 0x11ac9cu;

    // 0x11ac9c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x11ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->pc = 0x11aca0u;
}
