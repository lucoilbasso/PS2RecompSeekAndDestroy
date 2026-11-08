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

// Function: entry_001901c4
// Address: 0x1901c4 - 0x1901c8
void entry_001901c4_0x1901c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001901c4_0x1901c4");
#endif

    ctx->pc = 0x1901c4u;

    // 0x1901c4: 0x24040086  addiu       $a0, $zero, 0x86
    ctx->pc = 0x1901c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    ctx->pc = 0x1901c8u;
}
