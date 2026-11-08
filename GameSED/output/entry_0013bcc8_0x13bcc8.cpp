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

// Function: entry_0013bcc8
// Address: 0x13bcc8 - 0x13bce4
void entry_0013bcc8_0x13bcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bcc8_0x13bcc8");
#endif

    ctx->pc = 0x13bcc8u;

    // 0x13bcc8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x13bcc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bccc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x13bcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13bcd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13bcd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13bcd4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x13bcd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bcd8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x13bcd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13bcdc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x13bcdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bce0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x13bce0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    ctx->pc = 0x13bce4u;
}
