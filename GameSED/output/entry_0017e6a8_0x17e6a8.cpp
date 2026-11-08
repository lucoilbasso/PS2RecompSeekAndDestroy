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

// Function: entry_0017e6a8
// Address: 0x17e6a8 - 0x17e6ac
void entry_0017e6a8_0x17e6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e6a8_0x17e6a8");
#endif

    ctx->pc = 0x17e6a8u;

    // 0x17e6a8: 0xa5030008  sh          $v1, 0x8($t0)
    ctx->pc = 0x17e6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x17e6acu;
}
