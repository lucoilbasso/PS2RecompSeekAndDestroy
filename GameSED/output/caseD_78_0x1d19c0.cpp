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

// Function: caseD_78
// Address: 0x1d19c0 - 0x1d19c8
void caseD_78_0x1d19c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_78_0x1d19c0");
#endif

    ctx->pc = 0x1d19c0u;

    // 0x1d19c0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d19c4: 0x2442c3f0  addiu       $v0, $v0, -0x3C10
    ctx->pc = 0x1d19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951920));
    ctx->pc = 0x1d19c8u;
}
