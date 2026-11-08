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

// Function: entry_00113f1c
// Address: 0x113f1c - 0x113f40
void entry_00113f1c_0x113f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113f1c_0x113f1c");
#endif

    ctx->pc = 0x113f1cu;

    // 0x113f1c: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x113f1cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x113f20: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x113f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113f24: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x113f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113f28: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x113f28u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x113f2c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x113f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x113f30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x113f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x113f34: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x113f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x113f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113f3c: 0x94440020  lhu         $a0, 0x20($v0)
    ctx->pc = 0x113f3cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->pc = 0x113f40u;
}
