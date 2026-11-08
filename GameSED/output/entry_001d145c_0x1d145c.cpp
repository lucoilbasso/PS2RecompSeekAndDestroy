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

// Function: entry_001d145c
// Address: 0x1d145c - 0x1d1460
void entry_001d145c_0x1d145c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d145c_0x1d145c");
#endif

    ctx->pc = 0x1d145cu;

    // 0x1d145c: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x1d145cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x1d1460u;
}
