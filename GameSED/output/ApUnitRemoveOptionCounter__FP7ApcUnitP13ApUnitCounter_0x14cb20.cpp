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

// Function: ApUnitRemoveOptionCounter__FP7ApcUnitP13ApUnitCounter
// Address: 0x14cb20 - 0x14cba0
void ApUnitRemoveOptionCounter__FP7ApcUnitP13ApUnitCounter_0x14cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitRemoveOptionCounter__FP7ApcUnitP13ApUnitCounter_0x14cb20");
#endif

    switch (ctx->pc) {
        case 0x14cb48u: goto label_14cb48;
        case 0x14cb94u: goto label_14cb94;
        default: break;
    }

    ctx->pc = 0x14cb20u;

    // 0x14cb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cb24: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14cb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cb2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x14cb2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb30: 0x8cc201bc  lw          $v0, 0x1BC($a2)
    ctx->pc = 0x14cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 444)));
    // 0x14cb34: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14CB34u;
    {
        const bool branch_taken_0x14cb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB34u;
        // 0x14cb38: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb34) {
            ctx->pc = 0x14CB94u;
            goto label_14cb94;
        }
    }
    ctx->pc = 0x14CB3Cu;
    // 0x14cb3c: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x14CB3Cu;
    {
        const bool branch_taken_0x14cb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14cb3c) {
            ctx->pc = 0x14CB6Cu;
            goto label_14cb6c;
        }
    }
    ctx->pc = 0x14CB44u;
    // 0x14cb44: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14cb44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cb48:
    // 0x14cb48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14cb4c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14CB4Cu;
    {
        const bool branch_taken_0x14cb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB4Cu;
        // 0x14cb50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb4c) {
            ctx->pc = 0x14CB98u;
            goto label_14cb98;
        }
    }
    ctx->pc = 0x14CB54u;
    // 0x14cb54: 0x0  nop
    ctx->pc = 0x14cb54u;
    // NOP
    // 0x14cb58: 0x0  nop
    ctx->pc = 0x14cb58u;
    // NOP
    // 0x14cb5c: 0x0  nop
    ctx->pc = 0x14cb5cu;
    // NOP
    // 0x14cb60: 0x0  nop
    ctx->pc = 0x14cb60u;
    // NOP
    // 0x14cb64: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x14CB64u;
    {
        const bool branch_taken_0x14cb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x14cb64) {
            ctx->pc = 0x14CB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CB64u;
            // 0x14cb68: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14cb48;
        }
    }
    ctx->pc = 0x14CB6Cu;
label_14cb6c:
    // 0x14cb6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14CB6Cu;
    {
        const bool branch_taken_0x14cb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB6Cu;
        // 0x14cb70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb6c) {
            ctx->pc = 0x14CB98u;
            goto label_14cb98;
        }
    }
    ctx->pc = 0x14CB74u;
    // 0x14cb74: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14CB74u;
    {
        const bool branch_taken_0x14cb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB74u;
        // 0x14cb78: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb74) {
            ctx->pc = 0x14CB88u;
            goto label_14cb88;
        }
    }
    ctx->pc = 0x14CB7Cu;
    // 0x14cb7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14CB7Cu;
    {
        const bool branch_taken_0x14cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB7Cu;
        // 0x14cb80: 0xacc201bc  sw          $v0, 0x1BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cb7c) {
            ctx->pc = 0x14CB8Cu;
            goto label_14cb8c;
        }
    }
    ctx->pc = 0x14CB84u;
    // 0x14cb84: 0x0  nop
    ctx->pc = 0x14cb84u;
    // NOP
label_14cb88:
    // 0x14cb88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_14cb8c:
    // 0x14cb8c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14CB8Cu;
    SET_GPR_U32(ctx, 31, 0x14CB94u);
    ctx->pc = 0x14CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB8Cu;
    // 0x14cb90: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14CB8Cu, 0x14CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB94u;
label_14cb94:
    // 0x14cb94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14cb98:
    // 0x14cb98: 0x3e00008  jr          $ra
    ctx->pc = 0x14CB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CB98u;
        // 0x14cb9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CBA0u;
}
