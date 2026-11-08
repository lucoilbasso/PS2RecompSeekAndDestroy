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

// Function: entry_00144940
// Address: 0x144940 - 0x144954
void entry_00144940_0x144940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144940_0x144940");
#endif

    ctx->pc = 0x144940u;

    // 0x144940: 0xae72007c  sw          $s2, 0x7C($s3)
    ctx->pc = 0x144940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 18));
    // 0x144944: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x144944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144948: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x144948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14494c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x14494cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144950: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x144950u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x144954u;
}
