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

// Function: entry_0017b628
// Address: 0x17b628 - 0x17b634
void entry_0017b628_0x17b628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b628_0x17b628");
#endif

    ctx->pc = 0x17b628u;

    // 0x17b628: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17b62c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x17b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17b630: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x17b634u;
}
