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

// Function: entry_00126f70
// Address: 0x126f70 - 0x126f88
void entry_00126f70_0x126f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126f70_0x126f70");
#endif

    ctx->pc = 0x126f70u;

    // 0x126f70: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x126f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x126f74: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x126f74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x126f78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x126f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126f80: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x126f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x126f84: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x126f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x126f88u;
}
