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

// Function: entry_0010f100
// Address: 0x10f100 - 0x10f108
void entry_0010f100_0x10f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f100_0x10f100");
#endif

    ctx->pc = 0x10f100u;

    // 0x10f100: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10f104: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x10f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    ctx->pc = 0x10f108u;
}
