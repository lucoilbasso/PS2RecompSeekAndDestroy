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

// Function: entry_001d2bf8
// Address: 0x1d2bf8 - 0x1d2c08
void entry_001d2bf8_0x1d2bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2bf8_0x1d2bf8");
#endif

    ctx->pc = 0x1d2bf8u;

    // 0x1d2bf8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1d2bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1d2bfc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1d2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1d2c00: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1d2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1d2c04: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x1d2c04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d2c08u;
}
