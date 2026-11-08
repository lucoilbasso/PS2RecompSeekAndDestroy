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

// Function: entry_0011cbf0
// Address: 0x11cbf0 - 0x11cbfc
void entry_0011cbf0_0x11cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cbf0_0x11cbf0");
#endif

    ctx->pc = 0x11cbf0u;

    // 0x11cbf0: 0xdc4a0000  ld          $t2, 0x0($v0)
    ctx->pc = 0x11cbf0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11cbf4: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x11cbf4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11cbf8: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x11cbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    ctx->pc = 0x11cbfcu;
}
