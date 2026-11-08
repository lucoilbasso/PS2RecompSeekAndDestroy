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

// Function: entry_00104728
// Address: 0x104728 - 0x104730
void entry_00104728_0x104728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104728_0x104728");
#endif

    ctx->pc = 0x104728u;

    // 0x104728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10472c: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x10472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->pc = 0x104730u;
}
