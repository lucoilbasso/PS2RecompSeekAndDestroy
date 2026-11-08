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

// Function: entry_001a01fc
// Address: 0x1a01fc - 0x1a0200
void entry_001a01fc_0x1a01fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a01fc_0x1a01fc");
#endif

    ctx->pc = 0x1a01fcu;

    // 0x1a01fc: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x1a01fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    ctx->pc = 0x1a0200u;
}
