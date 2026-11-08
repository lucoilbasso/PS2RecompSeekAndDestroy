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

// Function: entry_001d541c
// Address: 0x1d541c - 0x1d5420
void entry_001d541c_0x1d541c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d541c_0x1d541c");
#endif

    ctx->pc = 0x1d541cu;

    // 0x1d541c: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x1d541cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->pc = 0x1d5420u;
}
