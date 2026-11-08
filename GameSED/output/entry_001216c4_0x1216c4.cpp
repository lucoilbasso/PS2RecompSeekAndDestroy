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

// Function: entry_001216c4
// Address: 0x1216c4 - 0x1216c8
void entry_001216c4_0x1216c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001216c4_0x1216c4");
#endif

    ctx->pc = 0x1216c4u;

    // 0x1216c4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1216c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x1216c8u;
}
