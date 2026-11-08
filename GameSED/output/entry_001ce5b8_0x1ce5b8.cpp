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

// Function: entry_001ce5b8
// Address: 0x1ce5b8 - 0x1ce5bc
void entry_001ce5b8_0x1ce5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce5b8_0x1ce5b8");
#endif

    ctx->pc = 0x1ce5b8u;

    // 0x1ce5b8: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x1ce5b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
    ctx->pc = 0x1ce5bcu;
}
