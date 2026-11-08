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

// Function: entry_00113c20
// Address: 0x113c20 - 0x113c50
void entry_00113c20_0x113c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c20_0x113c20");
#endif

    ctx->pc = 0x113c20u;

    // 0x113c20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x113c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x113c24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x113c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113c2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x113c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x113c30: 0x8f839124  lw          $v1, -0x6EDC($gp)
    ctx->pc = 0x113c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938916)));
    // 0x113c34: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x113c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x113c38: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x113C38u;
    {
        const bool branch_taken_0x113c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x113C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C38u;
        // 0x113c3c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c38) {
            ctx->pc = 0x113C84u;
            return;
        }
    }
    ctx->pc = 0x113C40u;
    // 0x113c40: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x113c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x113c44: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x113c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x113c48: 0x24430730  addiu       $v1, $v0, 0x730
    ctx->pc = 0x113c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
    // 0x113c4c: 0x0  nop
    ctx->pc = 0x113c4cu;
    // NOP
    ctx->pc = 0x113c50u;
}
