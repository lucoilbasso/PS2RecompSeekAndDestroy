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

// Function: entry_00104a4c
// Address: 0x104a4c - 0x104a50
void entry_00104a4c_0x104a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104a4c_0x104a4c");
#endif

    ctx->pc = 0x104a4cu;

    // 0x104a4c: 0x2442ed80  addiu       $v0, $v0, -0x1280
    ctx->pc = 0x104a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962560));
    ctx->pc = 0x104a50u;
}
