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

// Function: entry_0013a6cc
// Address: 0x13a6cc - 0x13a6d0
void entry_0013a6cc_0x13a6cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a6cc_0x13a6cc");
#endif

    ctx->pc = 0x13a6ccu;

    // 0x13a6cc: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x13a6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->pc = 0x13a6d0u;
}
