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

// Function: entry_00106bbc
// Address: 0x106bbc - 0x106bc0
void entry_00106bbc_0x106bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106bbc_0x106bbc");
#endif

    ctx->pc = 0x106bbcu;

    // 0x106bbc: 0x2450f200  addiu       $s0, $v0, -0xE00
    ctx->pc = 0x106bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963712));
    ctx->pc = 0x106bc0u;
}
