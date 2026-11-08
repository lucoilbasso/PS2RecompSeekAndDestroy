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

// Function: entry_00197b68
// Address: 0x197b68 - 0x197b6c
void entry_00197b68_0x197b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b68_0x197b68");
#endif

    ctx->pc = 0x197b68u;

    // 0x197b68: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x197b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->pc = 0x197b6cu;
}
