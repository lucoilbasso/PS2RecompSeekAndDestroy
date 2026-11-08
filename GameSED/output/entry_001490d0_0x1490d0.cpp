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

// Function: entry_001490d0
// Address: 0x1490d0 - 0x1490d8
void entry_001490d0_0x1490d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001490d0_0x1490d0");
#endif

    ctx->pc = 0x1490d0u;

    // 0x1490d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1490d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1490d4: 0xaca204f8  sw          $v0, 0x4F8($a1)
    ctx->pc = 0x1490d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1272), GPR_U32(ctx, 2));
    ctx->pc = 0x1490d8u;
}
