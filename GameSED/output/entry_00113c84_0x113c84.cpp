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

// Function: entry_00113c84
// Address: 0x113c84 - 0x113cbc
void entry_00113c84_0x113c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c84_0x113c84");
#endif

    ctx->pc = 0x113c84u;

    // 0x113c84: 0x8f829124  lw          $v0, -0x6EDC($gp)
    ctx->pc = 0x113c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x113c88: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x113c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x113c8c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x113c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x113c90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113c94: 0x3c010026  lui         $at, 0x26
    ctx->pc = 0x113c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)38 << 16));
    // 0x113c98: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x113c98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x113c9c: 0xac230730  sw          $v1, 0x730($at)
    ctx->pc = 0x113c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1840), GPR_U32(ctx, 3));
    // 0x113ca0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x113CA0u;
    {
        const bool branch_taken_0x113ca0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CA0u;
        // 0x113ca4: 0xaf849124  sw          $a0, -0x6EDC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938916), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ca0) {
            ctx->pc = 0x113CBCu;
            return;
        }
    }
    ctx->pc = 0x113CA8u;
    // 0x113ca8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113cac: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x113cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x113cb0: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x113cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x113cb4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x113cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x113cb8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x113cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x113cbcu;
}
