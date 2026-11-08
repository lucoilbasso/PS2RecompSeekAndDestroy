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

// Function: entry_00126200
// Address: 0x126200 - 0x126210
void entry_00126200_0x126200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126200_0x126200");
#endif

    ctx->pc = 0x126200u;

    // 0x126200: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x126200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x126204: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x126204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x126208: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x126208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x12620c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x12620cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    ctx->pc = 0x126210u;
}
