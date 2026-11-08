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

// Function: entry_0019ac28
// Address: 0x19ac28 - 0x19ac48
void entry_0019ac28_0x19ac28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ac28_0x19ac28");
#endif

    ctx->pc = 0x19ac28u;

    // 0x19ac28: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x19AC28u;
    {
        const bool branch_taken_0x19ac28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC28u;
        // 0x19ac2c: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac28) {
            ctx->pc = 0x19AC48u;
            return;
        }
    }
    ctx->pc = 0x19AC30u;
    // 0x19ac30: 0x4830006  bgezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AC30u;
    {
        const bool branch_taken_0x19ac30 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x19ac30) {
            ctx->pc = 0x19AC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AC30u;
            // 0x19ac34: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC4Cu;
            return;
        }
    }
    ctx->pc = 0x19AC38u;
    // 0x19ac38: 0x41023  negu        $v0, $a0
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x19ac3c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x19ac3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ac40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19AC40u;
    {
        const bool branch_taken_0x19ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC40u;
        // 0x19ac44: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac40) {
            ctx->pc = 0x19AC50u;
            return;
        }
    }
    ctx->pc = 0x19AC48u;
}
