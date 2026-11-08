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

// Function: entry_00173130
// Address: 0x173130 - 0x173160
void entry_00173130_0x173130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173130_0x173130");
#endif

    ctx->pc = 0x173130u;

    // 0x173130: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x173130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x173134: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x173134u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x173138: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x173138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17313c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17313cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173140: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x173140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x173144: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x173144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x173148: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x173148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x17314c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x17314cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x173150: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x173150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
    // 0x173154: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x173154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x173158: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x173158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x17315c: 0x0  nop
    ctx->pc = 0x17315cu;
    // NOP
    ctx->pc = 0x173160u;
}
