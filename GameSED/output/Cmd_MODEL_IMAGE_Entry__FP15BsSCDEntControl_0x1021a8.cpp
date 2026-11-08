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

// Function: Cmd_MODEL_IMAGE_Entry__FP15BsSCDEntControl
// Address: 0x1021a8 - 0x1024a0
void Cmd_MODEL_IMAGE_Entry__FP15BsSCDEntControl_0x1021a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MODEL_IMAGE_Entry__FP15BsSCDEntControl_0x1021a8");
#endif

    switch (ctx->pc) {
        case 0x1021dcu: goto label_1021dc;
        case 0x1021e8u: goto label_1021e8;
        case 0x1021f4u: goto label_1021f4;
        case 0x102214u: goto label_102214;
        case 0x102240u: goto label_102240;
        case 0x102278u: goto label_102278;
        case 0x1022a8u: goto label_1022a8;
        case 0x1022dcu: goto label_1022dc;
        case 0x102314u: goto label_102314;
        case 0x102344u: goto label_102344;
        case 0x102380u: goto label_102380;
        case 0x102388u: goto label_102388;
        case 0x1023c0u: goto label_1023c0;
        case 0x1023f8u: goto label_1023f8;
        case 0x102428u: goto label_102428;
        case 0x102478u: goto label_102478;
        default: break;
    }

    ctx->pc = 0x1021a8u;

    // 0x1021a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1021a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1021ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1021acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1021b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1021b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1021b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1021b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1021b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1021bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1021bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1021c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1021c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1021c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1021c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1021c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1021c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1021cc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1021ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1021d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1021d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1021d4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1021D4u;
    SET_GPR_U32(ctx, 31, 0x1021DCu);
    ctx->pc = 0x1021D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021D4u;
    // 0x1021d8: 0x8c520044  lw          $s2, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1021D4u, 0x1021DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021DCu;
label_1021dc:
    // 0x1021dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1021dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1021E0u;
    SET_GPR_U32(ctx, 31, 0x1021E8u);
    ctx->pc = 0x1021E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021E0u;
    // 0x1021e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1021E0u, 0x1021E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021E8u;
label_1021e8:
    // 0x1021e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1021e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021ec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1021ECu;
    SET_GPR_U32(ctx, 31, 0x1021F4u);
    ctx->pc = 0x1021F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1021ECu;
    // 0x1021f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1021ECu, 0x1021F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021F4u;
label_1021f4:
    // 0x1021f4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1021f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1021f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1021f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1021fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x102200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102204: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102204u;
    {
        const bool branch_taken_0x102204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x102208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102204u;
        // 0x102208: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102204) {
            ctx->pc = 0x102218u;
            goto label_102218;
        }
    }
    ctx->pc = 0x10220Cu;
    // 0x10220c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10220Cu;
    SET_GPR_U32(ctx, 31, 0x102214u);
    ctx->pc = 0x102210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10220Cu;
    // 0x102210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10220Cu, 0x102214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102214u;
label_102214:
    // 0x102214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x102214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_102218:
    // 0x102218: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x102218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x10221c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x10221cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102220: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102220u;
    {
        const bool branch_taken_0x102220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102220u;
        // 0x102224: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102220) {
            ctx->pc = 0x102240u;
            goto label_102240;
        }
    }
    ctx->pc = 0x102228u;
    // 0x102228: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10222c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102230: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0
    ctx->pc = 0x102230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    // 0x102234: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x102234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x102238: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102238u;
    SET_GPR_U32(ctx, 31, 0x102240u);
    ctx->pc = 0x10223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102238u;
    // 0x10223c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102238u, 0x102240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102240u;
label_102240:
    // 0x102240: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x102240u;
    {
        const bool branch_taken_0x102240 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x102244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102240u;
        // 0x102244: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102240) {
            ctx->pc = 0x102258u;
            goto label_102258;
        }
    }
    ctx->pc = 0x102248u;
    // 0x102248: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x102248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x10224c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x10224cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102250: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x102250u;
    {
        const bool branch_taken_0x102250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102250) {
            ctx->pc = 0x10225Cu;
            goto label_10225c;
        }
    }
    ctx->pc = 0x102258u;
label_102258:
    // 0x102258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10225c:
    // 0x10225c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10225Cu;
    {
        const bool branch_taken_0x10225c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x102260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10225Cu;
        // 0x102260: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10225c) {
            ctx->pc = 0x102278u;
            goto label_102278;
        }
    }
    ctx->pc = 0x102264u;
    // 0x102264: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102268: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0
    ctx->pc = 0x102268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    // 0x10226c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x10226cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x102270: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102270u;
    SET_GPR_U32(ctx, 31, 0x102278u);
    ctx->pc = 0x102274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102270u;
    // 0x102274: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102270u, 0x102278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102278u;
label_102278:
    // 0x102278: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x102278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x10227c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x10227cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x102280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102284: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x102284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102288: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x102288u;
    {
        const bool branch_taken_0x102288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x102288) {
            ctx->pc = 0x10228Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102288u;
            // 0x10228c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1022ACu;
            goto label_1022ac;
        }
    }
    ctx->pc = 0x102290u;
    // 0x102290: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102298: 0x24a51af8  addiu       $a1, $a1, 0x1AF8
    ctx->pc = 0x102298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6904));
    // 0x10229c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x10229cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1022a0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1022A0u;
    SET_GPR_U32(ctx, 31, 0x1022A8u);
    ctx->pc = 0x1022A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022A0u;
    // 0x1022a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1022A0u, 0x1022A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022A8u;
label_1022a8:
    // 0x1022a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1022a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1022ac:
    // 0x1022ac: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1022ACu;
    {
        const bool branch_taken_0x1022ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1022B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022ACu;
        // 0x1022b0: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022ac) {
            ctx->pc = 0x102378u;
            goto label_102378;
        }
    }
    ctx->pc = 0x1022B4u;
    // 0x1022b4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1022b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1022b8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1022b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1022BCu;
    {
        const bool branch_taken_0x1022bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1022C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022BCu;
        // 0x1022c0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022bc) {
            ctx->pc = 0x1022DCu;
            goto label_1022dc;
        }
    }
    ctx->pc = 0x1022C4u;
    // 0x1022c4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1022c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1022c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1022c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022cc: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x1022ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x1022d0: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1022d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1022d4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1022D4u;
    SET_GPR_U32(ctx, 31, 0x1022DCu);
    ctx->pc = 0x1022D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022D4u;
    // 0x1022d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1022D4u, 0x1022DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022DCu;
label_1022dc:
    // 0x1022dc: 0x6600005  bltz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1022DCu;
    {
        const bool branch_taken_0x1022dc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1022E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022DCu;
        // 0x1022e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022dc) {
            ctx->pc = 0x1022F4u;
            goto label_1022f4;
        }
    }
    ctx->pc = 0x1022E4u;
    // 0x1022e4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1022e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1022e8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1022e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1022ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1022ECu;
    {
        const bool branch_taken_0x1022ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1022ec) {
            ctx->pc = 0x1022F8u;
            goto label_1022f8;
        }
    }
    ctx->pc = 0x1022F4u;
label_1022f4:
    // 0x1022f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1022f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1022f8:
    // 0x1022f8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1022F8u;
    {
        const bool branch_taken_0x1022f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1022F8u;
        // 0x1022fc: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022f8) {
            ctx->pc = 0x102314u;
            goto label_102314;
        }
    }
    ctx->pc = 0x102300u;
    // 0x102300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102304: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x102304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x102308: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x102308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10230c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10230Cu;
    SET_GPR_U32(ctx, 31, 0x102314u);
    ctx->pc = 0x102310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10230Cu;
    // 0x102310: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10230Cu, 0x102314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102314u;
label_102314:
    // 0x102314: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x102314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x102318: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x102318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x10231c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102320: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x102320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102324: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x102324u;
    {
        const bool branch_taken_0x102324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x102328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102324u;
        // 0x102328: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102324) {
            ctx->pc = 0x102348u;
            goto label_102348;
        }
    }
    ctx->pc = 0x10232Cu;
    // 0x10232c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10232cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102334: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x102334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x102338: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x102338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x10233c: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10233Cu;
    SET_GPR_U32(ctx, 31, 0x102344u);
    ctx->pc = 0x102340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10233Cu;
    // 0x102340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10233Cu, 0x102344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102344u;
label_102344:
    // 0x102344: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x102344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_102348:
    // 0x102348: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x102348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10234c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10234cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102354: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x102354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102358: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102358u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10235c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10235cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102360: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102364: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102368: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102368u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10236c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10236cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102370: 0x805fe36  j           func_17F8D8
    ctx->pc = 0x102370u;
    ctx->pc = 0x102374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102370u;
    // 0x102374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F8D8u;
    SetModelTexture__7WcModelP7WcImagei_0x17f8d8(rdram, ctx, runtime); return;
    ctx->pc = 0x102378u;
label_102378:
    // 0x102378: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x102378u;
    SET_GPR_U32(ctx, 31, 0x102380u);
    ctx->pc = 0x10237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102378u;
    // 0x10237c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x102378u, 0x102380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102380u;
label_102380:
    // 0x102380: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x102380u;
    SET_GPR_U32(ctx, 31, 0x102388u);
    ctx->pc = 0x102384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102380u;
    // 0x102384: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x102380u, 0x102388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102388u;
label_102388:
    // 0x102388: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x102388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x10238c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x102390: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
    ctx->pc = 0x102390u;
    {
        const bool branch_taken_0x102390 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x102394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102390u;
        // 0x102394: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102390) {
            ctx->pc = 0x102460u;
            goto label_102460;
        }
    }
    ctx->pc = 0x102398u;
    // 0x102398: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x102398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10239c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1023a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1023A0u;
    {
        const bool branch_taken_0x1023a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1023A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023A0u;
        // 0x1023a4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023a0) {
            ctx->pc = 0x1023C0u;
            goto label_1023c0;
        }
    }
    ctx->pc = 0x1023A8u;
    // 0x1023a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1023a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1023ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1023acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023b0: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x1023b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x1023b4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1023b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1023b8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1023B8u;
    SET_GPR_U32(ctx, 31, 0x1023C0u);
    ctx->pc = 0x1023BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023B8u;
    // 0x1023bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1023B8u, 0x1023C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023C0u;
label_1023c0:
    // 0x1023c0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1023C0u;
    {
        const bool branch_taken_0x1023c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1023C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023C0u;
        // 0x1023c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023c0) {
            ctx->pc = 0x1023D8u;
            goto label_1023d8;
        }
    }
    ctx->pc = 0x1023C8u;
    // 0x1023c8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1023c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1023cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1023ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1023d0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1023D0u;
    {
        const bool branch_taken_0x1023d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1023d0) {
            ctx->pc = 0x1023DCu;
            goto label_1023dc;
        }
    }
    ctx->pc = 0x1023D8u;
label_1023d8:
    // 0x1023d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1023d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1023dc:
    // 0x1023dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1023DCu;
    {
        const bool branch_taken_0x1023dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023DCu;
        // 0x1023e0: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023dc) {
            ctx->pc = 0x1023F8u;
            goto label_1023f8;
        }
    }
    ctx->pc = 0x1023E4u;
    // 0x1023e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1023e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023e8: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x1023e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x1023ec: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1023ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1023f0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1023F0u;
    SET_GPR_U32(ctx, 31, 0x1023F8u);
    ctx->pc = 0x1023F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023F0u;
    // 0x1023f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1023F0u, 0x1023F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023F8u;
label_1023f8:
    // 0x1023f8: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1023f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1023fc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1023fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x102400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102404: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x102404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x102408: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x102408u;
    {
        const bool branch_taken_0x102408 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102408u;
        // 0x10240c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102408) {
            ctx->pc = 0x10242Cu;
            goto label_10242c;
        }
    }
    ctx->pc = 0x102410u;
    // 0x102410: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102418: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x102418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x10241c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x10241cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x102420: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102420u;
    SET_GPR_U32(ctx, 31, 0x102428u);
    ctx->pc = 0x102424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102420u;
    // 0x102424: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102420u, 0x102428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102428u;
label_102428:
    // 0x102428: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x102428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10242c:
    // 0x10242c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10242cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102430: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x102430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102434: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102438: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x102438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10243c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10243cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102440: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x102440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102444: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x102444u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10244c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10244cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102450: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102454: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x102454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102458: 0x805fe1c  j           func_17F870
    ctx->pc = 0x102458u;
    ctx->pc = 0x10245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102458u;
    // 0x10245c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F870u;
    SetModelTexture__7WcModelP13WModelPackageP7WcImagei_0x17f870(rdram, ctx, runtime); return;
    ctx->pc = 0x102460u;
label_102460:
    // 0x102460: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x102460u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x102464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102468: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x102468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10246c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x10246cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102470: 0xc05fddc  jal         func_17F770
    ctx->pc = 0x102470u;
    SET_GPR_U32(ctx, 31, 0x102478u);
    ctx->pc = 0x102474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102470u;
    // 0x102474: 0x24e7b000  addiu       $a3, $a3, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F770u, 0x102470u, 0x102478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102478u;
label_102478:
    // 0x102478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10247c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10247cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102480: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102484: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102488: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10248c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10248cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102490: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x102490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102494: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x102494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x102498: 0x3e00008  jr          $ra
    ctx->pc = 0x102498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102498u;
        // 0x10249c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1024A0u;
}
