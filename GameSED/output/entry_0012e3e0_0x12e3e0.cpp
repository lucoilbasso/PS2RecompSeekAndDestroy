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

// Function: entry_0012e3e0
// Address: 0x12e3e0 - 0x12e3f8
void entry_0012e3e0_0x12e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e3e0_0x12e3e0");
#endif

    ctx->pc = 0x12e3e0u;

    // 0x12e3e0: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x12e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x12e3e4: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x12e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x12e3e8: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x12e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x12e3ec: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x12e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x12e3f0: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x12e3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x12e3f4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x12e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    ctx->pc = 0x12e3f8u;
}
