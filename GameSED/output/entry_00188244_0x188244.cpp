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

// Function: entry_00188244
// Address: 0x188244 - 0x188248
void entry_00188244_0x188244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188244_0x188244");
#endif

    ctx->pc = 0x188244u;

    // 0x188244: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x188244u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    ctx->pc = 0x188248u;
}
