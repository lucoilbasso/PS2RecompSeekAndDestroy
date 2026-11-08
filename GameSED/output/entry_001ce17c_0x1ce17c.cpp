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

// Function: entry_001ce17c
// Address: 0x1ce17c - 0x1ce180
void entry_001ce17c_0x1ce17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce17c_0x1ce17c");
#endif

    ctx->pc = 0x1ce17cu;

    // 0x1ce17c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ce17cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1ce180u;
}
