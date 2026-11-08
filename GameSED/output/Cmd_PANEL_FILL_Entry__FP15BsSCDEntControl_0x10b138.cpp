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

// Function: Cmd_PANEL_FILL_Entry__FP15BsSCDEntControl
// Address: 0x10b138 - 0x10b26c
void Cmd_PANEL_FILL_Entry__FP15BsSCDEntControl_0x10b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_FILL_Entry__FP15BsSCDEntControl_0x10b138");
#endif

    switch (ctx->pc) {
        case 0x10b168u: goto label_10b168;
        case 0x10b1a4u: goto label_10b1a4;
        case 0x10b1c8u: goto label_10b1c8;
        case 0x10b1d8u: goto label_10b1d8;
        case 0x10b1ecu: goto label_10b1ec;
        case 0x10b204u: goto label_10b204;
        case 0x10b218u: goto label_10b218;
        case 0x10b23cu: goto label_10b23c;
        case 0x10b250u: goto label_10b250;
        default: break;
    }

    ctx->pc = 0x10b138u;

    // 0x10b138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10b13c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b140: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10b144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b148: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x10b148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x10b14c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b150: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10b150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10b154: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x10b154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x10b158: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10b158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10b15c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b160: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B160u;
    SET_GPR_U32(ctx, 31, 0x10B168u);
    ctx->pc = 0x10B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B160u;
    // 0x10b164: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B160u, 0x10B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B168u;
label_10b168:
    // 0x10b168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10b168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b16c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B16Cu;
    {
        const bool branch_taken_0x10b16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B16Cu;
        // 0x10b170: 0x24030166  addiu       $v1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b16c) {
            ctx->pc = 0x10B184u;
            goto label_10b184;
        }
    }
    ctx->pc = 0x10B174u;
    // 0x10b174: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10b174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b178: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b17c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B17Cu;
    {
        const bool branch_taken_0x10b17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B17Cu;
        // 0x10b180: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b17c) {
            ctx->pc = 0x10B188u;
            goto label_10b188;
        }
    }
    ctx->pc = 0x10B184u;
label_10b184:
    // 0x10b184: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10b184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b188:
    // 0x10b188: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10b188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b18c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10b190: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B190u;
    {
        const bool branch_taken_0x10b190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B190u;
        // 0x10b194: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b190) {
            ctx->pc = 0x10B1B0u;
            goto label_10b1b0;
        }
    }
    ctx->pc = 0x10B198u;
    // 0x10b198: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x10b198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10b19c: 0xc06338e  jal         func_18CE38
    ctx->pc = 0x10B19Cu;
    SET_GPR_U32(ctx, 31, 0x10B1A4u);
    ctx->pc = 0x10B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B19Cu;
    // 0x10b1a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CE38u, 0x10B19Cu, 0x10B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1A4u;
label_10b1a4:
    // 0x10b1a4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x10B1A4u;
    {
        const bool branch_taken_0x10b1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1A4u;
        // 0x10b1a8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1a4) {
            ctx->pc = 0x10B254u;
            goto label_10b254;
        }
    }
    ctx->pc = 0x10B1ACu;
    // 0x10b1ac: 0x0  nop
    ctx->pc = 0x10b1acu;
    // NOP
label_10b1b0:
    // 0x10b1b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b1b4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10B1B4u;
    {
        const bool branch_taken_0x10b1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1B4u;
        // 0x10b1b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1b4) {
            ctx->pc = 0x10B210u;
            goto label_10b210;
        }
    }
    ctx->pc = 0x10B1BCu;
    // 0x10b1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1c0: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10B1C0u;
    SET_GPR_U32(ctx, 31, 0x10B1C8u);
    ctx->pc = 0x10B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1C0u;
    // 0x10b1c4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10B1C0u, 0x10B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1C8u;
label_10b1c8:
    // 0x10b1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1cc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x10b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10b1d0: 0xc0637e6  jal         func_18DF98
    ctx->pc = 0x10B1D0u;
    SET_GPR_U32(ctx, 31, 0x10B1D8u);
    ctx->pc = 0x10B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1D0u;
    // 0x10b1d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF98u, 0x10B1D0u, 0x10B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1D8u;
label_10b1d8:
    // 0x10b1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1dc: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x10b1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b1e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10b1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1e4: 0xc063b02  jal         func_18EC08
    ctx->pc = 0x10B1E4u;
    SET_GPR_U32(ctx, 31, 0x10B1ECu);
    ctx->pc = 0x10B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1E4u;
    // 0x10b1e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC08u, 0x10B1E4u, 0x10B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1ECu;
label_10b1ec:
    // 0x10b1ec: 0x8e250208  lw          $a1, 0x208($s1)
    ctx->pc = 0x10b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x10b1f0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x10b1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x10b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10b1fc: 0xc063b02  jal         func_18EC08
    ctx->pc = 0x10B1FCu;
    SET_GPR_U32(ctx, 31, 0x10B204u);
    ctx->pc = 0x10B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1FCu;
    // 0x10b200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC08u, 0x10B1FCu, 0x10B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B204u;
label_10b204:
    // 0x10b204: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10B204u;
    {
        const bool branch_taken_0x10b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B204u;
        // 0x10b208: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b204) {
            ctx->pc = 0x10B254u;
            goto label_10b254;
        }
    }
    ctx->pc = 0x10B20Cu;
    // 0x10b20c: 0x0  nop
    ctx->pc = 0x10b20cu;
    // NOP
label_10b210:
    // 0x10b210: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B210u;
    SET_GPR_U32(ctx, 31, 0x10B218u);
    ctx->pc = 0x10B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B210u;
    // 0x10b214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B210u, 0x10B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B218u;
label_10b218:
    // 0x10b218: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10b218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10b21c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10b21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b220: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x10b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10b224: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B224u;
    {
        const bool branch_taken_0x10b224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B224u;
        // 0x10b228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b224) {
            ctx->pc = 0x10B244u;
            goto label_10b244;
        }
    }
    ctx->pc = 0x10B22Cu;
    // 0x10b22c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b230: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10b230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b234: 0xc06a324  jal         func_1A8C90
    ctx->pc = 0x10B234u;
    SET_GPR_U32(ctx, 31, 0x10B23Cu);
    ctx->pc = 0x10B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B234u;
    // 0x10b238: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8C90u, 0x10B234u, 0x10B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B23Cu;
label_10b23c:
    // 0x10b23c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x10b23cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10b244:
    // 0x10b244: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b248: 0xc0637e6  jal         func_18DF98
    ctx->pc = 0x10B248u;
    SET_GPR_U32(ctx, 31, 0x10B250u);
    ctx->pc = 0x10B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B248u;
    // 0x10b24c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF98u, 0x10B248u, 0x10B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B250u;
label_10b250:
    // 0x10b250: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10b254:
    // 0x10b254: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x10b254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10b258: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10b258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b25c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x10b25cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10b260: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b264: 0x3e00008  jr          $ra
    ctx->pc = 0x10B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B264u;
        // 0x10b268: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B26Cu;
}
