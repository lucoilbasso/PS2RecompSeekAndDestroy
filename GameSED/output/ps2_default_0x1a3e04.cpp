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

// Function: default
// Address: 0x1a3e04 - 0x1a3e08
void ps2_default_0x1a3e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1a3e04");
#endif

    ctx->pc = 0x1a3e04u;

    // 0x1a3e04: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1a3e04u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x1a3e08u;
}
