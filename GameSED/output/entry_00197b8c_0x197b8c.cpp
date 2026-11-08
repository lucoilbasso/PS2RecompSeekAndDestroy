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

// Function: entry_00197b8c
// Address: 0x197b8c - 0x197b90
void entry_00197b8c_0x197b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b8c_0x197b8c");
#endif

    ctx->pc = 0x197b8cu;

    // 0x197b8c: 0xaca303f0  sw          $v1, 0x3F0($a1)
    ctx->pc = 0x197b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 3));
    ctx->pc = 0x197b90u;
}
