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

// Function: entry_0018ccd0
// Address: 0x18ccd0 - 0x18ccd4
void entry_0018ccd0_0x18ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ccd0_0x18ccd0");
#endif

    ctx->pc = 0x18ccd0u;

    // 0x18ccd0: 0xa6320000  sh          $s2, 0x0($s1)
    ctx->pc = 0x18ccd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 18));
    ctx->pc = 0x18ccd4u;
}
