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

// Function: entry_0018f160
// Address: 0x18f160 - 0x18f168
void entry_0018f160_0x18f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f160_0x18f160");
#endif

    ctx->pc = 0x18f160u;

    // 0x18f160: 0x8f838d70  lw          $v1, -0x7290($gp)
    ctx->pc = 0x18f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x18f164: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18f164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x18f168u;
}
