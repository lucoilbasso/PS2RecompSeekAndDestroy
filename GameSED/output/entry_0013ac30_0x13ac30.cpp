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

// Function: entry_0013ac30
// Address: 0x13ac30 - 0x13ac50
void entry_0013ac30_0x13ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ac30_0x13ac30");
#endif

    ctx->pc = 0x13ac30u;

    // 0x13ac30: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x13ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x13ac34: 0xac930010  sw          $s3, 0x10($a0)
    ctx->pc = 0x13ac34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 19));
    // 0x13ac38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ac38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ac3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ac3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ac40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13ac40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ac44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13ac44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ac48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13ac48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ac4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13ac4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x13ac50u;
}
