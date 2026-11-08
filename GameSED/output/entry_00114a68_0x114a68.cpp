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

// Function: entry_00114a68
// Address: 0x114a68 - 0x114a6c
void entry_00114a68_0x114a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114a68_0x114a68");
#endif

    ctx->pc = 0x114a68u;

    // 0x114a68: 0x26253610  addiu       $a1, $s1, 0x3610
    ctx->pc = 0x114a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 13840));
    ctx->pc = 0x114a6cu;
}
