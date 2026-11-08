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

// Function: entry_001ad5c0
// Address: 0x1ad5c0 - 0x1ad66c
void entry_001ad5c0_0x1ad5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad5c0_0x1ad5c0");
#endif

    switch (ctx->pc) {
        case 0x1ad5e4u: goto label_1ad5e4;
        case 0x1ad610u: goto label_1ad610;
        case 0x1ad624u: goto label_1ad624;
        case 0x1ad62cu: goto label_1ad62c;
        case 0x1ad638u: goto label_1ad638;
        case 0x1ad654u: goto label_1ad654;
        default: break;
    }

    ctx->pc = 0x1ad5c0u;

label_1ad5c0:
    // 0x1ad5c0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ad5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ad5c4: 0x2d38023  subu        $s0, $s6, $s3
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1ad5c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ad5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ad5cc: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1ad5ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ad5d0: 0x3b28821  addu        $s1, $sp, $s2
    ctx->pc = 0x1ad5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1ad5d4: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1ad5d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ad5d8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1ad5d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1ad5dc: 0xc06ba48  jal         func_1AE920
    ctx->pc = 0x1AD5DCu;
    SET_GPR_U32(ctx, 31, 0x1AD5E4u);
    ctx->pc = 0x1AD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD5DCu;
    // 0x1ad5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE920u, 0x1AD5DCu, 0x1AD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD5E4u;
label_1ad5e4:
    // 0x1ad5e4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ad5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ad5e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ad5e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5ec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ad5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad5f0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ad5f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ad5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ad5f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ad5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1ad5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1ad600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad604: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ad604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad608: 0xc06b8a0  jal         func_1AE280
    ctx->pc = 0x1AD608u;
    SET_GPR_U32(ctx, 31, 0x1AD610u);
    ctx->pc = 0x1AD60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD608u;
    // 0x1ad60c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE280u, 0x1AD608u, 0x1AD610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD610u;
label_1ad610:
    // 0x1ad610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad61c: 0xc06ba80  jal         func_1AEA00
    ctx->pc = 0x1AD61Cu;
    SET_GPR_U32(ctx, 31, 0x1AD624u);
    ctx->pc = 0x1AD620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD61Cu;
    // 0x1ad620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA00u, 0x1AD61Cu, 0x1AD624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD624u;
label_1ad624:
    // 0x1ad624: 0xc06ba4c  jal         func_1AE930
    ctx->pc = 0x1AD624u;
    SET_GPR_U32(ctx, 31, 0x1AD62Cu);
    ctx->pc = 0x1AD628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD624u;
    // 0x1ad628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE930u, 0x1AD624u, 0x1AD62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD62Cu;
label_1ad62c:
    // 0x1ad62c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad630: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1AD630u;
    SET_GPR_U32(ctx, 31, 0x1AD638u);
    ctx->pc = 0x1AD634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD630u;
    // 0x1ad634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1AD630u, 0x1AD638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD638u;
label_1ad638:
    // 0x1ad638: 0x3d29021  addu        $s2, $fp, $s2
    ctx->pc = 0x1ad638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x1ad63c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ad63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad640: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1ad640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ad644: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1ad644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ad648: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x1ad648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x1ad64c: 0xc06b14e  jal         func_1AC538
    ctx->pc = 0x1AD64Cu;
    SET_GPR_U32(ctx, 31, 0x1AD654u);
    ctx->pc = 0x1AD650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD64Cu;
    // 0x1ad650: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC538u, 0x1AD64Cu, 0x1AD654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD654u;
label_1ad654:
    // 0x1ad654: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1ad654u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1ad658: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x1ad658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1ad65c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1AD65Cu;
    {
        const bool branch_taken_0x1ad65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD65Cu;
        // 0x1ad660: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad65c) {
            ctx->pc = 0x1AD5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad5c0;
        }
    }
    ctx->pc = 0x1AD664u;
    // 0x1ad664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD664u;
    {
        const bool branch_taken_0x1ad664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD664u;
        // 0x1ad668: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad664) {
            ctx->pc = 0x1AD674u;
            return;
        }
    }
    ctx->pc = 0x1AD66Cu;
}
