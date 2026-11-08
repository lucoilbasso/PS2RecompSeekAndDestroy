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

// Function: entry_0010f62c
// Address: 0x10f62c - 0x10f630
void entry_0010f62c_0x10f62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f62c_0x10f62c");
#endif

    ctx->pc = 0x10f62cu;

    // 0x10f62c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x10f62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x10f630u;
}
