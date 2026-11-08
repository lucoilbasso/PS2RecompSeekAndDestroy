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

// Function: entry_001d6398
// Address: 0x1d6398 - 0x1d639c
void entry_001d6398_0x1d6398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6398_0x1d6398");
#endif

    ctx->pc = 0x1d6398u;

    // 0x1d6398: 0x42823  negu        $a1, $a0
    ctx->pc = 0x1d6398u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    ctx->pc = 0x1d639cu;
}
