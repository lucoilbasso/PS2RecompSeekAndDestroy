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

// Function: entry_001300a8
// Address: 0x1300a8 - 0x1300c0
void entry_001300a8_0x1300a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001300a8_0x1300a8");
#endif

    ctx->pc = 0x1300a8u;

    // 0x1300a8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1300a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1300ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1300acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1300b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300b4: 0x25230040  addiu       $v1, $t1, 0x40
    ctx->pc = 0x1300b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x1300b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1300b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300bc: 0x0  nop
    ctx->pc = 0x1300bcu;
    // NOP
    ctx->pc = 0x1300c0u;
}
