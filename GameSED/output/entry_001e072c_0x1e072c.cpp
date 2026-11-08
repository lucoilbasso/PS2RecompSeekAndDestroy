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

// Function: entry_001e072c
// Address: 0x1e072c - 0x1e0798
void entry_001e072c_0x1e072c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e072c_0x1e072c");
#endif

    switch (ctx->pc) {
        case 0x1e0754u: goto label_1e0754;
        case 0x1e075cu: goto label_1e075c;
        case 0x1e0764u: goto label_1e0764;
        case 0x1e0780u: goto label_1e0780;
        case 0x1e078cu: goto label_1e078c;
        default: break;
    }

    ctx->pc = 0x1e072cu;

    // 0x1e072c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0730: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e0730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e0734: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1e0734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e0738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e073c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1e073cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1e0740: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e0740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e0744: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E0744u;
    {
        const bool branch_taken_0x1e0744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0744u;
        // 0x1e0748: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0744) {
            ctx->pc = 0x1E0798u;
            return;
        }
    }
    ctx->pc = 0x1E074Cu;
    // 0x1e074c: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1E074Cu;
    SET_GPR_U32(ctx, 31, 0x1E0754u);
    ctx->pc = 0x1E0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E074Cu;
    // 0x1e0750: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1E074Cu, 0x1E0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0754u;
label_1e0754:
    // 0x1e0754: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1E0754u;
    SET_GPR_U32(ctx, 31, 0x1E075Cu);
    ctx->pc = 0x1E0758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0754u;
    // 0x1e0758: 0x24040346  addiu       $a0, $zero, 0x346 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1E0754u, 0x1E075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E075Cu;
label_1e075c:
    // 0x1e075c: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1E075Cu;
    SET_GPR_U32(ctx, 31, 0x1E0764u);
    ctx->pc = 0x1E0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E075Cu;
    // 0x1e0760: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1E075Cu, 0x1E0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0764u;
label_1e0764:
    // 0x1e0764: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1e0764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e076c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1e076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1e0770: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x1e0770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x1e0774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0778: 0xc06586e  jal         func_1961B8
    ctx->pc = 0x1E0778u;
    SET_GPR_U32(ctx, 31, 0x1E0780u);
    ctx->pc = 0x1E077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0778u;
    // 0x1e077c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1961B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1961B8u, 0x1E0778u, 0x1E0780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0780u;
label_1e0780:
    // 0x1e0780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0784: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1E0784u;
    SET_GPR_U32(ctx, 31, 0x1E078Cu);
    ctx->pc = 0x1E0788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0784u;
    // 0x1e0788: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1E0784u, 0x1E078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E078Cu;
label_1e078c:
    // 0x1e078c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1e078cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1e0790: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x1E0790u;
    SET_GPR_U32(ctx, 31, 0x1E0798u);
    ctx->pc = 0x1E0794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0790u;
    // 0x1e0794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x1E0790u, 0x1E0798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0798u;
}
