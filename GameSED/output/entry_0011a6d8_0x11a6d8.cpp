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

// Function: entry_0011a6d8
// Address: 0x11a6d8 - 0x11a6dc
void entry_0011a6d8_0x11a6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a6d8_0x11a6d8");
#endif

    ctx->pc = 0x11a6d8u;

    // 0x11a6d8: 0x2652002c  addiu       $s2, $s2, 0x2C
    ctx->pc = 0x11a6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    ctx->pc = 0x11a6dcu;
}
