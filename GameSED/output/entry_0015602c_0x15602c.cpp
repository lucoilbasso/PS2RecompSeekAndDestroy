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

// Function: entry_0015602c
// Address: 0x15602c - 0x156030
void entry_0015602c_0x15602c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015602c_0x15602c");
#endif

    ctx->pc = 0x15602cu;

    // 0x15602c: 0x24426080  addiu       $v0, $v0, 0x6080
    ctx->pc = 0x15602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24704));
    ctx->pc = 0x156030u;
}
