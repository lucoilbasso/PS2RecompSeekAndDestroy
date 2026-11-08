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

// Function: entry_001ca6c4
// Address: 0x1ca6c4 - 0x1ca6cc
void entry_001ca6c4_0x1ca6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca6c4_0x1ca6c4");
#endif

    ctx->pc = 0x1ca6c4u;

    // 0x1ca6c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ca6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ca6c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ca6c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x1ca6ccu;
}
