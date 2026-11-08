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

// Function: entry_00104a24
// Address: 0x104a24 - 0x104a28
void entry_00104a24_0x104a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104a24_0x104a24");
#endif

    ctx->pc = 0x104a24u;

    // 0x104a24: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x104a24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x104a28u;
}
