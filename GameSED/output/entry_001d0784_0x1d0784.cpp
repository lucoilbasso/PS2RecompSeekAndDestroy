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

// Function: entry_001d0784
// Address: 0x1d0784 - 0x1d0788
void entry_001d0784_0x1d0784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0784_0x1d0784");
#endif

    ctx->pc = 0x1d0784u;

    // 0x1d0784: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x1d0784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    ctx->pc = 0x1d0788u;
}
