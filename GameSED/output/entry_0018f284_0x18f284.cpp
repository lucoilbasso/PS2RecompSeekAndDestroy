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

// Function: entry_0018f284
// Address: 0x18f284 - 0x18f288
void entry_0018f284_0x18f284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f284_0x18f284");
#endif

    ctx->pc = 0x18f284u;

    // 0x18f284: 0x95020008  lhu         $v0, 0x8($t0)
    ctx->pc = 0x18f284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    ctx->pc = 0x18f288u;
}
