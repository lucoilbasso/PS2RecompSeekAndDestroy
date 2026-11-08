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

// Function: entry_0011e538
// Address: 0x11e538 - 0x11e53c
void entry_0011e538_0x11e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e538_0x11e538");
#endif

    ctx->pc = 0x11e538u;

    // 0x11e538: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x11e538u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x11e53cu;
}
