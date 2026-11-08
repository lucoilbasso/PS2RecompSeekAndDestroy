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

// Function: entry_001d1820
// Address: 0x1d1820 - 0x1d1824
void entry_001d1820_0x1d1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1820_0x1d1820");
#endif

    ctx->pc = 0x1d1820u;

    // 0x1d1820: 0x83a201d0  lb          $v0, 0x1D0($sp)
    ctx->pc = 0x1d1820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 464)));
    ctx->pc = 0x1d1824u;
}
