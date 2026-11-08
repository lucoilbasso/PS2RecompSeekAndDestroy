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

// Function: entry_0017d1c8
// Address: 0x17d1c8 - 0x17d1cc
void entry_0017d1c8_0x17d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d1c8_0x17d1c8");
#endif

    ctx->pc = 0x17d1c8u;

    // 0x17d1c8: 0x8d100014  lw          $s0, 0x14($t0)
    ctx->pc = 0x17d1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    ctx->pc = 0x17d1ccu;
}
