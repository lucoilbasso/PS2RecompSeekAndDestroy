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

// Function: WCdManFileReadPC__FiP15CD_READ_COMMAND
// Address: 0x178120 - 0x178268
void WCdManFileReadPC__FiP15CD_READ_COMMAND_0x178120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManFileReadPC__FiP15CD_READ_COMMAND_0x178120");
#endif

    switch (ctx->pc) {
        case 0x17816cu: goto label_17816c;
        case 0x178180u: goto label_178180;
        case 0x1781c4u: goto label_1781c4;
        case 0x1781e0u: goto label_1781e0;
        case 0x178210u: goto label_178210;
        case 0x178228u: goto label_178228;
        case 0x178244u: goto label_178244;
        default: break;
    }

    ctx->pc = 0x178120u;

    // 0x178120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178124: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17812c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17812cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178130: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x178134: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x178134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17813c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178140: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x178140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x178144: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x178144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x178148: 0x8c520024  lw          $s2, 0x24($v0)
    ctx->pc = 0x178148u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x17814c: 0x8e431040  lw          $v1, 0x1040($s2)
    ctx->pc = 0x17814cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x178150: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x178150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x178154: 0xae431040  sw          $v1, 0x1040($s2)
    ctx->pc = 0x178154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4160), GPR_U32(ctx, 3));
    // 0x178158: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x178158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17815c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17815Cu;
    {
        const bool branch_taken_0x17815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17815Cu;
        // 0x178160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17815c) {
            ctx->pc = 0x178198u;
            goto label_178198;
        }
    }
    ctx->pc = 0x178164u;
    // 0x178164: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x178164u;
    SET_GPR_U32(ctx, 31, 0x17816Cu);
    ctx->pc = 0x178168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178164u;
    // 0x178168: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x178164u, 0x17816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17816Cu;
label_17816c:
    // 0x17816c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17816cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178170: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x178170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x178174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178178: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x178178u;
    SET_GPR_U32(ctx, 31, 0x178180u);
    ctx->pc = 0x17817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178178u;
    // 0x17817c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x178178u, 0x178180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178180u;
label_178180:
    // 0x178180: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x178180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x178184: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x178184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x178188: 0x246307ff  addiu       $v1, $v1, 0x7FF
    ctx->pc = 0x178188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x17818c: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x17818cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x178190: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x178190u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178194: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x178194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_178198:
    // 0x178198: 0x8f838d10  lw          $v1, -0x72F0($gp)
    ctx->pc = 0x178198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17819c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17819cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1781a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781a4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1781a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1781a8: 0x8c710024  lw          $s1, 0x24($v1)
    ctx->pc = 0x1781a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1781ac: 0x8e221040  lw          $v0, 0x1040($s1)
    ctx->pc = 0x1781acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4160)));
    // 0x1781b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1781b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1781b4: 0xae221040  sw          $v0, 0x1040($s1)
    ctx->pc = 0x1781b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4160), GPR_U32(ctx, 2));
    // 0x1781b8: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x1781b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1781bc: 0xc06cb24  jal         func_1B2C90
    ctx->pc = 0x1781BCu;
    SET_GPR_U32(ctx, 31, 0x1781C4u);
    ctx->pc = 0x1781C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781BCu;
    // 0x1781c0: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2C90u, 0x1781BCu, 0x1781C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781C4u;
label_1781c4:
    // 0x1781c4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1781c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1781c8: 0x24a57988  addiu       $a1, $a1, 0x7988
    ctx->pc = 0x1781c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31112));
    // 0x1781cc: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1781CCu;
    {
        const bool branch_taken_0x1781cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1781D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781CCu;
        // 0x1781d0: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781cc) {
            ctx->pc = 0x1781E0u;
            goto label_1781e0;
        }
    }
    ctx->pc = 0x1781D4u;
    // 0x1781d4: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1781d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1781d8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1781D8u;
    SET_GPR_U32(ctx, 31, 0x1781E0u);
    ctx->pc = 0x1781DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1781D8u;
    // 0x1781dc: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1781D8u, 0x1781E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1781E0u;
label_1781e0:
    // 0x1781e0: 0xae201040  sw          $zero, 0x1040($s1)
    ctx->pc = 0x1781e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4160), GPR_U32(ctx, 0));
    // 0x1781e4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1781e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1781e8: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x1781e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x1781ec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1781ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781f0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1781f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1781f4: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1781F4u;
    {
        const bool branch_taken_0x1781f4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1781F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781F4u;
        // 0x1781f8: 0xae421040  sw          $v0, 0x1040($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781f4) {
            ctx->pc = 0x178214u;
            goto label_178214;
        }
    }
    ctx->pc = 0x1781FCu;
    // 0x1781fc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1781fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178200: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x178200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x178204: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x178204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x178208: 0xc05f358  jal         func_17CD60
    ctx->pc = 0x178208u;
    SET_GPR_U32(ctx, 31, 0x178210u);
    ctx->pc = 0x17820Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178208u;
    // 0x17820c: 0x52ac0  sll         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CD60u, 0x178208u, 0x178210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178210u;
label_178210:
    // 0x178210: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x178210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_178214:
    // 0x178214: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x178214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x178218: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17821c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x17821cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x178220: 0xc06cbb2  jal         func_1B2EC8
    ctx->pc = 0x178220u;
    SET_GPR_U32(ctx, 31, 0x178228u);
    ctx->pc = 0x178224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178220u;
    // 0x178224: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2EC8u, 0x178220u, 0x178228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178228u;
label_178228:
    // 0x178228: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x178228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17822c: 0x24a579a0  addiu       $a1, $a1, 0x79A0
    ctx->pc = 0x17822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31136));
    // 0x178230: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x178230u;
    {
        const bool branch_taken_0x178230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x178234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178230u;
        // 0x178234: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178230) {
            ctx->pc = 0x178244u;
            goto label_178244;
        }
    }
    ctx->pc = 0x178238u;
    // 0x178238: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17823c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17823Cu;
    SET_GPR_U32(ctx, 31, 0x178244u);
    ctx->pc = 0x178240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17823Cu;
    // 0x178240: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17823Cu, 0x178244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178244u;
label_178244:
    // 0x178244: 0xae401040  sw          $zero, 0x1040($s2)
    ctx->pc = 0x178244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4160), GPR_U32(ctx, 0));
    // 0x178248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17824c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17824cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178250: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178254: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x178254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178258: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x178258u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17825c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17825cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x178260: 0x3e00008  jr          $ra
    ctx->pc = 0x178260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178260u;
        // 0x178264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178268u;
}
