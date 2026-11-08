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

// Function: entry_001d64f8
// Address: 0x1d64f8 - 0x1d64fc
void entry_001d64f8_0x1d64f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d64f8_0x1d64f8");
#endif

    ctx->pc = 0x1d64f8u;

    // 0x1d64f8: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x1d64f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d64fcu;
}
