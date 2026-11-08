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

// Function: entry_001d44c0
// Address: 0x1d44c0 - 0x1d44f4
void entry_001d44c0_0x1d44c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d44c0_0x1d44c0");
#endif

    ctx->pc = 0x1d44c0u;

    // 0x1d44c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d44c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d44c8: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1d44c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d44cc: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x1d44ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x1d44d0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d44d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1d44d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1d44d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d44dc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1d44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1d44e0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1d44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1d44e4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1d44e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1d44e8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1d44e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1d44ec: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1d44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1d44f0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1d44f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    ctx->pc = 0x1d44f4u;
}
