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

// Function: caseD_19
// Address: 0x18c8f4 - 0x18c8f8
void caseD_19_0x18c8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x18c8f4");
#endif

    ctx->pc = 0x18c8f4u;

    // 0x18c8f4: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x18c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    ctx->pc = 0x18c8f8u;
}
