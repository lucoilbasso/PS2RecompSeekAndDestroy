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

// Function: entry_0013779c
// Address: 0x13779c - 0x1377a0
void entry_0013779c_0x13779c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013779c_0x13779c");
#endif

    ctx->pc = 0x13779cu;

    // 0x13779c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x13779cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->pc = 0x1377a0u;
}
