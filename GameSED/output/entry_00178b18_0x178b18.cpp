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

// Function: entry_00178b18
// Address: 0x178b18 - 0x178b4c
void entry_00178b18_0x178b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178b18_0x178b18");
#endif

    switch (ctx->pc) {
        case 0x178b28u: goto label_178b28;
        default: break;
    }

    ctx->pc = 0x178b18u;

label_178b18:
    // 0x178b18: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x178b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x178b1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x178b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b20: 0xc067210  jal         func_19C840
    ctx->pc = 0x178B20u;
    SET_GPR_U32(ctx, 31, 0x178B28u);
    ctx->pc = 0x178B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B20u;
    // 0x178b24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C840u, 0x178B20u, 0x178B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B28u;
label_178b28:
    // 0x178b28: 0x10540013  beq         $v0, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x178B28u;
    {
        const bool branch_taken_0x178b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x178B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B28u;
        // 0x178b2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b28) {
            ctx->pc = 0x178B78u;
            return;
        }
    }
    ctx->pc = 0x178B30u;
    // 0x178b30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x178b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178b34: 0x2a220028  slti        $v0, $s1, 0x28
    ctx->pc = 0x178b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x178b38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178B38u;
    {
        const bool branch_taken_0x178b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B38u;
        // 0x178b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b38) {
            ctx->pc = 0x178B50u;
            return;
        }
    }
    ctx->pc = 0x178B40u;
    // 0x178b40: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x178b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x178b44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x178B44u;
    {
        const bool branch_taken_0x178b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B44u;
        // 0x178b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b44) {
            ctx->pc = 0x178B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178b18;
        }
    }
    ctx->pc = 0x178B4Cu;
}
