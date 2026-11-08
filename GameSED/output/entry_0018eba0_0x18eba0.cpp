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

// Function: entry_0018eba0
// Address: 0x18eba0 - 0x18ebac
void entry_0018eba0_0x18eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eba0_0x18eba0");
#endif

    ctx->pc = 0x18eba0u;

    // 0x18eba0: 0x8cc20254  lw          $v0, 0x254($a2)
    ctx->pc = 0x18eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 596)));
    // 0x18eba4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18eba8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x18ebacu;
}
