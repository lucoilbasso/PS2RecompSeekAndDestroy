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

// Function: entry_001474c4
// Address: 0x1474c4 - 0x1474c8
void entry_001474c4_0x1474c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001474c4_0x1474c4");
#endif

    ctx->pc = 0x1474c4u;

    // 0x1474c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1474c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x1474c8u;
}
