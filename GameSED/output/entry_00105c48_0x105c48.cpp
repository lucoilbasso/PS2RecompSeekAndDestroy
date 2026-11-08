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

// Function: entry_00105c48
// Address: 0x105c48 - 0x105c4c
void entry_00105c48_0x105c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105c48_0x105c48");
#endif

    ctx->pc = 0x105c48u;

    // 0x105c48: 0xa2320003  sb          $s2, 0x3($s1)
    ctx->pc = 0x105c48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 18));
    ctx->pc = 0x105c4cu;
}
