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

// Function: entry_0017aab4
// Address: 0x17aab4 - 0x17aadc
void entry_0017aab4_0x17aab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aab4_0x17aab4");
#endif

    ctx->pc = 0x17aab4u;

    // 0x17aab4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x17aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17aab8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x17aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17aabc: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x17aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x17aac0: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x17aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x17aac4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x17aac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17aac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aacc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17aad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17aad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aad4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17aad8: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    ctx->pc = 0x17aadcu;
}
