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

// Function: entry_001416a4
// Address: 0x1416a4 - 0x1416a8
void entry_001416a4_0x1416a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001416a4_0x1416a4");
#endif

    ctx->pc = 0x1416a4u;

    // 0x1416a4: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1416a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    ctx->pc = 0x1416a8u;
}
