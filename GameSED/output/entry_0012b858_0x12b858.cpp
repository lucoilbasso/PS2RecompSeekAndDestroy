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

// Function: entry_0012b858
// Address: 0x12b858 - 0x12b878
void entry_0012b858_0x12b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b858_0x12b858");
#endif

    ctx->pc = 0x12b858u;

    // 0x12b858: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x12b858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x12b85c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x12b85cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b860: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12b860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b864: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12b864u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b868: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x12b868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x12b86c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x12b86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x12b870: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x12b870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b874: 0x0  nop
    ctx->pc = 0x12b874u;
    // NOP
    ctx->pc = 0x12b878u;
}
