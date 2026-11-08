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

// Function: entry_001d2c54
// Address: 0x1d2c54 - 0x1d2c60
void entry_001d2c54_0x1d2c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2c54_0x1d2c54");
#endif

    ctx->pc = 0x1d2c54u;

    // 0x1d2c54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d2c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d2c58: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1d2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1d2c5c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1d2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1d2c60u;
}
