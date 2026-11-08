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

// Function: Cmd_GET_IMAGE_INDEX_Entry__FP15BsSCDEntControl
// Address: 0x1451d8 - 0x145308
void Cmd_GET_IMAGE_INDEX_Entry__FP15BsSCDEntControl_0x1451d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_IMAGE_INDEX_Entry__FP15BsSCDEntControl_0x1451d8");
#endif

    switch (ctx->pc) {
        case 0x145208u: goto label_145208;
        case 0x145214u: goto label_145214;
        case 0x145224u: goto label_145224;
        case 0x14527cu: goto label_14527c;
        case 0x14529cu: goto label_14529c;
        case 0x1452c4u: goto label_1452c4;
        case 0x1452d4u: goto label_1452d4;
        default: break;
    }

    ctx->pc = 0x1451d8u;

    // 0x1451d8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1451d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1451dc: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x1451dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x1451e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1451e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451e4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x1451e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x1451e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1451e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451ec: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x1451ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x1451f0: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x1451f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x1451f4: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x1451f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x1451f8: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x1451f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x1451fc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1451fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x145200: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x145200u;
    SET_GPR_U32(ctx, 31, 0x145208u);
    ctx->pc = 0x145204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145200u;
    // 0x145204: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x145200u, 0x145208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145208u;
label_145208:
    // 0x145208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14520c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14520Cu;
    SET_GPR_U32(ctx, 31, 0x145214u);
    ctx->pc = 0x145210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14520Cu;
    // 0x145210: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14520Cu, 0x145214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145214u;
label_145214:
    // 0x145214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145218: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14521c: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x14521Cu;
    SET_GPR_U32(ctx, 31, 0x145224u);
    ctx->pc = 0x145220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14521Cu;
    // 0x145220: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x14521Cu, 0x145224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145224u;
label_145224:
    // 0x145224: 0x131a03  sra         $v1, $s3, 8
    ctx->pc = 0x145224u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 8));
    // 0x145228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14522c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14522Cu;
    {
        const bool branch_taken_0x14522c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14522Cu;
        // 0x145230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14522c) {
            ctx->pc = 0x145268u;
            goto label_145268;
        }
    }
    ctx->pc = 0x145234u;
    // 0x145234: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x145234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145238: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x145238u;
    {
        const bool branch_taken_0x145238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145238) {
            ctx->pc = 0x14523Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145238u;
            // 0x14523c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145250u;
            goto label_145250;
        }
    }
    ctx->pc = 0x145240u;
    // 0x145240: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x145240u;
    {
        const bool branch_taken_0x145240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145240u;
        // 0x145244: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145240) {
            ctx->pc = 0x145260u;
            goto label_145260;
        }
    }
    ctx->pc = 0x145248u;
    // 0x145248: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x145248u;
    {
        const bool branch_taken_0x145248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145248u;
        // 0x14524c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145248) {
            ctx->pc = 0x145270u;
            goto label_145270;
        }
    }
    ctx->pc = 0x145250u;
label_145250:
    // 0x145250: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x145250u;
    {
        const bool branch_taken_0x145250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x145250) {
            ctx->pc = 0x145254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145250u;
            // 0x145254: 0x8e32005c  lw          $s2, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14527Cu;
            goto label_14527c;
        }
    }
    ctx->pc = 0x145258u;
    // 0x145258: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145258u;
    {
        const bool branch_taken_0x145258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145258u;
        // 0x14525c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145258) {
            ctx->pc = 0x145270u;
            goto label_145270;
        }
    }
    ctx->pc = 0x145260u;
label_145260:
    // 0x145260: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145260u;
    {
        const bool branch_taken_0x145260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145260u;
        // 0x145264: 0x8c520028  lw          $s2, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145260) {
            ctx->pc = 0x14527Cu;
            goto label_14527c;
        }
    }
    ctx->pc = 0x145268u;
label_145268:
    // 0x145268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145268u;
    {
        const bool branch_taken_0x145268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145268u;
        // 0x14526c: 0x8e320024  lw          $s2, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145268) {
            ctx->pc = 0x14527Cu;
            goto label_14527c;
        }
    }
    ctx->pc = 0x145270u;
label_145270:
    // 0x145270: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x145270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x145274: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145274u;
    SET_GPR_U32(ctx, 31, 0x14527Cu);
    ctx->pc = 0x145278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145274u;
    // 0x145278: 0x24a56a68  addiu       $a1, $a1, 0x6A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145274u, 0x14527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14527Cu;
label_14527c:
    // 0x14527c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x14527cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145280: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x145280u;
    {
        const bool branch_taken_0x145280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145280) {
            ctx->pc = 0x145284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145280u;
            // 0x145284: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1452A8u;
            goto label_1452a8;
        }
    }
    ctx->pc = 0x145288u;
    // 0x145288: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14528c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145290: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x145290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x145294: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145294u;
    SET_GPR_U32(ctx, 31, 0x14529Cu);
    ctx->pc = 0x145298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145294u;
    // 0x145298: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145294u, 0x14529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14529Cu;
label_14529c:
    // 0x14529c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14529Cu;
    {
        const bool branch_taken_0x14529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14529Cu;
        // 0x1452a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14529c) {
            ctx->pc = 0x1452C8u;
            goto label_1452c8;
        }
    }
    ctx->pc = 0x1452A4u;
    // 0x1452a4: 0x0  nop
    ctx->pc = 0x1452a4u;
    // NOP
label_1452a8:
    // 0x1452a8: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1452A8u;
    {
        const bool branch_taken_0x1452a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1452ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1452A8u;
        // 0x1452ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1452a8) {
            ctx->pc = 0x1452C8u;
            goto label_1452c8;
        }
    }
    ctx->pc = 0x1452B0u;
    // 0x1452b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1452b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1452b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1452b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452b8: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x1452b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x1452bc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1452BCu;
    SET_GPR_U32(ctx, 31, 0x1452C4u);
    ctx->pc = 0x1452C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452BCu;
    // 0x1452c0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1452BCu, 0x1452C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452C4u;
label_1452c4:
    // 0x1452c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1452c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1452c8:
    // 0x1452c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1452c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1452cc: 0xc05fa5c  jal         func_17E970
    ctx->pc = 0x1452CCu;
    SET_GPR_U32(ctx, 31, 0x1452D4u);
    ctx->pc = 0x1452D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1452CCu;
    // 0x1452d0: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E970u, 0x1452CCu, 0x1452D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1452D4u;
label_1452d4:
    // 0x1452d4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1452d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1452d8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1452d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1452dc: 0x2631824  and         $v1, $s3, $v1
    ctx->pc = 0x1452dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x1452e0: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x1452e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1452e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1452e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1452e8: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x1452e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1452ec: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1452ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1452f0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x1452f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1452f4: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x1452f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1452f8: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x1452f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1452fc: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x1452fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x145300: 0x3e00008  jr          $ra
    ctx->pc = 0x145300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145300u;
        // 0x145304: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145308u;
}
