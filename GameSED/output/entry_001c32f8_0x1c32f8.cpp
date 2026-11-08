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

// Function: entry_001c32f8
// Address: 0x1c32f8 - 0x1c3300
void entry_001c32f8_0x1c32f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c32f8_0x1c32f8");
#endif

    ctx->pc = 0x1c32f8u;

    // 0x1c32f8: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x1c32f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1c32fc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1c32fcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1c3300u;
}
