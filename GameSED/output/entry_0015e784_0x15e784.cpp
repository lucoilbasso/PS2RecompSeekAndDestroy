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

// Function: entry_0015e784
// Address: 0x15e784 - 0x15e788
void entry_0015e784_0x15e784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e784_0x15e784");
#endif

    ctx->pc = 0x15e784u;

    // 0x15e784: 0x24860170  addiu       $a2, $a0, 0x170
    ctx->pc = 0x15e784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    ctx->pc = 0x15e788u;
}
