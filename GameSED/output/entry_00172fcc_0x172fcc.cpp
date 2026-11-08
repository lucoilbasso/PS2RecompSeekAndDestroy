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

// Function: entry_00172fcc
// Address: 0x172fcc - 0x1730c0
void entry_00172fcc_0x172fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172fcc_0x172fcc");
#endif

    switch (ctx->pc) {
        case 0x172fecu: goto label_172fec;
        case 0x172ff4u: goto label_172ff4;
        case 0x173008u: goto label_173008;
        case 0x173014u: goto label_173014;
        case 0x173020u: goto label_173020;
        case 0x173034u: goto label_173034;
        case 0x173058u: goto label_173058;
        case 0x17306cu: goto label_17306c;
        case 0x173078u: goto label_173078;
        case 0x173088u: goto label_173088;
        case 0x173094u: goto label_173094;
        case 0x1730a4u: goto label_1730a4;
        case 0x1730b0u: goto label_1730b0;
        default: break;
    }

    ctx->pc = 0x172fccu;

    // 0x172fcc: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x172fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x172fd0: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x172fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x172fd4: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x172fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x172fd8: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x172fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x172fdc: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x172fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x172fe0: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x172fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x172fe4: 0xc06bad2  jal         func_1AEB48
    ctx->pc = 0x172FE4u;
    SET_GPR_U32(ctx, 31, 0x172FECu);
    ctx->pc = 0x172FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172FE4u;
    // 0x172fe8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB48u, 0x172FE4u, 0x172FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FECu;
label_172fec:
    // 0x172fec: 0xc06bad6  jal         func_1AEB58
    ctx->pc = 0x172FECu;
    SET_GPR_U32(ctx, 31, 0x172FF4u);
    ctx->pc = 0x172FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172FECu;
    // 0x172ff0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB58u, 0x172FECu, 0x172FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172FF4u;
label_172ff4:
    // 0x172ff4: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x172ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x172ff8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173000: 0xc06bb2c  jal         func_1AECB0
    ctx->pc = 0x173000u;
    SET_GPR_U32(ctx, 31, 0x173008u);
    ctx->pc = 0x173004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173000u;
    // 0x173004: 0x24a52300  addiu       $a1, $a1, 0x2300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AECB0u, 0x173000u, 0x173008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173008u;
label_173008:
    // 0x173008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17300c: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x17300Cu;
    SET_GPR_U32(ctx, 31, 0x173014u);
    ctx->pc = 0x173010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17300Cu;
    // 0x173010: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x17300Cu, 0x173014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173014u;
label_173014:
    // 0x173014: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x173014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x173018: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x173018u;
    SET_GPR_U32(ctx, 31, 0x173020u);
    ctx->pc = 0x17301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173018u;
    // 0x17301c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x173018u, 0x173020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173020u;
label_173020:
    // 0x173020: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x173020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x173024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173028: 0x34a50404  ori         $a1, $a1, 0x404
    ctx->pc = 0x173028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x17302c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17302Cu;
    SET_GPR_U32(ctx, 31, 0x173034u);
    ctx->pc = 0x173030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17302Cu;
    // 0x173030: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17302Cu, 0x173034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173034u;
label_173034:
    // 0x173034: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x173034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173038: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17303c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17303cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173044: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x173044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173048: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x173048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17304c: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x17304cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x173050: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x173050u;
    SET_GPR_U32(ctx, 31, 0x173058u);
    ctx->pc = 0x173054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173050u;
    // 0x173054: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x173050u, 0x173058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173058u;
label_173058:
    // 0x173058: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x173058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x17305c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17305cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173060: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x173060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x173064: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x173064u;
    SET_GPR_U32(ctx, 31, 0x17306Cu);
    ctx->pc = 0x173068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173064u;
    // 0x173068: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x173064u, 0x17306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17306Cu;
label_17306c:
    // 0x17306c: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x17306cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173070: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x173070u;
    SET_GPR_U32(ctx, 31, 0x173078u);
    ctx->pc = 0x173074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173070u;
    // 0x173074: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x173070u, 0x173078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173078u;
label_173078:
    // 0x173078: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x173078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x17307c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173080: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x173080u;
    SET_GPR_U32(ctx, 31, 0x173088u);
    ctx->pc = 0x173084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173080u;
    // 0x173084: 0x34a5015a  ori         $a1, $a1, 0x15A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)346);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x173080u, 0x173088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173088u;
label_173088:
    // 0x173088: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x173088u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17308c: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x17308Cu;
    SET_GPR_U32(ctx, 31, 0x173094u);
    ctx->pc = 0x173090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17308Cu;
    // 0x173090: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x17308Cu, 0x173094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173094u;
label_173094:
    // 0x173094: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x173094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x173098: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17309c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17309Cu;
    SET_GPR_U32(ctx, 31, 0x1730A4u);
    ctx->pc = 0x1730A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17309Cu;
    // 0x1730a0: 0x34a502ad  ori         $a1, $a1, 0x2AD (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)685);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17309Cu, 0x1730A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730A4u;
label_1730a4:
    // 0x1730a4: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x1730a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1730a8: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x1730A8u;
    SET_GPR_U32(ctx, 31, 0x1730B0u);
    ctx->pc = 0x1730ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1730A8u;
    // 0x1730ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x1730A8u, 0x1730B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1730B0u;
label_1730b0:
    // 0x1730b0: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x1730b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1730b4: 0x18400211  blez        $v0, . + 4 + (0x211 << 2)
    ctx->pc = 0x1730B4u;
    {
        const bool branch_taken_0x1730b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1730B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730B4u;
        // 0x1730b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730b4) {
            ctx->pc = 0x1738FCu;
            return;
        }
    }
    ctx->pc = 0x1730BCu;
    // 0x1730bc: 0x0  nop
    ctx->pc = 0x1730bcu;
    // NOP
    ctx->pc = 0x1730c0u;
}
