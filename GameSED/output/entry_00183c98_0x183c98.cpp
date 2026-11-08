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

// Function: entry_00183c98
// Address: 0x183c98 - 0x183ca4
void entry_00183c98_0x183c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183c98_0x183c98");
#endif

    ctx->pc = 0x183c98u;

    // 0x183c98: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x183c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x183c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183ca0: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x183ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x183ca4u;
}
