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

// Function: entry_0012bff0
// Address: 0x12bff0 - 0x12bff8
void entry_0012bff0_0x12bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012bff0_0x12bff0");
#endif

    ctx->pc = 0x12bff0u;

    // 0x12bff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12bff4: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x12bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    ctx->pc = 0x12bff8u;
}
