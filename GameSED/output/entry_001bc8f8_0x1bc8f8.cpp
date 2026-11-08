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

// Function: entry_001bc8f8
// Address: 0x1bc8f8 - 0x1bc8fc
void entry_001bc8f8_0x1bc8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8f8_0x1bc8f8");
#endif

    ctx->pc = 0x1bc8f8u;

    // 0x1bc8f8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1bc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1bc8fcu;
}
