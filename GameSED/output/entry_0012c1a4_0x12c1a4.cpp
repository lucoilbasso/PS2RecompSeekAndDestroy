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

// Function: entry_0012c1a4
// Address: 0x12c1a4 - 0x12c1ac
void entry_0012c1a4_0x12c1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c1a4_0x12c1a4");
#endif

    ctx->pc = 0x12c1a4u;

    // 0x12c1a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c1a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x12c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x12c1acu;
}
