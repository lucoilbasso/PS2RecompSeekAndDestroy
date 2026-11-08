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

// Function: entry_00179030
// Address: 0x179030 - 0x179048
void entry_00179030_0x179030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179030_0x179030");
#endif

    ctx->pc = 0x179030u;

    // 0x179030: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x179030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179034: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x179034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x179038: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x179038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17903c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x17903cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x179040: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x179040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179044: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x179044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    ctx->pc = 0x179048u;
}
