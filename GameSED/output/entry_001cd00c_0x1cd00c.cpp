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

// Function: entry_001cd00c
// Address: 0x1cd00c - 0x1cd010
void entry_001cd00c_0x1cd00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd00c_0x1cd00c");
#endif

    ctx->pc = 0x1cd00cu;

    // 0x1cd00c: 0x24510c78  addiu       $s1, $v0, 0xC78
    ctx->pc = 0x1cd00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3192));
    ctx->pc = 0x1cd010u;
}
