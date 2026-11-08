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

// Function: entry_001a18fc
// Address: 0x1a18fc - 0x1a1900
void entry_001a18fc_0x1a18fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a18fc_0x1a18fc");
#endif

    ctx->pc = 0x1a18fcu;

    // 0x1a18fc: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1a18fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x1a1900u;
}
