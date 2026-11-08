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

// Function: entry_00124400
// Address: 0x124400 - 0x12440c
void entry_00124400_0x124400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124400_0x124400");
#endif

    ctx->pc = 0x124400u;

    // 0x124400: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x124400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124404: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x124404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x124408: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x124408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x12440cu;
}
