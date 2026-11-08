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

// Function: entry_00131af0
// Address: 0x131af0 - 0x131af4
void entry_00131af0_0x131af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131af0_0x131af0");
#endif

    ctx->pc = 0x131af0u;

    // 0x131af0: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x131af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    ctx->pc = 0x131af4u;
}
