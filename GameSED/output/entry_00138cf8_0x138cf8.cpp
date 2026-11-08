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

// Function: entry_00138cf8
// Address: 0x138cf8 - 0x138cfc
void entry_00138cf8_0x138cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138cf8_0x138cf8");
#endif

    ctx->pc = 0x138cf8u;

    // 0x138cf8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x138cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    ctx->pc = 0x138cfcu;
}
