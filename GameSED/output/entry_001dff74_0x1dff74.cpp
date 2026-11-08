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

// Function: entry_001dff74
// Address: 0x1dff74 - 0x1dff98
void entry_001dff74_0x1dff74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dff74_0x1dff74");
#endif

    ctx->pc = 0x1dff74u;

    // 0x1dff74: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1dff74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1dff78: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dff78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1dff7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dff80: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1dff80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1dff84: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1dff84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1dff88: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1dff88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1dff8c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1dff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1dff90: 0xae3001ac  sw          $s0, 0x1AC($s1)
    ctx->pc = 0x1dff90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 16));
    // 0x1dff94: 0x8e2201ac  lw          $v0, 0x1AC($s1)
    ctx->pc = 0x1dff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    ctx->pc = 0x1dff98u;
}
