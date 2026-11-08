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

// Function: entry_0018f27c
// Address: 0x18f27c - 0x18f284
void entry_0018f27c_0x18f27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f27c_0x18f27c");
#endif

    ctx->pc = 0x18f27cu;

    // 0x18f27c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x18f27cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x18f280: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x18f280u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    ctx->pc = 0x18f284u;
}
