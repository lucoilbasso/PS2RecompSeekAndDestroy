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

// Function: entry_00144a44
// Address: 0x144a44 - 0x144a48
void entry_00144a44_0x144a44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144a44_0x144a44");
#endif

    ctx->pc = 0x144a44u;

    // 0x144a44: 0xae720068  sw          $s2, 0x68($s3)
    ctx->pc = 0x144a44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 18));
    ctx->pc = 0x144a48u;
}
