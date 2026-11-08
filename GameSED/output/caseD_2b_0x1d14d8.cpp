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

// Function: caseD_2b
// Address: 0x1d14d8 - 0x1d14dc
void caseD_2b_0x1d14d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2b_0x1d14d8");
#endif

    ctx->pc = 0x1d14d8u;

    // 0x1d14d8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x1d14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->pc = 0x1d14dcu;
}
