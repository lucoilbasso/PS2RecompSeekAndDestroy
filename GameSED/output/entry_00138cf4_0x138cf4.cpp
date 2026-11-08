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

// Function: entry_00138cf4
// Address: 0x138cf4 - 0x138cf8
void entry_00138cf4_0x138cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138cf4_0x138cf4");
#endif

    ctx->pc = 0x138cf4u;

    // 0x138cf4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x138cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    ctx->pc = 0x138cf8u;
}
