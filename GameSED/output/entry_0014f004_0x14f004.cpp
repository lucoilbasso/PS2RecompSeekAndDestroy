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

// Function: entry_0014f004
// Address: 0x14f004 - 0x14f008
void entry_0014f004_0x14f004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f004_0x14f004");
#endif

    ctx->pc = 0x14f004u;

    // 0x14f004: 0xae00081c  sw          $zero, 0x81C($s0)
    ctx->pc = 0x14f004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2076), GPR_U32(ctx, 0));
    ctx->pc = 0x14f008u;
}
