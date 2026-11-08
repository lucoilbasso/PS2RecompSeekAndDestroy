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

// Function: entry_00179f60
// Address: 0x179f60 - 0x179fa4
void entry_00179f60_0x179f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179f60_0x179f60");
#endif

    switch (ctx->pc) {
        case 0x179f84u: goto label_179f84;
        default: break;
    }

    ctx->pc = 0x179f60u;

label_179f60:
    // 0x179f60: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x179f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x179f64: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x179f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179f68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x179F68u;
    {
        const bool branch_taken_0x179f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F68u;
        // 0x179f6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f68) {
            ctx->pc = 0x179FA4u;
            return;
        }
    }
    ctx->pc = 0x179F70u;
    // 0x179f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f74: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x179f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x179f78: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x179f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f7c: 0xc067210  jal         func_19C840
    ctx->pc = 0x179F7Cu;
    SET_GPR_U32(ctx, 31, 0x179F84u);
    ctx->pc = 0x179F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F7Cu;
    // 0x179f80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C840u, 0x179F7Cu, 0x179F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179F84u;
label_179f84:
    // 0x179f84: 0x5456fff6  bnel        $v0, $s6, . + 4 + (-0xA << 2)
    ctx->pc = 0x179F84u;
    {
        const bool branch_taken_0x179f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x179f84) {
            ctx->pc = 0x179F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179F84u;
            // 0x179f88: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179f60;
        }
    }
    ctx->pc = 0x179F8Cu;
    // 0x179f8c: 0x16a20006  bne         $s5, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179F8Cu;
    {
        const bool branch_taken_0x179f8c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x179F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F8Cu;
        // 0x179f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f8c) {
            ctx->pc = 0x179FA8u;
            return;
        }
    }
    ctx->pc = 0x179F94u;
    // 0x179f94: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x179f94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x179f98: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x179f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x179f9c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x179F9Cu;
    {
        const bool branch_taken_0x179f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F9Cu;
        // 0x179fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f9c) {
            ctx->pc = 0x179FA8u;
            return;
        }
    }
    ctx->pc = 0x179FA4u;
}
