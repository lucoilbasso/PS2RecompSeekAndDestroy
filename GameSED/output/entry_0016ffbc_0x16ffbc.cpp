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

// Function: entry_0016ffbc
// Address: 0x16ffbc - 0x16ffc0
void entry_0016ffbc_0x16ffbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ffbc_0x16ffbc");
#endif

    ctx->pc = 0x16ffbcu;

    // 0x16ffbc: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x16ffbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    ctx->pc = 0x16ffc0u;
}
