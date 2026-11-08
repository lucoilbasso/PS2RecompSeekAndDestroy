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

// Function: entry_00118da4
// Address: 0x118da4 - 0x118db0
void entry_00118da4_0x118da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118da4_0x118da4");
#endif

    ctx->pc = 0x118da4u;

    // 0x118da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118da8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x118da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x118db0u;
}
