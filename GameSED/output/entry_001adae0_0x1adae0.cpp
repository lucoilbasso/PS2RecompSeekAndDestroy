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

// Function: entry_001adae0
// Address: 0x1adae0 - 0x1adae8
void entry_001adae0_0x1adae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001adae0_0x1adae0");
#endif

    ctx->pc = 0x1adae0u;

    // 0x1adae0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1adae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1adae4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1adae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x1adae8u;
}
