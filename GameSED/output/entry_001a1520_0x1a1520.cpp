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

// Function: entry_001a1520
// Address: 0x1a1520 - 0x1a152c
void entry_001a1520_0x1a1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1520_0x1a1520");
#endif

    ctx->pc = 0x1a1520u;

    // 0x1a1520: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1a1524: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a1524u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a1528: 0x8c22fa00  lw          $v0, -0x600($at)
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965760)));
    ctx->pc = 0x1a152cu;
}
