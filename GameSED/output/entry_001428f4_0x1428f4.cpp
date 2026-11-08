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

// Function: entry_001428f4
// Address: 0x1428f4 - 0x1428f8
void entry_001428f4_0x1428f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001428f4_0x1428f4");
#endif

    ctx->pc = 0x1428f4u;

    // 0x1428f4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1428f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    ctx->pc = 0x1428f8u;
}
