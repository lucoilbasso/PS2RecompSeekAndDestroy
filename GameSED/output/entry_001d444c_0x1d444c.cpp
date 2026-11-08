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

// Function: entry_001d444c
// Address: 0x1d444c - 0x1d4450
void entry_001d444c_0x1d444c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d444c_0x1d444c");
#endif

    ctx->pc = 0x1d444cu;

    // 0x1d444c: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x1d4450u;
}
