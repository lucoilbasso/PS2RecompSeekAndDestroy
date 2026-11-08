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

// Function: entry_00117758
// Address: 0x117758 - 0x1177c8
void entry_00117758_0x117758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117758_0x117758");
#endif

    switch (ctx->pc) {
        case 0x117770u: goto label_117770;
        case 0x11777cu: goto label_11777c;
        case 0x11778cu: goto label_11778c;
        case 0x117798u: goto label_117798;
        default: break;
    }

    ctx->pc = 0x117758u;

    // 0x117758: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x117758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x11775c: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x11775cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x117760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117764: 0x2610d1c0  addiu       $s0, $s0, -0x2E40
    ctx->pc = 0x117764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955456));
    // 0x117768: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117768u;
    SET_GPR_U32(ctx, 31, 0x117770u);
    ctx->pc = 0x11776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117768u;
    // 0x11776c: 0x24a5d1d0  addiu       $a1, $a1, -0x2E30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117768u, 0x117770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117770u;
label_117770:
    // 0x117770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117774: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117774u;
    SET_GPR_U32(ctx, 31, 0x11777Cu);
    ctx->pc = 0x117778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117774u;
    // 0x117778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117774u, 0x11777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11777Cu;
label_11777c:
    // 0x11777c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11777cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x117780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117784: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117784u;
    SET_GPR_U32(ctx, 31, 0x11778Cu);
    ctx->pc = 0x117788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117784u;
    // 0x117788: 0x24a54638  addiu       $a1, $a1, 0x4638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117784u, 0x11778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11778Cu;
label_11778c:
    // 0x11778c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11778cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117790: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117790u;
    SET_GPR_U32(ctx, 31, 0x117798u);
    ctx->pc = 0x117794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117790u;
    // 0x117794: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117790u, 0x117798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117798u;
label_117798:
    // 0x117798: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x117798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x11779c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11779cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1177a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1177a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1177a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1177a8: 0x24a54650  addiu       $a1, $a1, 0x4650
    ctx->pc = 0x1177a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18000));
    // 0x1177ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1177acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1177b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1177b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1177b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1177b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1177b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1177b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1177bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1177bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1177c0: 0x8063764  j           func_18DD90
    ctx->pc = 0x1177C0u;
    ctx->pc = 0x1177C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177C0u;
    // 0x1177c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    WTxPanelPrintf__FP9WcTxPanelPce_0x18dd90(rdram, ctx, runtime); return;
    ctx->pc = 0x1177C8u;
}
