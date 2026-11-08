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

// Function: entry_00106d18
// Address: 0x106d18 - 0x106d1c
void entry_00106d18_0x106d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d18_0x106d18");
#endif

    ctx->pc = 0x106d18u;

    // 0x106d18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x106d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    ctx->pc = 0x106d1cu;
}
