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

// Function: entry_001d01f0
// Address: 0x1d01f0 - 0x1d0200
void entry_001d01f0_0x1d01f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d01f0_0x1d01f0");
#endif

    ctx->pc = 0x1d01f0u;

    // 0x1d01f0: 0x2463e614  addiu       $v1, $v1, -0x19EC
    ctx->pc = 0x1d01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960660));
    // 0x1d01f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d01f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d01fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1d0200u;
}
