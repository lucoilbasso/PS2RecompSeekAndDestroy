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

// Function: entry_0018d0d0
// Address: 0x18d0d0 - 0x18d0d4
void entry_0018d0d0_0x18d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d0d0_0x18d0d0");
#endif

    ctx->pc = 0x18d0d0u;

    // 0x18d0d0: 0x96030244  lhu         $v1, 0x244($s0)
    ctx->pc = 0x18d0d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 580)));
    ctx->pc = 0x18d0d4u;
}
