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

// Function: entry_0015bdb0
// Address: 0x15bdb0 - 0x15bdc4
void entry_0015bdb0_0x15bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bdb0_0x15bdb0");
#endif

    ctx->pc = 0x15bdb0u;

    // 0x15bdb0: 0x26c200a0  addiu       $v0, $s6, 0xA0
    ctx->pc = 0x15bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
    // 0x15bdb4: 0x26c4ff60  addiu       $a0, $s6, -0xA0
    ctx->pc = 0x15bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967136));
    // 0x15bdb8: 0x39230004  xori        $v1, $t1, 0x4
    ctx->pc = 0x15bdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)4);
    // 0x15bdbc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x15bdbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdc0: 0x26f50120  addiu       $s5, $s7, 0x120
    ctx->pc = 0x15bdc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 288));
    ctx->pc = 0x15bdc4u;
}
