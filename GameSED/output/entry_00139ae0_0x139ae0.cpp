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

// Function: entry_00139ae0
// Address: 0x139ae0 - 0x139af8
void entry_00139ae0_0x139ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139ae0_0x139ae0");
#endif

    ctx->pc = 0x139ae0u;

    // 0x139ae0: 0xacb20010  sw          $s2, 0x10($a1)
    ctx->pc = 0x139ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 18));
    // 0x139ae4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x139ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x139ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139aec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x139aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x139af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139af4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x139af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x139af8u;
}
