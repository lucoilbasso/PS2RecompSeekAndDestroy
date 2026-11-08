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

// Function: entry_00164024
// Address: 0x164024 - 0x1640a8
void entry_00164024_0x164024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164024_0x164024");
#endif

    switch (ctx->pc) {
        case 0x164030u: goto label_164030;
        case 0x16403cu: goto label_16403c;
        case 0x164044u: goto label_164044;
        case 0x164060u: goto label_164060;
        case 0x16406cu: goto label_16406c;
        case 0x164088u: goto label_164088;
        case 0x164094u: goto label_164094;
        case 0x16409cu: goto label_16409c;
        default: break;
    }

    ctx->pc = 0x164024u;

    // 0x164024: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x164024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x164028: 0xc043b48  jal         func_10ED20
    ctx->pc = 0x164028u;
    SET_GPR_U32(ctx, 31, 0x164030u);
    ctx->pc = 0x16402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164028u;
    // 0x16402c: 0x120f02d  daddu       $fp, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ED20u, 0x164028u, 0x164030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164030u;
label_164030:
    // 0x164030: 0x24041846  addiu       $a0, $zero, 0x1846
    ctx->pc = 0x164030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
    // 0x164034: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x164034u;
    SET_GPR_U32(ctx, 31, 0x16403Cu);
    ctx->pc = 0x164038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164034u;
    // 0x164038: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x164034u, 0x16403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16403Cu;
label_16403c:
    // 0x16403c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x16403Cu;
    SET_GPR_U32(ctx, 31, 0x164044u);
    ctx->pc = 0x164040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16403Cu;
    // 0x164040: 0x24041b00  addiu       $a0, $zero, 0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x16403Cu, 0x164044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164044u;
label_164044:
    // 0x164044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x164044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164048: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x164048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x16404c: 0x2442f300  addiu       $v0, $v0, -0xD00
    ctx->pc = 0x16404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963968));
    // 0x164050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164054: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x164054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x164058: 0xc0583be  jal         func_160EF8
    ctx->pc = 0x164058u;
    SET_GPR_U32(ctx, 31, 0x164060u);
    ctx->pc = 0x16405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164058u;
    // 0x16405c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160EF8u, 0x164058u, 0x164060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164060u;
label_164060:
    // 0x164060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164064: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x164064u;
    SET_GPR_U32(ctx, 31, 0x16406Cu);
    ctx->pc = 0x164068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164064u;
    // 0x164068: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x164064u, 0x16406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16406Cu;
label_16406c:
    // 0x16406c: 0xaeb30c00  sw          $s3, 0xC00($s5)
    ctx->pc = 0x16406cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3072), GPR_U32(ctx, 19));
    // 0x164070: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x164070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164074: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x164074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164078: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x164078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16407c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16407cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164080: 0xc0658a2  jal         func_196288
    ctx->pc = 0x164080u;
    SET_GPR_U32(ctx, 31, 0x164088u);
    ctx->pc = 0x164084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164080u;
    // 0x164084: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196288u, 0x164080u, 0x164088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164088u;
label_164088:
    // 0x164088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16408c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x16408Cu;
    SET_GPR_U32(ctx, 31, 0x164094u);
    ctx->pc = 0x164090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16408Cu;
    // 0x164090: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x16408Cu, 0x164094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164094u;
label_164094:
    // 0x164094: 0xc05843a  jal         func_1610E8
    ctx->pc = 0x164094u;
    SET_GPR_U32(ctx, 31, 0x16409Cu);
    ctx->pc = 0x164098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164094u;
    // 0x164098: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1610E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1610E8u, 0x164094u, 0x16409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16409Cu;
label_16409c:
    // 0x16409c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1640A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16409Cu;
        // 0x1640a0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16409c) {
            ctx->pc = 0x164448u;
            return;
        }
    }
    ctx->pc = 0x1640A4u;
    // 0x1640a4: 0x0  nop
    ctx->pc = 0x1640a4u;
    // NOP
    ctx->pc = 0x1640a8u;
}
