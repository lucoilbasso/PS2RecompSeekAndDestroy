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

// Function: entry_00119e98
// Address: 0x119e98 - 0x119ea4
void entry_00119e98_0x119e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119e98_0x119e98");
#endif

    ctx->pc = 0x119e98u;

    // 0x119e98: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119e9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119ea0: 0x8c63d370  lw          $v1, -0x2C90($v1)
    ctx->pc = 0x119ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955888)));
    ctx->pc = 0x119ea4u;
}
