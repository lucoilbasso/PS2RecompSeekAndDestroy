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

// Function: entry_001227c8
// Address: 0x1227c8 - 0x1227d4
void entry_001227c8_0x1227c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001227c8_0x1227c8");
#endif

    ctx->pc = 0x1227c8u;

    // 0x1227c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1227c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1227cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1227ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1227d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1227d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1227d4u;
}
