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

// Function: entry_00189370
// Address: 0x189370 - 0x189378
void entry_00189370_0x189370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189370_0x189370");
#endif

    ctx->pc = 0x189370u;

    // 0x189370: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x189374: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x189374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
    ctx->pc = 0x189378u;
}
