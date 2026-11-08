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

// Function: default
// Address: 0x1180c4 - 0x1180ec
void ps2_default_0x1180c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x1180c4");
#endif

    ctx->pc = 0x1180c4u;

    // 0x1180c4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1180c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1180c8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1180c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1180cc: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1180ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1180d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1180d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1180d4: 0x8484c0a8  lh          $a0, -0x3F58($a0)
    ctx->pc = 0x1180d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294951080)));
    // 0x1180d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1180d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1180dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1180dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1180e0: 0x224202a  slt         $a0, $s1, $a0
    ctx->pc = 0x1180e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1180e4: 0x1480ffbc  bnez        $a0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1180E4u;
    {
        const bool branch_taken_0x1180e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1180E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180E4u;
        // 0x1180e8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180e4) {
            ctx->pc = 0x117FD8u;
            return;
        }
    }
    ctx->pc = 0x1180ECu;
}
