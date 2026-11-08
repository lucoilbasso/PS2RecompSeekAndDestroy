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

// Function: entry_0019decc
// Address: 0x19decc - 0x19ded0
void entry_0019decc_0x19decc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019decc_0x19decc");
#endif

    ctx->pc = 0x19deccu;

    // 0x19decc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x19deccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x19ded0u;
}
