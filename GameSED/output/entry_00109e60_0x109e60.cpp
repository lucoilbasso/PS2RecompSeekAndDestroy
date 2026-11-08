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

// Function: entry_00109e60
// Address: 0x109e60 - 0x109e6c
void entry_00109e60_0x109e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109e60_0x109e60");
#endif

    ctx->pc = 0x109e60u;

    // 0x109e60: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x109e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x109e64: 0xa7a00040  sh          $zero, 0x40($sp)
    ctx->pc = 0x109e64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x109e68: 0xa7a00042  sh          $zero, 0x42($sp)
    ctx->pc = 0x109e68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x109e6cu;
}
