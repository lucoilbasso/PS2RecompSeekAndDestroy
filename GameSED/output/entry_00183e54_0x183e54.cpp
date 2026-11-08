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

// Function: entry_00183e54
// Address: 0x183e54 - 0x183e58
void entry_00183e54_0x183e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183e54_0x183e54");
#endif

    ctx->pc = 0x183e54u;

    // 0x183e54: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x183e54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x183e58u;
}
