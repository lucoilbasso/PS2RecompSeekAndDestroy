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

// Function: entry_0011d024
// Address: 0x11d024 - 0x11d030
void entry_0011d024_0x11d024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d024_0x11d024");
#endif

    ctx->pc = 0x11d024u;

    // 0x11d024: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x11d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x11d028: 0x284200b7  slti        $v0, $v0, 0xB7
    ctx->pc = 0x11d028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)183) ? 1 : 0);
    // 0x11d02c: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x11d02cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->pc = 0x11d030u;
}
