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

// Function: entry_001b96c8
// Address: 0x1b96c8 - 0x1b96f8
void entry_001b96c8_0x1b96c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b96c8_0x1b96c8");
#endif

    ctx->pc = 0x1b96c8u;

    // 0x1b96c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b96c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b96cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b96ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b96d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b96d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b96d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96d8: 0x2470d600  addiu       $s0, $v1, -0x2A00
    ctx->pc = 0x1b96d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956544));
    // 0x1b96dc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b96dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b96e0: 0xac62d600  sw          $v0, -0x2A00($v1)
    ctx->pc = 0x1b96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956544), GPR_U32(ctx, 2));
    // 0x1b96e4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1b96e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b96e8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1b96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1b96ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b96ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96f0: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1b96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x1b96f4: 0x0  nop
    ctx->pc = 0x1b96f4u;
    // NOP
    ctx->pc = 0x1b96f8u;
}
