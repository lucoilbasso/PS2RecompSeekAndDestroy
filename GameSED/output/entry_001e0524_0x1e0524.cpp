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

// Function: entry_001e0524
// Address: 0x1e0524 - 0x1e0590
void entry_001e0524_0x1e0524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0524_0x1e0524");
#endif

    switch (ctx->pc) {
        case 0x1e054cu: goto label_1e054c;
        case 0x1e0554u: goto label_1e0554;
        case 0x1e055cu: goto label_1e055c;
        case 0x1e0578u: goto label_1e0578;
        case 0x1e0584u: goto label_1e0584;
        default: break;
    }

    ctx->pc = 0x1e0524u;

    // 0x1e0524: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0528: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e0528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e052c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0530: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0534: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1e0534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1e0538: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e053c: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E053Cu;
    {
        const bool branch_taken_0x1e053c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E053Cu;
        // 0x1e0540: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e053c) {
            ctx->pc = 0x1E0590u;
            return;
        }
    }
    ctx->pc = 0x1E0544u;
    // 0x1e0544: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1E0544u;
    SET_GPR_U32(ctx, 31, 0x1E054Cu);
    ctx->pc = 0x1E0548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0544u;
    // 0x1e0548: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1E0544u, 0x1E054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E054Cu;
label_1e054c:
    // 0x1e054c: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1E054Cu;
    SET_GPR_U32(ctx, 31, 0x1E0554u);
    ctx->pc = 0x1E0550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E054Cu;
    // 0x1e0550: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1E054Cu, 0x1E0554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0554u;
label_1e0554:
    // 0x1e0554: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1E0554u;
    SET_GPR_U32(ctx, 31, 0x1E055Cu);
    ctx->pc = 0x1E0558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0554u;
    // 0x1e0558: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1E0554u, 0x1E055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E055Cu;
label_1e055c:
    // 0x1e055c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0564: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e0564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e0568: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x1e0568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x1e056c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e056cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0570: 0xc06586e  jal         func_1961B8
    ctx->pc = 0x1E0570u;
    SET_GPR_U32(ctx, 31, 0x1E0578u);
    ctx->pc = 0x1E0574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0570u;
    // 0x1e0574: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x1E0570u, 0x1E0578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0578u;
label_1e0578:
    // 0x1e0578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e057c: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1E057Cu;
    SET_GPR_U32(ctx, 31, 0x1E0584u);
    ctx->pc = 0x1E0580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E057Cu;
    // 0x1e0580: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1E057Cu, 0x1E0584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0584u;
label_1e0584:
    // 0x1e0584: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1e0584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1e0588: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1E0588u;
    SET_GPR_U32(ctx, 31, 0x1E0590u);
    ctx->pc = 0x1E058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0588u;
    // 0x1e058c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1E0588u, 0x1E0590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0590u;
}
