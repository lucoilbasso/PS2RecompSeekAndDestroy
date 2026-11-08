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

// Function: entry_0017d6c4
// Address: 0x17d6c4 - 0x17d6c8
void entry_0017d6c4_0x17d6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d6c4_0x17d6c4");
#endif

    ctx->pc = 0x17d6c4u;

    // 0x17d6c4: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x17d6c8u;
}
