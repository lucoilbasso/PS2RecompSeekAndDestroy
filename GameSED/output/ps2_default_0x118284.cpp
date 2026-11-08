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
// Address: 0x118284 - 0x1182ac
void ps2_default_0x118284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x118284");
#endif

    ctx->pc = 0x118284u;

    // 0x118284: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x118284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x118288: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x118288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x11828c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11828cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x118290: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x118290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x118294: 0x8484c0a8  lh          $a0, -0x3F58($a0)
    ctx->pc = 0x118294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294951080)));
    // 0x118298: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x118298u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11829c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1182a0: 0x284202a  slt         $a0, $s4, $a0
    ctx->pc = 0x1182a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1182a4: 0x1480ffd2  bnez        $a0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1182A4u;
    {
        const bool branch_taken_0x1182a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1182A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182A4u;
        // 0x1182a8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182a4) {
            ctx->pc = 0x1181F0u;
            return;
        }
    }
    ctx->pc = 0x1182ACu;
}
