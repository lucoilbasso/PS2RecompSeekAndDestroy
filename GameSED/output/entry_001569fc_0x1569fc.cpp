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

// Function: entry_001569fc
// Address: 0x1569fc - 0x156a00
void entry_001569fc_0x1569fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001569fc_0x1569fc");
#endif

    ctx->pc = 0x1569fcu;

    // 0x1569fc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1569fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    ctx->pc = 0x156a00u;
}
