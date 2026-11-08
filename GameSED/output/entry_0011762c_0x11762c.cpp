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

// Function: entry_0011762c
// Address: 0x11762c - 0x117738
void entry_0011762c_0x11762c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011762c_0x11762c");
#endif

    switch (ctx->pc) {
        case 0x117638u: goto label_117638;
        case 0x11764cu: goto label_11764c;
        case 0x11769cu: goto label_11769c;
        case 0x1176b8u: goto label_1176b8;
        case 0x1176c4u: goto label_1176c4;
        case 0x1176dcu: goto label_1176dc;
        case 0x1176e8u: goto label_1176e8;
        case 0x117700u: goto label_117700;
        case 0x11770cu: goto label_11770c;
        default: break;
    }

    ctx->pc = 0x11762cu;

    // 0x11762c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11762cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117630: 0xc063a94  jal         func_18EA50
    ctx->pc = 0x117630u;
    SET_GPR_U32(ctx, 31, 0x117638u);
    ctx->pc = 0x117634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117630u;
    // 0x117634: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA50u, 0x117630u, 0x117638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117638u;
label_117638:
    // 0x117638: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x117638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x11763c: 0x24a5d1b0  addiu       $a1, $a1, -0x2E50
    ctx->pc = 0x11763cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955440));
    // 0x117640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117644: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117644u;
    SET_GPR_U32(ctx, 31, 0x11764Cu);
    ctx->pc = 0x117648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117644u;
    // 0x117648: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117644u, 0x11764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11764Cu;
label_11764c:
    // 0x11764c: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x11764cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x117650: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x117650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x117654: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x117654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x117658: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11765c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11765cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x117660: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x117660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x117664: 0x249533b0  addiu       $s5, $a0, 0x33B0
    ctx->pc = 0x117664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 13232));
    // 0x117668: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x117668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11766c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x11766cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x117670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x117670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x117674: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x117674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117678: 0x298c0  sll         $s3, $v0, 3
    ctx->pc = 0x117678u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11767c: 0x264a021  addu        $s4, $s3, $a0
    ctx->pc = 0x11767cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x117680: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x117680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x117684: 0x1045002c  beq         $v0, $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x117684u;
    {
        const bool branch_taken_0x117684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x117688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117684u;
        // 0x117688: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117684) {
            ctx->pc = 0x117738u;
            return;
        }
    }
    ctx->pc = 0x11768Cu;
    // 0x11768c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x117690: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x117690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x117694: 0xc041882  jal         func_106208
    ctx->pc = 0x117694u;
    SET_GPR_U32(ctx, 31, 0x11769Cu);
    ctx->pc = 0x117698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117694u;
    // 0x117698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x117694u, 0x11769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11769Cu;
label_11769c:
    // 0x11769c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1176a0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1176a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1176a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1176a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1176a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1176a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1176ac: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x1176acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x1176b0: 0xc041882  jal         func_106208
    ctx->pc = 0x1176B0u;
    SET_GPR_U32(ctx, 31, 0x1176B8u);
    ctx->pc = 0x1176B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176B0u;
    // 0x1176b4: 0x2610d1c0  addiu       $s0, $s0, -0x2E40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1176B0u, 0x1176B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176B8u;
label_1176b8:
    // 0x1176b8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1176b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1176bc: 0xc041882  jal         func_106208
    ctx->pc = 0x1176BCu;
    SET_GPR_U32(ctx, 31, 0x1176C4u);
    ctx->pc = 0x1176C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176BCu;
    // 0x1176c0: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1176BCu, 0x1176C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176C4u;
label_1176c4:
    // 0x1176c4: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1176c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1176c8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1176c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1176cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1176ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176d0: 0x24a5d1b8  addiu       $a1, $a1, -0x2E48
    ctx->pc = 0x1176d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955448));
    // 0x1176d4: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1176D4u;
    SET_GPR_U32(ctx, 31, 0x1176DCu);
    ctx->pc = 0x1176D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176D4u;
    // 0x1176d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1176D4u, 0x1176DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176DCu;
label_1176dc:
    // 0x1176dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1176dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176e0: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1176E0u;
    SET_GPR_U32(ctx, 31, 0x1176E8u);
    ctx->pc = 0x1176E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176E0u;
    // 0x1176e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1176E0u, 0x1176E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176E8u;
label_1176e8:
    // 0x1176e8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1176e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1176ec: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1176ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1176f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1176f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176f4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1176f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1176f8: 0xc063764  jal         func_18DD90
    ctx->pc = 0x1176F8u;
    SET_GPR_U32(ctx, 31, 0x117700u);
    ctx->pc = 0x1176FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176F8u;
    // 0x1176fc: 0x24a5d1c8  addiu       $a1, $a1, -0x2E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x1176F8u, 0x117700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117700u;
label_117700:
    // 0x117700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117704: 0xc063764  jal         func_18DD90
    ctx->pc = 0x117704u;
    SET_GPR_U32(ctx, 31, 0x11770Cu);
    ctx->pc = 0x117708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117704u;
    // 0x117708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DD90u, 0x117704u, 0x11770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11770Cu;
label_11770c:
    // 0x11770c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11771c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11771cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117720: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x117720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x117724: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x117724u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117728: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x117728u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11772c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11772cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117730: 0x8063b2e  j           func_18ECB8
    ctx->pc = 0x117730u;
    ctx->pc = 0x117734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117730u;
    // 0x117734: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18ECB8u;
    WTxPanelPrint__FP9WcTxPanelPc_0x18ecb8(rdram, ctx, runtime); return;
    ctx->pc = 0x117738u;
}
