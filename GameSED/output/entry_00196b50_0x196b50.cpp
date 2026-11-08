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

// Function: entry_00196b50
// Address: 0x196b50 - 0x196b64
void entry_00196b50_0x196b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196b50_0x196b50");
#endif

    ctx->pc = 0x196b50u;

    // 0x196b50: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x196b54: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x196b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x196b58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x196b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196b5c: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x196b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x196b60: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x196b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x196b64u;
}
