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

// Function: entry_001e0024
// Address: 0x1e0024 - 0x1e0044
void entry_001e0024_0x1e0024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0024_0x1e0024");
#endif

    ctx->pc = 0x1e0024u;

    // 0x1e0024: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e0024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0028: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e0028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e002c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e002cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e0030: 0xae7001ac  sw          $s0, 0x1AC($s3)
    ctx->pc = 0x1e0030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 16));
    // 0x1e0034: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1e0034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1e0038: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1e0038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1e003c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1e003cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1e0040: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e0040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1e0044u;
}
