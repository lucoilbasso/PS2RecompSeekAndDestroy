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

// Function: entry_00118a24
// Address: 0x118a24 - 0x118a2c
void entry_00118a24_0x118a24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118a24_0x118a24");
#endif

    ctx->pc = 0x118a24u;

    // 0x118a24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x118a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x118a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x118a2cu;
}
