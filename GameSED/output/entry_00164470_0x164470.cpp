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

// Function: entry_00164470
// Address: 0x164470 - 0x164480
void entry_00164470_0x164470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164470_0x164470");
#endif

    ctx->pc = 0x164470u;

    // 0x164470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x164470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164474: 0x26a31180  addiu       $v1, $s5, 0x1180
    ctx->pc = 0x164474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4480));
    // 0x164478: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x164478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16447c: 0x0  nop
    ctx->pc = 0x16447cu;
    // NOP
    ctx->pc = 0x164480u;
}
