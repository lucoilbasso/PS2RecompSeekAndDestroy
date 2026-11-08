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

// Function: entry_00198fe0
// Address: 0x198fe0 - 0x198fe4
void entry_00198fe0_0x198fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198fe0_0x198fe0");
#endif

    ctx->pc = 0x198fe0u;

    // 0x198fe0: 0x3c036c22  lui         $v1, 0x6C22
    ctx->pc = 0x198fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27682 << 16));
    ctx->pc = 0x198fe4u;
}
