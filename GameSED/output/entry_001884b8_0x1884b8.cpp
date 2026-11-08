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

// Function: entry_001884b8
// Address: 0x1884b8 - 0x1884e0
void entry_001884b8_0x1884b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001884b8_0x1884b8");
#endif

    ctx->pc = 0x1884b8u;

    // 0x1884b8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x1884b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x1884bc: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x1884bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1884c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1884c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1884c4: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x1884c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
    // 0x1884c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1884c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1884cc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1884ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1884d0: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1884d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1884d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1884d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1884d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1884d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1884dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1884dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x1884e0u;
}
