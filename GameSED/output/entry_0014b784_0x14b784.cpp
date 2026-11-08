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

// Function: entry_0014b784
// Address: 0x14b784 - 0x14b788
void entry_0014b784_0x14b784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b784_0x14b784");
#endif

    ctx->pc = 0x14b784u;

    // 0x14b784: 0x2623fffb  addiu       $v1, $s1, -0x5
    ctx->pc = 0x14b784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
    ctx->pc = 0x14b788u;
}
