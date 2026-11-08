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

// Function: entry_001904b4
// Address: 0x1904b4 - 0x1904c4
void entry_001904b4_0x1904b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001904b4_0x1904b4");
#endif

    ctx->pc = 0x1904b4u;

    // 0x1904b4: 0x8d0201d0  lw          $v0, 0x1D0($t0)
    ctx->pc = 0x1904b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 464)));
    // 0x1904b8: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x1904b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1904bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1904c0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1904c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    ctx->pc = 0x1904c4u;
}
