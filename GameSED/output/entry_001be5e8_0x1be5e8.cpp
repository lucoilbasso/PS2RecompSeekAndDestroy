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

// Function: entry_001be5e8
// Address: 0x1be5e8 - 0x1be798
void entry_001be5e8_0x1be5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be5e8_0x1be5e8");
#endif

    switch (ctx->pc) {
        case 0x1be648u: goto label_1be648;
        case 0x1be65cu: goto label_1be65c;
        case 0x1be674u: goto label_1be674;
        case 0x1be68cu: goto label_1be68c;
        case 0x1be6dcu: goto label_1be6dc;
        case 0x1be6ecu: goto label_1be6ec;
        case 0x1be6fcu: goto label_1be6fc;
        case 0x1be70cu: goto label_1be70c;
        case 0x1be71cu: goto label_1be71c;
        case 0x1be72cu: goto label_1be72c;
        case 0x1be73cu: goto label_1be73c;
        case 0x1be74cu: goto label_1be74c;
        case 0x1be75cu: goto label_1be75c;
        default: break;
    }

    ctx->pc = 0x1be5e8u;

    // 0x1be5e8: 0xacb60004  sw          $s6, 0x4($a1)
    ctx->pc = 0x1be5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 22));
    // 0x1be5ec: 0x24100180  addiu       $s0, $zero, 0x180
    ctx->pc = 0x1be5ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1be5f0: 0xacb70000  sw          $s7, 0x0($a1)
    ctx->pc = 0x1be5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 23));
    // 0x1be5f4: 0x2d08018  mult        $s0, $s6, $s0
    ctx->pc = 0x1be5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1be5f8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1be5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1be5fc: 0x27d10108  addiu       $s1, $fp, 0x108
    ctx->pc = 0x1be5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
    // 0x1be600: 0x27c20320  addiu       $v0, $fp, 0x320
    ctx->pc = 0x1be600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 800));
    // 0x1be604: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1be604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be608: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1be608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1be60c: 0x27d301e8  addiu       $s3, $fp, 0x1E8
    ctx->pc = 0x1be60cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 488));
    // 0x1be610: 0x27c20388  addiu       $v0, $fp, 0x388
    ctx->pc = 0x1be610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 904));
    // 0x1be614: 0x2f08018  mult        $s0, $s7, $s0
    ctx->pc = 0x1be614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1be618: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1be618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1be61c: 0x27d40250  addiu       $s4, $fp, 0x250
    ctx->pc = 0x1be61cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 592));
    // 0x1be620: 0x27c203f0  addiu       $v0, $fp, 0x3F0
    ctx->pc = 0x1be620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1008));
    // 0x1be624: 0x27d502b8  addiu       $s5, $fp, 0x2B8
    ctx->pc = 0x1be624u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 696));
    // 0x1be628: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1be628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1be62c: 0x169043  sra         $s2, $s6, 1
    ctx->pc = 0x1be62cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
    // 0x1be630: 0x27c20458  addiu       $v0, $fp, 0x458
    ctx->pc = 0x1be630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1112));
    // 0x1be634: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x1be634u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x1be638: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1be638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1be63c: 0x27c204c0  addiu       $v0, $fp, 0x4C0
    ctx->pc = 0x1be63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1216));
    // 0x1be640: 0xc06f6d4  jal         func_1BDB50
    ctx->pc = 0x1BE640u;
    SET_GPR_U32(ctx, 31, 0x1BE648u);
    ctx->pc = 0x1BE644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE640u;
    // 0x1be644: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDB50u, 0x1BE640u, 0x1BE648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE648u;
label_1be648:
    // 0x1be648: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1be648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be64c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be650: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1be650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be654: 0xc06f6d8  jal         func_1BDB60
    ctx->pc = 0x1BE654u;
    SET_GPR_U32(ctx, 31, 0x1BE65Cu);
    ctx->pc = 0x1BE658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE654u;
    // 0x1be658: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDB60u, 0x1BE654u, 0x1BE65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE65Cu;
label_1be65c:
    // 0x1be65c: 0xafc200fc  sw          $v0, 0xFC($fp)
    ctx->pc = 0x1be65cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 2));
    // 0x1be660: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1be660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be668: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1be668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be66c: 0xc06f6d8  jal         func_1BDB60
    ctx->pc = 0x1BE66Cu;
    SET_GPR_U32(ctx, 31, 0x1BE674u);
    ctx->pc = 0x1BE670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE66Cu;
    // 0x1be670: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDB60u, 0x1BE66Cu, 0x1BE674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE674u;
label_1be674:
    // 0x1be674: 0xafc20100  sw          $v0, 0x100($fp)
    ctx->pc = 0x1be674u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
    // 0x1be678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be67c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1be67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be680: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1be680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be684: 0xc06f6d8  jal         func_1BDB60
    ctx->pc = 0x1BE684u;
    SET_GPR_U32(ctx, 31, 0x1BE68Cu);
    ctx->pc = 0x1BE688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE684u;
    // 0x1be688: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDB60u, 0x1BE684u, 0x1BE68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE68Cu;
label_1be68c:
    // 0x1be68c: 0x8fa80034  lw          $t0, 0x34($sp)
    ctx->pc = 0x1be68cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1be690: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be694: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x1be694u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be698: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1be698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be69c: 0x8faa003c  lw          $t2, 0x3C($sp)
    ctx->pc = 0x1be69cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1be6a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1be6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6a4: 0x8fab0040  lw          $t3, 0x40($sp)
    ctx->pc = 0x1be6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be6a8: 0xafc20104  sw          $v0, 0x104($fp)
    ctx->pc = 0x1be6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 2));
    // 0x1be6ac: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x1be6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1be6b0: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x1be6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be6b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1be6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1be6b8: 0x8fc200fc  lw          $v0, 0xFC($fp)
    ctx->pc = 0x1be6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x1be6bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1be6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1be6c0: 0x8fc30100  lw          $v1, 0x100($fp)
    ctx->pc = 0x1be6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 256)));
    // 0x1be6c4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1be6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1be6c8: 0x8fc20104  lw          $v0, 0x104($fp)
    ctx->pc = 0x1be6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 260)));
    // 0x1be6cc: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x1be6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x1be6d0: 0xafb60028  sw          $s6, 0x28($sp)
    ctx->pc = 0x1be6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 22));
    // 0x1be6d4: 0xc06f9f2  jal         func_1BE7C8
    ctx->pc = 0x1BE6D4u;
    SET_GPR_U32(ctx, 31, 0x1BE6DCu);
    ctx->pc = 0x1BE6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6D4u;
    // 0x1be6d8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE7C8u, 0x1BE6D4u, 0x1BE6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6DCu;
label_1be6dc:
    // 0x1be6dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1be6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1be6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6e4: 0xc06f8f6  jal         func_1BE3D8
    ctx->pc = 0x1BE6E4u;
    SET_GPR_U32(ctx, 31, 0x1BE6ECu);
    ctx->pc = 0x1BE6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6E4u;
    // 0x1be6e8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D8u, 0x1BE6E4u, 0x1BE6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6ECu;
label_1be6ec:
    // 0x1be6ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1be6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1be6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6f4: 0xc06f8f6  jal         func_1BE3D8
    ctx->pc = 0x1BE6F4u;
    SET_GPR_U32(ctx, 31, 0x1BE6FCu);
    ctx->pc = 0x1BE6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE6F4u;
    // 0x1be6f8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D8u, 0x1BE6F4u, 0x1BE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE6FCu;
label_1be6fc:
    // 0x1be6fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1be6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be700: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1be700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be704: 0xc06f8f6  jal         func_1BE3D8
    ctx->pc = 0x1BE704u;
    SET_GPR_U32(ctx, 31, 0x1BE70Cu);
    ctx->pc = 0x1BE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE704u;
    // 0x1be708: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D8u, 0x1BE704u, 0x1BE70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE70Cu;
label_1be70c:
    // 0x1be70c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1be70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be710: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1be710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be714: 0xc06f8f6  jal         func_1BE3D8
    ctx->pc = 0x1BE714u;
    SET_GPR_U32(ctx, 31, 0x1BE71Cu);
    ctx->pc = 0x1BE718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE714u;
    // 0x1be718: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D8u, 0x1BE714u, 0x1BE71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE71Cu;
label_1be71c:
    // 0x1be71c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1be71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1be720: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1be720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be724: 0xc06f8f6  jal         func_1BE3D8
    ctx->pc = 0x1BE724u;
    SET_GPR_U32(ctx, 31, 0x1BE72Cu);
    ctx->pc = 0x1BE728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE724u;
    // 0x1be728: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D8u, 0x1BE724u, 0x1BE72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE72Cu;
label_1be72c:
    // 0x1be72c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1be72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1be730: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1be730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be734: 0xc06f8f6  jal         func_1BE3D8
    ctx->pc = 0x1BE734u;
    SET_GPR_U32(ctx, 31, 0x1BE73Cu);
    ctx->pc = 0x1BE738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE734u;
    // 0x1be738: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D8u, 0x1BE734u, 0x1BE73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE73Cu;
label_1be73c:
    // 0x1be73c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1be73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1be740: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1be740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be744: 0xc06f8f6  jal         func_1BE3D8
    ctx->pc = 0x1BE744u;
    SET_GPR_U32(ctx, 31, 0x1BE74Cu);
    ctx->pc = 0x1BE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE744u;
    // 0x1be748: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D8u, 0x1BE744u, 0x1BE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE74Cu;
label_1be74c:
    // 0x1be74c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1be74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be750: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1be750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be754: 0xc06f8f6  jal         func_1BE3D8
    ctx->pc = 0x1BE754u;
    SET_GPR_U32(ctx, 31, 0x1BE75Cu);
    ctx->pc = 0x1BE758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE754u;
    // 0x1be758: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3D8u, 0x1BE754u, 0x1BE75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE75Cu;
label_1be75c:
    // 0x1be75c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1be75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be760: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1be760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be764: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1be764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1be768: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x1be768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1be76c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x1be76cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1be770: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x1be770u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1be774: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1be774u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1be778: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x1be778u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1be77c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1be77cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1be780: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x1be780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1be784: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1be784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be788: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x1be788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be78c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1be78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be790: 0x806f8f6  j           func_1BE3D8
    ctx->pc = 0x1BE790u;
    ctx->pc = 0x1BE794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE790u;
    // 0x1be794: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3D8u;
    ps2__RefImageInit_0x1be3d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1BE798u;
}
