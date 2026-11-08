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

// Function: entry_0012c124
// Address: 0x12c124 - 0x12c12c
void entry_0012c124_0x12c124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c124_0x12c124");
#endif

    ctx->pc = 0x12c124u;

    // 0x12c124: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x12c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x12c128: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x12c128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    ctx->pc = 0x12c12cu;
}
