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

// Function: entry_0015a488
// Address: 0x15a488 - 0x15a4b8
void entry_0015a488_0x15a488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a488_0x15a488");
#endif

    ctx->pc = 0x15a488u;

    // 0x15a488: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x15a488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x15a48c: 0x26700da0  addiu       $s0, $s3, 0xDA0
    ctx->pc = 0x15a48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3488));
    // 0x15a490: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x15a490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x15a494: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x15a494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15a498: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x15a498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x15a49c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x15a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x15a4a0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x15a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x15a4a4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x15a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x15a4a8: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x15a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x15a4ac: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x15a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x15a4b0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x15a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x15a4b4: 0x0  nop
    ctx->pc = 0x15a4b4u;
    // NOP
    ctx->pc = 0x15a4b8u;
}
