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

// Function: Cmd_DOWN_LOAD_PARTS_Entry__FP15BsSCDEntControl
// Address: 0x115208 - 0x1152fc
void Cmd_DOWN_LOAD_PARTS_Entry__FP15BsSCDEntControl_0x115208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DOWN_LOAD_PARTS_Entry__FP15BsSCDEntControl_0x115208");
#endif

    switch (ctx->pc) {
        case 0x11522cu: goto label_11522c;
        case 0x11524cu: goto label_11524c;
        case 0x115270u: goto label_115270;
        case 0x115298u: goto label_115298;
        case 0x1152a8u: goto label_1152a8;
        case 0x1152b4u: goto label_1152b4;
        case 0x1152c0u: goto label_1152c0;
        default: break;
    }

    ctx->pc = 0x115208u;

    // 0x115208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11520c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11520cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115214: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115218: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x115218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11521c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11521cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x115220: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115224: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x115224u;
    SET_GPR_U32(ctx, 31, 0x11522Cu);
    ctx->pc = 0x115228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115224u;
    // 0x115228: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x115224u, 0x11522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11522Cu;
label_11522c:
    // 0x11522c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x11522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x115230: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x115230u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x115234: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x115234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x115238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x115238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11523c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11523Cu;
    {
        const bool branch_taken_0x11523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x115240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11523Cu;
        // 0x115240: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11523c) {
            ctx->pc = 0x115250u;
            goto label_115250;
        }
    }
    ctx->pc = 0x115244u;
    // 0x115244: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x115244u;
    SET_GPR_U32(ctx, 31, 0x11524Cu);
    ctx->pc = 0x115248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115244u;
    // 0x115248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x115244u, 0x11524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11524Cu;
label_11524c:
    // 0x11524c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x11524cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_115250:
    // 0x115250: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115254: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115254u;
    {
        const bool branch_taken_0x115254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x115254) {
            ctx->pc = 0x115258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115254u;
            // 0x115258: 0x128203  sra         $s0, $s2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115274u;
            goto label_115274;
        }
    }
    ctx->pc = 0x11525Cu;
    // 0x11525c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11525cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x115260: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x115260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115264: 0x24a54390  addiu       $a1, $a1, 0x4390
    ctx->pc = 0x115264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17296));
    // 0x115268: 0xc068186  jal         func_1A0618
    ctx->pc = 0x115268u;
    SET_GPR_U32(ctx, 31, 0x115270u);
    ctx->pc = 0x11526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115268u;
    // 0x11526c: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x115268u, 0x115270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115270u;
label_115270:
    // 0x115270: 0x128203  sra         $s0, $s2, 8
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 8));
label_115274:
    // 0x115274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115278: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x115278u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11527c: 0x325100ff  andi        $s1, $s2, 0xFF
    ctx->pc = 0x11527cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x115280: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x115280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x115284: 0x2421c0c0  addiu       $at, $at, -0x3F40
    ctx->pc = 0x115284u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294951104));
    // 0x115288: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x115288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x11528c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x11528cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x115290: 0xc041882  jal         func_106208
    ctx->pc = 0x115290u;
    SET_GPR_U32(ctx, 31, 0x115298u);
    ctx->pc = 0x115294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115290u;
    // 0x115294: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x115290u, 0x115298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115298u;
label_115298:
    // 0x115298: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x115298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11529c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x11529cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1152a0: 0xc041882  jal         func_106208
    ctx->pc = 0x1152A0u;
    SET_GPR_U32(ctx, 31, 0x1152A8u);
    ctx->pc = 0x1152A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152A0u;
    // 0x1152a4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x1152A0u, 0x1152A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152A8u;
label_1152a8:
    // 0x1152a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1152a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152ac: 0xc041794  jal         func_105E50
    ctx->pc = 0x1152ACu;
    SET_GPR_U32(ctx, 31, 0x1152B4u);
    ctx->pc = 0x1152B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152ACu;
    // 0x1152b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E50u, 0x1152ACu, 0x1152B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152B4u;
label_1152b4:
    // 0x1152b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1152b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1152b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152bc: 0x0  nop
    ctx->pc = 0x1152bcu;
    // NOP
label_1152c0:
    // 0x1152c0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1152c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1152c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1152c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1152c8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1152c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1152cc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1152ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1152d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1152d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1152d4: 0x28c50022  slti        $a1, $a2, 0x22
    ctx->pc = 0x1152d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1152d8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1152D8u;
    {
        const bool branch_taken_0x1152d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152D8u;
        // 0x1152dc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152d8) {
            ctx->pc = 0x1152C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1152c0;
        }
    }
    ctx->pc = 0x1152E0u;
    // 0x1152e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1152e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1152e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1152e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1152e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1152e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1152ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1152ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1152f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1152f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1152f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1152F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1152F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152F4u;
        // 0x1152f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1152F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1152FCu;
}
