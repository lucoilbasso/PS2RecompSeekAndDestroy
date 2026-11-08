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

// Function: entry_001305d4
// Address: 0x1305d4 - 0x1305d8
void entry_001305d4_0x1305d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001305d4_0x1305d4");
#endif

    ctx->pc = 0x1305d4u;

    // 0x1305d4: 0xa602011a  sh          $v0, 0x11A($s0)
    ctx->pc = 0x1305d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 282), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1305d8u;
}
