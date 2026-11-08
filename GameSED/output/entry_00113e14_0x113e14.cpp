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

// Function: entry_00113e14
// Address: 0x113e14 - 0x113e38
void entry_00113e14_0x113e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113e14_0x113e14");
#endif

    ctx->pc = 0x113e14u;

    // 0x113e14: 0x16200018  bnez        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x113E14u;
    {
        const bool branch_taken_0x113e14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x113E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E14u;
        // 0x113e18: 0x8f858d10  lw          $a1, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e14) {
            ctx->pc = 0x113E78u;
            return;
        }
    }
    ctx->pc = 0x113E1Cu;
    // 0x113e1c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x113e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x113e20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x113e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113e24: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x113E24u;
    {
        const bool branch_taken_0x113e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x113E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E24u;
        // 0x113e28: 0x8c450020  lw          $a1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e24) {
            ctx->pc = 0x113E38u;
            return;
        }
    }
    ctx->pc = 0x113E2Cu;
    // 0x113e2c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x113e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x113e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113E30u;
    {
        const bool branch_taken_0x113e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E30u;
        // 0x113e34: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e30) {
            ctx->pc = 0x113E3Cu;
            return;
        }
    }
    ctx->pc = 0x113E38u;
}
