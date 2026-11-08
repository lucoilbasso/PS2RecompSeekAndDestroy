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

// Function: entry_00113e78
// Address: 0x113e78 - 0x113eb0
void entry_00113e78_0x113e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113e78_0x113e78");
#endif

    ctx->pc = 0x113e78u;

    // 0x113e78: 0x41827  nor         $v1, $zero, $a0
    ctx->pc = 0x113e78u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x113e7c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x113e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x113e80: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x113e80u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x113e84: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x113e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x113e88: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x113e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x113e8c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x113e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x113e90: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x113e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x113e94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x113e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x113e98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x113e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x113e9c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x113e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x113ea0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x113EA0u;
    {
        const bool branch_taken_0x113ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EA0u;
        // 0x113ea4: 0x94440012  lhu         $a0, 0x12($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ea0) {
            ctx->pc = 0x113EB0u;
            return;
        }
    }
    ctx->pc = 0x113EA8u;
    // 0x113ea8: 0x94420016  lhu         $v0, 0x16($v0)
    ctx->pc = 0x113ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x113eac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x113eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->pc = 0x113eb0u;
}
