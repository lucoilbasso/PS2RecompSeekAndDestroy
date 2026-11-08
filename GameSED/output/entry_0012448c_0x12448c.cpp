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

// Function: entry_0012448c
// Address: 0x12448c - 0x124490
void entry_0012448c_0x12448c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012448c_0x12448c");
#endif

    ctx->pc = 0x12448cu;

    // 0x12448c: 0x261101b0  addiu       $s1, $s0, 0x1B0
    ctx->pc = 0x12448cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    ctx->pc = 0x124490u;
}
