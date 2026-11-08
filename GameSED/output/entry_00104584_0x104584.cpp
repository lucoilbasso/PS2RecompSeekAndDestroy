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

// Function: entry_00104584
// Address: 0x104584 - 0x104588
void entry_00104584_0x104584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104584_0x104584");
#endif

    ctx->pc = 0x104584u;

    // 0x104584: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x104584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    ctx->pc = 0x104588u;
}
