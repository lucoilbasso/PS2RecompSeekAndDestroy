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

// Function: entry_001d1c84
// Address: 0x1d1c84 - 0x1d1c88
void entry_001d1c84_0x1d1c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1c84_0x1d1c84");
#endif

    ctx->pc = 0x1d1c84u;

    // 0x1d1c84: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x1d1c84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    ctx->pc = 0x1d1c88u;
}
