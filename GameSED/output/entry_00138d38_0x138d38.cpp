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

// Function: entry_00138d38
// Address: 0x138d38 - 0x138d40
void entry_00138d38_0x138d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138d38_0x138d38");
#endif

    ctx->pc = 0x138d38u;

    // 0x138d38: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x138d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x138d3c: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x138d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    ctx->pc = 0x138d40u;
}
