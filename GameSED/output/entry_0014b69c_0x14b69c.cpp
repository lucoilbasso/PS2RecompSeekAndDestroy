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

// Function: entry_0014b69c
// Address: 0x14b69c - 0x14b6a8
void entry_0014b69c_0x14b69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b69c_0x14b69c");
#endif

    ctx->pc = 0x14b69cu;

    // 0x14b69c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14b69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6a0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x14b6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b6a4: 0x8ca401bc  lw          $a0, 0x1BC($a1)
    ctx->pc = 0x14b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 444)));
    ctx->pc = 0x14b6a8u;
}
