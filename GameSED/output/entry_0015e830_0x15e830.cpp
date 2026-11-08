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

// Function: entry_0015e830
// Address: 0x15e830 - 0x15e834
void entry_0015e830_0x15e830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e830_0x15e830");
#endif

    ctx->pc = 0x15e830u;

    // 0x15e830: 0x28a22000  slti        $v0, $a1, 0x2000
    ctx->pc = 0x15e830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8192) ? 1 : 0);
    ctx->pc = 0x15e834u;
}
