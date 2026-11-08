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

// Function: entry_001cbc8c
// Address: 0x1cbc8c - 0x1cbc90
void entry_001cbc8c_0x1cbc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbc8c_0x1cbc8c");
#endif

    ctx->pc = 0x1cbc8cu;

    // 0x1cbc8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1cbc90u;
}
