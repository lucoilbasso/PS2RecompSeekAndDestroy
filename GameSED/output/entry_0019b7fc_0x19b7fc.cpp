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

// Function: entry_0019b7fc
// Address: 0x19b7fc - 0x19b800
void entry_0019b7fc_0x19b7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b7fc_0x19b7fc");
#endif

    ctx->pc = 0x19b7fcu;

    // 0x19b7fc: 0xa0a20017  sb          $v0, 0x17($a1)
    ctx->pc = 0x19b7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x19b800u;
}
