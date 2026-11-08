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

// Function: entry_00198614
// Address: 0x198614 - 0x198618
void entry_00198614_0x198614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198614_0x198614");
#endif

    ctx->pc = 0x198614u;

    // 0x198614: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x198614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    ctx->pc = 0x198618u;
}
