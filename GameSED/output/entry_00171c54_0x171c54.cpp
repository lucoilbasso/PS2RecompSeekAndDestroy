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

// Function: entry_00171c54
// Address: 0x171c54 - 0x171c58
void entry_00171c54_0x171c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171c54_0x171c54");
#endif

    ctx->pc = 0x171c54u;

    // 0x171c54: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x171c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x171c58u;
}
