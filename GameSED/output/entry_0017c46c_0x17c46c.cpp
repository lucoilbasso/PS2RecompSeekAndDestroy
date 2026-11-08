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

// Function: entry_0017c46c
// Address: 0x17c46c - 0x17c470
void entry_0017c46c_0x17c46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c46c_0x17c46c");
#endif

    ctx->pc = 0x17c46cu;

    // 0x17c46c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x17c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x17c470u;
}
