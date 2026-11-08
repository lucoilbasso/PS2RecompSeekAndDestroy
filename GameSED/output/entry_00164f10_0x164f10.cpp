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

// Function: entry_00164f10
// Address: 0x164f10 - 0x164f20
void entry_00164f10_0x164f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164f10_0x164f10");
#endif

    ctx->pc = 0x164f10u;

    // 0x164f10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x164f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164f14: 0x26031258  addiu       $v1, $s0, 0x1258
    ctx->pc = 0x164f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4696));
    // 0x164f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x164f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164f1c: 0x0  nop
    ctx->pc = 0x164f1cu;
    // NOP
    ctx->pc = 0x164f20u;
}
