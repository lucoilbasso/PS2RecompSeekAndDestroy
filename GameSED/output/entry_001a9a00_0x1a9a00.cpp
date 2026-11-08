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

// Function: entry_001a9a00
// Address: 0x1a9a00 - 0x1a9a40
void entry_001a9a00_0x1a9a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9a00_0x1a9a00");
#endif

    switch (ctx->pc) {
        case 0x1a9a30u: goto label_1a9a30;
        default: break;
    }

    ctx->pc = 0x1a9a00u;

    // 0x1a9a00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a9a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a9a04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9a08: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a9a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9a0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9a10: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a9a10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a9a14: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A9A14u;
    {
        const bool branch_taken_0x1a9a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A14u;
        // 0x1a9a18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a14) {
            ctx->pc = 0x1A9A54u;
            return;
        }
    }
    ctx->pc = 0x1A9A1Cu;
    // 0x1a9a1c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x1a9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
    // 0x1a9a20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a9a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9a28: 0xc06a75a  jal         func_1A9D68
    ctx->pc = 0x1A9A28u;
    SET_GPR_U32(ctx, 31, 0x1A9A30u);
    ctx->pc = 0x1A9A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A28u;
    // 0x1a9a2c: 0xae4200e8  sw          $v0, 0xE8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9D68u, 0x1A9A28u, 0x1A9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A30u;
label_1a9a30:
    // 0x1a9a30: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9A30u;
    {
        const bool branch_taken_0x1a9a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1A9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A30u;
        // 0x1a9a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a30) {
            ctx->pc = 0x1A9A40u;
            return;
        }
    }
    ctx->pc = 0x1A9A38u;
    // 0x1a9a38: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A9A38u;
    {
        const bool branch_taken_0x1a9a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A38u;
        // 0x1a9a3c: 0xae5100e0  sw          $s1, 0xE0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a38) {
            ctx->pc = 0x1A9B8Cu;
            return;
        }
    }
    ctx->pc = 0x1A9A40u;
}
