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

// Function: entry_0015743c
// Address: 0x15743c - 0x157440
void entry_0015743c_0x15743c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015743c_0x15743c");
#endif

    ctx->pc = 0x15743cu;

    // 0x15743c: 0x24052118  addiu       $a1, $zero, 0x2118
    ctx->pc = 0x15743cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    ctx->pc = 0x157440u;
}
