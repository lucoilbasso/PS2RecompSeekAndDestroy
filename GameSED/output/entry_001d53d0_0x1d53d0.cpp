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

// Function: entry_001d53d0
// Address: 0x1d53d0 - 0x1d53e8
void entry_001d53d0_0x1d53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d53d0_0x1d53d0");
#endif

    ctx->pc = 0x1d53d0u;

    // 0x1d53d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d53d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d53d4: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x1d53d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1d53d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d53d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d53dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d53e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d53e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d53e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1d53e8u;
}
