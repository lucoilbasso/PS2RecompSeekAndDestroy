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

// Function: entry_00139c94
// Address: 0x139c94 - 0x139cb8
void entry_00139c94_0x139c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139c94_0x139c94");
#endif

    ctx->pc = 0x139c94u;

    // 0x139c94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x139c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x139c98: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x139c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139c9c: 0xacb20010  sw          $s2, 0x10($a1)
    ctx->pc = 0x139c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 18));
    // 0x139ca0: 0xacd30018  sw          $s3, 0x18($a2)
    ctx->pc = 0x139ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 19));
    // 0x139ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139cac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139cb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x139cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x139cb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x139cb8u;
}
