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

// Function: entry_00176150
// Address: 0x176150 - 0x176154
void entry_00176150_0x176150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176150_0x176150");
#endif

    ctx->pc = 0x176150u;

    // 0x176150: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x176150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x176154u;
}
