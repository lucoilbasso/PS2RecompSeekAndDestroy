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

// Function: entry_0017b670
// Address: 0x17b670 - 0x17b67c
void entry_0017b670_0x17b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b670_0x17b670");
#endif

    ctx->pc = 0x17b670u;

    // 0x17b670: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x17b670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x17b674: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x17b674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x17b678: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x17b67cu;
}
