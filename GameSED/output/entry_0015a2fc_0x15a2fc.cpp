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

// Function: entry_0015a2fc
// Address: 0x15a2fc - 0x15a300
void entry_0015a2fc_0x15a2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a2fc_0x15a2fc");
#endif

    ctx->pc = 0x15a2fcu;

    // 0x15a2fc: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x15a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x15a300u;
}
