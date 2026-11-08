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

// Function: entry_00171fe4
// Address: 0x171fe4 - 0x1720d0
void entry_00171fe4_0x171fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171fe4_0x171fe4");
#endif

    switch (ctx->pc) {
        case 0x172000u: goto label_172000;
        case 0x172008u: goto label_172008;
        case 0x17201cu: goto label_17201c;
        case 0x172028u: goto label_172028;
        case 0x172034u: goto label_172034;
        case 0x172044u: goto label_172044;
        case 0x172068u: goto label_172068;
        case 0x17207cu: goto label_17207c;
        case 0x172088u: goto label_172088;
        case 0x172098u: goto label_172098;
        case 0x1720a4u: goto label_1720a4;
        case 0x1720b4u: goto label_1720b4;
        case 0x1720c0u: goto label_1720c0;
        default: break;
    }

    ctx->pc = 0x171fe4u;

    // 0x171fe4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x171fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x171fe8: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x171fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x171fec: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x171fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x171ff0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x171ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x171ff4: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x171ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x171ff8: 0xc06bad2  jal         func_1AEB48
    ctx->pc = 0x171FF8u;
    SET_GPR_U32(ctx, 31, 0x172000u);
    ctx->pc = 0x171FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FF8u;
    // 0x171ffc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB48u, 0x171FF8u, 0x172000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172000u;
label_172000:
    // 0x172000: 0xc06bad6  jal         func_1AEB58
    ctx->pc = 0x172000u;
    SET_GPR_U32(ctx, 31, 0x172008u);
    ctx->pc = 0x172004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172000u;
    // 0x172004: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB58u, 0x172000u, 0x172008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172008u;
label_172008:
    // 0x172008: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x172008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x17200c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17200cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172014: 0xc06bb2c  jal         func_1AECB0
    ctx->pc = 0x172014u;
    SET_GPR_U32(ctx, 31, 0x17201Cu);
    ctx->pc = 0x172018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172014u;
    // 0x172018: 0x24a52300  addiu       $a1, $a1, 0x2300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AECB0u, 0x172014u, 0x17201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17201Cu;
label_17201c:
    // 0x17201c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172020: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172020u;
    SET_GPR_U32(ctx, 31, 0x172028u);
    ctx->pc = 0x172024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172020u;
    // 0x172024: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172020u, 0x172028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172028u;
label_172028:
    // 0x172028: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x172028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x17202c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17202Cu;
    SET_GPR_U32(ctx, 31, 0x172034u);
    ctx->pc = 0x172030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17202Cu;
    // 0x172030: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17202Cu, 0x172034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172034u;
label_172034:
    // 0x172034: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x172034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x172038: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17203c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17203Cu;
    SET_GPR_U32(ctx, 31, 0x172044u);
    ctx->pc = 0x172040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17203Cu;
    // 0x172040: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17203Cu, 0x172044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172044u;
label_172044:
    // 0x172044: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x172044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x172048: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x172048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17204c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17204cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x172050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172058: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x172058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17205c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x17205cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172060: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x172060u;
    SET_GPR_U32(ctx, 31, 0x172068u);
    ctx->pc = 0x172064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172060u;
    // 0x172064: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x172060u, 0x172068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172068u;
label_172068:
    // 0x172068: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x172068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x17206c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17206cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172070: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x172070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x172074: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172074u;
    SET_GPR_U32(ctx, 31, 0x17207Cu);
    ctx->pc = 0x172078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172074u;
    // 0x172078: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172074u, 0x17207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17207Cu;
label_17207c:
    // 0x17207c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x17207cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172080: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x172080u;
    SET_GPR_U32(ctx, 31, 0x172088u);
    ctx->pc = 0x172084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172080u;
    // 0x172084: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x172080u, 0x172088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172088u;
label_172088:
    // 0x172088: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x172088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x17208c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17208cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172090: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172090u;
    SET_GPR_U32(ctx, 31, 0x172098u);
    ctx->pc = 0x172094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172090u;
    // 0x172094: 0x34a5015a  ori         $a1, $a1, 0x15A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)346);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172090u, 0x172098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172098u;
label_172098:
    // 0x172098: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x172098u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17209c: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x17209Cu;
    SET_GPR_U32(ctx, 31, 0x1720A4u);
    ctx->pc = 0x1720A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17209Cu;
    // 0x1720a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x17209Cu, 0x1720A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720A4u;
label_1720a4:
    // 0x1720a4: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x1720a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x1720a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1720a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720ac: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1720ACu;
    SET_GPR_U32(ctx, 31, 0x1720B4u);
    ctx->pc = 0x1720B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1720ACu;
    // 0x1720b0: 0x34a502ad  ori         $a1, $a1, 0x2AD (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)685);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1720ACu, 0x1720B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720B4u;
label_1720b4:
    // 0x1720b4: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1720b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1720b8: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x1720B8u;
    SET_GPR_U32(ctx, 31, 0x1720C0u);
    ctx->pc = 0x1720BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1720B8u;
    // 0x1720bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x1720B8u, 0x1720C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720C0u;
label_1720c0:
    // 0x1720c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1720c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1720c4: 0x18400167  blez        $v0, . + 4 + (0x167 << 2)
    ctx->pc = 0x1720C4u;
    {
        const bool branch_taken_0x1720c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1720C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720C4u;
        // 0x1720c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720c4) {
            ctx->pc = 0x172664u;
            return;
        }
    }
    ctx->pc = 0x1720CCu;
    // 0x1720cc: 0x0  nop
    ctx->pc = 0x1720ccu;
    // NOP
    ctx->pc = 0x1720d0u;
}
