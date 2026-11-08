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

// Function: entry_0017fb68
// Address: 0x17fb68 - 0x17fb70
void entry_0017fb68_0x17fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fb68_0x17fb68");
#endif

    ctx->pc = 0x17fb68u;

    // 0x17fb68: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x17fb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x17fb6c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x17fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x17fb70u;
}
