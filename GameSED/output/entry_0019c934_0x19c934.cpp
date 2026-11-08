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

// Function: entry_0019c934
// Address: 0x19c934 - 0x19c938
void entry_0019c934_0x19c934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c934_0x19c934");
#endif

    ctx->pc = 0x19c934u;

    // 0x19c934: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x19c934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    ctx->pc = 0x19c938u;
}
