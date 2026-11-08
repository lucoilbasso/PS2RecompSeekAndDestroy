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

// Function: entry_0014c110
// Address: 0x14c110 - 0x14c138
void entry_0014c110_0x14c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c110_0x14c110");
#endif

    ctx->pc = 0x14c110u;

label_14c110:
    // 0x14c110: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x14c110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14c114:
    // 0x14c114: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x14c114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_14c118:
    // 0x14c118: 0x10d20007  beq         $a2, $s2, . + 4 + (0x7 << 2)
label_14c11c:
    if (ctx->pc == 0x14C11Cu) {
        ctx->pc = 0x14C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C118u;
        // 0x14c11c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C120u;
        goto label_14c120;
    }
    ctx->pc = 0x14C118u;
    {
        const bool branch_taken_0x14c118 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x14C11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C118u;
        // 0x14c11c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c118) {
            ctx->pc = 0x14C138u;
            return;
        }
    }
    ctx->pc = 0x14C120u;
label_14c120:
    // 0x14c120: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x14c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_14c124:
    // 0x14c124: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x14c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_14c128:
    // 0x14c128: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14c128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14c12c:
    // 0x14c12c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14c130:
    // 0x14c130: 0x60f809  jalr        $v1
label_14c134:
    if (ctx->pc == 0x14C134u) {
        ctx->pc = 0x14C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C130u;
        // 0x14c134: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C138u;
        goto label_fallthrough_0x14c130;
    }
    ctx->pc = 0x14C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14C138u);
        ctx->pc = 0x14C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C130u;
        // 0x14c134: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C130u, 0x14C138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14c130:
    ctx->pc = 0x14C138u;
}
