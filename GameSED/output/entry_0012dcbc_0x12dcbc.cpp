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

// Function: entry_0012dcbc
// Address: 0x12dcbc - 0x12dcc0
void entry_0012dcbc_0x12dcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dcbc_0x12dcbc");
#endif

    ctx->pc = 0x12dcbcu;

    // 0x12dcbc: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x12dcbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    ctx->pc = 0x12dcc0u;
}
