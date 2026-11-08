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

// Function: entry_001684fc
// Address: 0x1684fc - 0x168500
void entry_001684fc_0x1684fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001684fc_0x1684fc");
#endif

    ctx->pc = 0x1684fcu;

    // 0x1684fc: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x1684fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->pc = 0x168500u;
}
