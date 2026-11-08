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

// Function: entry_0019b670
// Address: 0x19b670 - 0x19b698
void entry_0019b670_0x19b670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b670_0x19b670");
#endif

    ctx->pc = 0x19b670u;

    // 0x19b670: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x19b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x19b674: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x19b674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19b678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19b678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b67c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x19b67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b680: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x19b680u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19b684: 0x2408003a  addiu       $t0, $zero, 0x3A
    ctx->pc = 0x19b684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x19b688: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x19b688u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b68c: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x19b68cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b690: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19b690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b694: 0x0  nop
    ctx->pc = 0x19b694u;
    // NOP
    ctx->pc = 0x19b698u;
}
