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

// Function: checkModelVersion
// Address: 0x1aa4e0 - 0x1aa580
void checkModelVersion_0x1aa4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkModelVersion_0x1aa4e0");
#endif

    switch (ctx->pc) {
        case 0x1aa504u: goto label_1aa504;
        case 0x1aa520u: goto label_1aa520;
        case 0x1aa53cu: goto label_1aa53c;
        case 0x1aa550u: goto label_1aa550;
        case 0x1aa55cu: goto label_1aa55c;
        default: break;
    }

    ctx->pc = 0x1aa4e0u;

    // 0x1aa4e0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1aa4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1aa4e4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1aa4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1aa4e8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1aa4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1aa4ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa4f0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1aa4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1aa4f4: 0x248494b8  addiu       $a0, $a0, -0x6B48
    ctx->pc = 0x1aa4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939832));
    // 0x1aa4f8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1aa4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x1aa4fc: 0xc06ca22  jal         func_1B2888
    ctx->pc = 0x1AA4FCu;
    SET_GPR_U32(ctx, 31, 0x1AA504u);
    ctx->pc = 0x1AA500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA4FCu;
    // 0x1aa500: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2888u, 0x1AA4FCu, 0x1AA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA504u;
label_1aa504:
    // 0x1aa504: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aa504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa508: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA508u;
    {
        const bool branch_taken_0x1aa508 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1AA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA508u;
        // 0x1aa50c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa508) {
            ctx->pc = 0x1AA518u;
            goto label_1aa518;
        }
    }
    ctx->pc = 0x1AA510u;
    // 0x1aa510: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1AA510u;
    {
        const bool branch_taken_0x1aa510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA510u;
        // 0x1aa514: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa510) {
            ctx->pc = 0x1AA568u;
            goto label_1aa568;
        }
    }
    ctx->pc = 0x1AA518u;
label_1aa518:
    // 0x1aa518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA518u;
    {
        const bool branch_taken_0x1aa518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA518u;
        // 0x1aa51c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa518) {
            ctx->pc = 0x1AA524u;
            goto label_1aa524;
        }
    }
    ctx->pc = 0x1AA520u;
label_1aa520:
    // 0x1aa520: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aa520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1aa524:
    // 0x1aa524: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x1aa524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1aa528: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA528u;
    {
        const bool branch_taken_0x1aa528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA528u;
        // 0x1aa52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa528) {
            ctx->pc = 0x1AA548u;
            goto label_1aa548;
        }
    }
    ctx->pc = 0x1AA530u;
    // 0x1aa530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aa530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa534: 0xc06cbb2  jal         func_1B2EC8
    ctx->pc = 0x1AA534u;
    SET_GPR_U32(ctx, 31, 0x1AA53Cu);
    ctx->pc = 0x1AA538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA534u;
    // 0x1aa538: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2EC8u, 0x1AA534u, 0x1AA53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA53Cu;
label_1aa53c:
    // 0x1aa53c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x1aa53cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa540: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AA540u;
    {
        const bool branch_taken_0x1aa540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA540u;
        // 0x1aa544: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa540) {
            ctx->pc = 0x1AA520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa520;
        }
    }
    ctx->pc = 0x1AA548u;
label_1aa548:
    // 0x1aa548: 0xc06cac4  jal         func_1B2B10
    ctx->pc = 0x1AA548u;
    SET_GPR_U32(ctx, 31, 0x1AA550u);
    ctx->pc = 0x1AA54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA548u;
    // 0x1aa54c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B10u, 0x1AA548u, 0x1AA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA550u;
label_1aa550:
    // 0x1aa550: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x1aa550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x1aa554: 0xc073d48  jal         func_1CF520
    ctx->pc = 0x1AA554u;
    SET_GPR_U32(ctx, 31, 0x1AA55Cu);
    ctx->pc = 0x1AA558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA554u;
    // 0x1aa558: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF520u, 0x1AA554u, 0x1AA55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA55Cu;
label_1aa55c:
    // 0x1aa55c: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x1aa55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x1aa560: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x1aa560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x1aa564: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1aa564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1aa568:
    // 0x1aa568: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1aa568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1aa56c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1aa56cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1aa570: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1aa570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1aa574: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1aa574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1aa578: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA578u;
        // 0x1aa57c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA580u;
}
