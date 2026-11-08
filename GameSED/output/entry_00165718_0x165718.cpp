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

// Function: entry_00165718
// Address: 0x165718 - 0x165728
void entry_00165718_0x165718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165718_0x165718");
#endif

    ctx->pc = 0x165718u;

    // 0x165718: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x165718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x16571c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x16571cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165720: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x165720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165724: 0x0  nop
    ctx->pc = 0x165724u;
    // NOP
    ctx->pc = 0x165728u;
}
