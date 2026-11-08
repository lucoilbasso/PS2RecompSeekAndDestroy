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

// Function: entry_001bc8f4
// Address: 0x1bc8f4 - 0x1bc8f8
void entry_001bc8f4_0x1bc8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc8f4_0x1bc8f4");
#endif

    ctx->pc = 0x1bc8f4u;

    // 0x1bc8f4: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x1bc8f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
    ctx->pc = 0x1bc8f8u;
}
