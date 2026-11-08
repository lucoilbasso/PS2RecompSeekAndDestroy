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

// Function: entry_0010e9b8
// Address: 0x10e9b8 - 0x10e9d4
void entry_0010e9b8_0x10e9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e9b8_0x10e9b8");
#endif

    ctx->pc = 0x10e9b8u;

    // 0x10e9b8: 0xae7001ac  sw          $s0, 0x1AC($s3)
    ctx->pc = 0x10e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 16));
    // 0x10e9bc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x10e9c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10e9c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10e9c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10e9cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x10e9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10e9d0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x10e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x10e9d4u;
}
