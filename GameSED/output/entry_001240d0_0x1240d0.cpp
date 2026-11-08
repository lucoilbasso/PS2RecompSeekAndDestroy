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

// Function: entry_001240d0
// Address: 0x1240d0 - 0x1240e4
void entry_001240d0_0x1240d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001240d0_0x1240d0");
#endif

    ctx->pc = 0x1240d0u;

    // 0x1240d0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1240d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1240d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1240d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1240d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1240d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1240dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1240dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1240e0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1240e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    ctx->pc = 0x1240e4u;
}
