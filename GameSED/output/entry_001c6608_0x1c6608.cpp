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

// Function: entry_001c6608
// Address: 0x1c6608 - 0x1c660c
void entry_001c6608_0x1c6608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6608_0x1c6608");
#endif

    ctx->pc = 0x1c6608u;

    // 0x1c6608: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1c6608u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    ctx->pc = 0x1c660cu;
}
