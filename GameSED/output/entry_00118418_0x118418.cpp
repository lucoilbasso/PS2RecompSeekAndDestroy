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

// Function: entry_00118418
// Address: 0x118418 - 0x118438
void entry_00118418_0x118418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118418_0x118418");
#endif

    ctx->pc = 0x118418u;

    // 0x118418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11841c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11841cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118420: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x118420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x118424: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x118424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x118428: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x118428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x11842c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11842cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x118430: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x118430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x118434: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x118434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x118438u;
}
