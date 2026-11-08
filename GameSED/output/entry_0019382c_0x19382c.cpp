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

// Function: entry_0019382c
// Address: 0x19382c - 0x193830
void entry_0019382c_0x19382c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019382c_0x19382c");
#endif

    ctx->pc = 0x19382cu;

    // 0x19382c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19382cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->pc = 0x193830u;
}
