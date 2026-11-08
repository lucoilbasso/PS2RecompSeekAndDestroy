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

// Function: entry_0017f368
// Address: 0x17f368 - 0x17f3a8
void entry_0017f368_0x17f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f368_0x17f368");
#endif

    ctx->pc = 0x17f368u;

    // 0x17f368: 0x95240000  lhu         $a0, 0x0($t1)
    ctx->pc = 0x17f368u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x17f36c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17f36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x17f370: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x17f370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f374: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17f374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f37c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x17f37cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f380: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x17f380u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x17f384: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F384u;
    {
        const bool branch_taken_0x17f384 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F384u;
        // 0x17f388: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f384) {
            ctx->pc = 0x17F3A8u;
            return;
        }
    }
    ctx->pc = 0x17F38Cu;
    // 0x17f38c: 0x95240002  lhu         $a0, 0x2($t1)
    ctx->pc = 0x17f38cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x17f390: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x17f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17f394: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17f394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17f398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17f398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17f39c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x17f39cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f3a0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x17f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x17f3a4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x17f3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    ctx->pc = 0x17f3a8u;
}
