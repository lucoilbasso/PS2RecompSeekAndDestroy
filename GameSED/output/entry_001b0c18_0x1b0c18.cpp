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

// Function: entry_001b0c18
// Address: 0x1b0c18 - 0x1b0c58
void entry_001b0c18_0x1b0c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0c18_0x1b0c18");
#endif

    switch (ctx->pc) {
        case 0x1b0c18u: goto label_1b0c18;
        case 0x1b0c1cu: goto label_1b0c1c;
        case 0x1b0c20u: goto label_1b0c20;
        case 0x1b0c24u: goto label_1b0c24;
        case 0x1b0c28u: goto label_1b0c28;
        case 0x1b0c2cu: goto label_1b0c2c;
        case 0x1b0c30u: goto label_1b0c30;
        case 0x1b0c34u: goto label_1b0c34;
        case 0x1b0c38u: goto label_1b0c38;
        case 0x1b0c3cu: goto label_1b0c3c;
        case 0x1b0c40u: goto label_1b0c40;
        case 0x1b0c44u: goto label_1b0c44;
        case 0x1b0c48u: goto label_1b0c48;
        case 0x1b0c4cu: goto label_1b0c4c;
        case 0x1b0c50u: goto label_1b0c50;
        case 0x1b0c54u: goto label_1b0c54;
        default: break;
    }

    ctx->pc = 0x1b0c18u;

label_1b0c18:
    // 0x1b0c18: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1b0c18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1b0c1c:
    // 0x1b0c1c: 0x8ea2a974  lw          $v0, -0x568C($s5)
    ctx->pc = 0x1b0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945140)));
label_1b0c20:
    // 0x1b0c20: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1b0c20u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1b0c24:
    // 0x1b0c24: 0x40f809  jalr        $v0
label_1b0c28:
    if (ctx->pc == 0x1B0C28u) {
        ctx->pc = 0x1B0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C24u;
        // 0x1b0c28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C2Cu;
        goto label_1b0c2c;
    }
    ctx->pc = 0x1B0C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0C2Cu);
        ctx->pc = 0x1B0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C24u;
        // 0x1b0c28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0C24u, 0x1B0C2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0C2Cu;
label_1b0c2c:
    // 0x1b0c2c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b0c2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0c30:
    // 0x1b0c30: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1b0c34:
    if (ctx->pc == 0x1B0C34u) {
        ctx->pc = 0x1B0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C30u;
        // 0x1b0c34: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C38u;
        goto label_1b0c38;
    }
    ctx->pc = 0x1B0C30u;
    {
        const bool branch_taken_0x1b0c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C30u;
        // 0x1b0c34: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c30) {
            ctx->pc = 0x1B0C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0c18;
        }
    }
    ctx->pc = 0x1B0C38u;
label_1b0c38:
    // 0x1b0c38: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1b0c3c:
    if (ctx->pc == 0x1B0C3Cu) {
        ctx->pc = 0x1B0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C38u;
        // 0x1b0c3c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C40u;
        goto label_1b0c40;
    }
    ctx->pc = 0x1B0C38u;
    {
        const bool branch_taken_0x1b0c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C38u;
        // 0x1b0c3c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c38) {
            ctx->pc = 0x1B0F40u;
            return;
        }
    }
    ctx->pc = 0x1B0C40u;
label_1b0c40:
    // 0x1b0c40: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1b0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1b0c44:
    // 0x1b0c44: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
label_1b0c48:
    if (ctx->pc == 0x1B0C48u) {
        ctx->pc = 0x1B0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C44u;
        // 0x1b0c48: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C4Cu;
        goto label_1b0c4c;
    }
    ctx->pc = 0x1B0C44u;
    {
        const bool branch_taken_0x1b0c44 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C44u;
        // 0x1b0c48: 0x24020068  addiu       $v0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c44) {
            ctx->pc = 0x1B0C58u;
            return;
        }
    }
    ctx->pc = 0x1B0C4Cu;
label_1b0c4c:
    // 0x1b0c4c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1b0c4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1b0c50:
    // 0x1b0c50: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b0c54:
    if (ctx->pc == 0x1B0C54u) {
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C50u;
        // 0x1b0c54: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C58u;
        goto label_fallthrough_0x1b0c50;
    }
    ctx->pc = 0x1B0C50u;
    {
        const bool branch_taken_0x1b0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C50u;
        // 0x1b0c54: 0xde71fff8  ld          $s1, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c50) {
            ctx->pc = 0x1B0C6Cu;
            return;
        }
    }
label_fallthrough_0x1b0c50:
    ctx->pc = 0x1B0C58u;
}
