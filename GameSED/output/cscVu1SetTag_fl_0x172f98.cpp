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

// Function: cscVu1SetTag_fl
// Address: 0x172f98 - 0x1739cc
void cscVu1SetTag_fl_0x172f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cscVu1SetTag_fl_0x172f98");
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
        case 0x1730c0u: goto label_1730c0;
        case 0x173130u: goto label_173130;
        case 0x173160u: goto label_173160;
        case 0x1731a0u: goto label_1731a0;
        case 0x1731b8u: goto label_1731b8;
        case 0x1731d0u: goto label_1731d0;
        case 0x1731dcu: goto label_1731dc;
        case 0x1731f0u: goto label_1731f0;
        case 0x173200u: goto label_173200;
        case 0x17320cu: goto label_17320c;
        case 0x17321cu: goto label_17321c;
        case 0x173268u: goto label_173268;
        case 0x17329cu: goto label_17329c;
        case 0x1732a8u: goto label_1732a8;
        case 0x1732b8u: goto label_1732b8;
        case 0x1733d0u: goto label_1733d0;
        case 0x173420u: goto label_173420;
        case 0x173528u: goto label_173528;
        case 0x173570u: goto label_173570;
        case 0x173588u: goto label_173588;
        case 0x173594u: goto label_173594;
        case 0x1735a4u: goto label_1735a4;
        case 0x1736c0u: goto label_1736c0;
        case 0x173710u: goto label_173710;
        case 0x173818u: goto label_173818;
        case 0x173860u: goto label_173860;
        case 0x173878u: goto label_173878;
        case 0x173888u: goto label_173888;
        case 0x173894u: goto label_173894;
        case 0x173904u: goto label_173904;
        case 0x173914u: goto label_173914;
        case 0x173920u: goto label_173920;
        case 0x17392cu: goto label_17392c;
        case 0x173938u: goto label_173938;
        case 0x17395cu: goto label_17395c;
        case 0x173968u: goto label_173968;
        case 0x173978u: goto label_173978;
        case 0x173980u: goto label_173980;
        case 0x173988u: goto label_173988;
        case 0x173994u: goto label_173994;
        case 0x17399cu: goto label_17399c;
        default: break;
    }

    ctx->pc = 0x172f98u;

    // 0x172f98: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x172f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x172f9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x172f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fa0: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x172fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x172fa4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x172fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fac: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x172facu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x172fb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fb4: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x172fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x172fb8: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x172fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x172fbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x172fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fc0: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x172fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x172fc4: 0x7a903  sra         $s5, $a3, 4
    ctx->pc = 0x172fc4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 7), 4));
    // 0x172fc8: 0xafa6008c  sw          $a2, 0x8C($sp)
    ctx->pc = 0x172fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 6));
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
            goto label_1738fc;
        }
    }
    ctx->pc = 0x1730BCu;
    // 0x1730bc: 0x0  nop
    ctx->pc = 0x1730bcu;
    // NOP
label_1730c0:
    // 0x1730c0: 0x1aa00205  blez        $s5, . + 4 + (0x205 << 2)
    ctx->pc = 0x1730C0u;
    {
        const bool branch_taken_0x1730c0 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x1730C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1730C0u;
        // 0x1730c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730c0) {
            ctx->pc = 0x1738D8u;
            goto label_1738d8;
        }
    }
    ctx->pc = 0x1730C8u;
    // 0x1730c8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1730c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1730cc: 0x3c027200  lui         $v0, 0x7200
    ctx->pc = 0x1730ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29184 << 16));
    // 0x1730d0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1730d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1730d4: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x1730d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x1730d8: 0x752018  mult        $a0, $v1, $s5
    ctx->pc = 0x1730d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1730dc: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1730dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1730e0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x1730e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1730e4: 0x2477d5c0  addiu       $s7, $v1, -0x2A40
    ctx->pc = 0x1730e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x1730e8: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1730e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x1730ec: 0x241e0030  addiu       $fp, $zero, 0x30
    ctx->pc = 0x1730ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1730f0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x1730f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1730f4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1730f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1730f8: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x1730f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1730fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1730fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173100: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x173100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173104: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173108: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x173108u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x17310c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x173110: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x173110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x173114: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x173114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x173118: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x173118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x17311c: 0xafa600b4  sw          $a2, 0xB4($sp)
    ctx->pc = 0x17311cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 6));
    // 0x173120: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x173120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x173124: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x173124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x173128: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x173128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x17312c: 0x0  nop
    ctx->pc = 0x17312cu;
    // NOP
label_173130:
    // 0x173130: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x173130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x173134: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x173134u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x173138: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x173138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17313c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17313cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173140: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x173140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x173144: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x173144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x173148: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x173148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x17314c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x17314cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x173150: 0xafa6009c  sw          $a2, 0x9C($sp)
    ctx->pc = 0x173150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 6));
    // 0x173154: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x173154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x173158: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x173158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x17315c: 0x0  nop
    ctx->pc = 0x17315cu;
    // NOP
label_173160:
    // 0x173160: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x173160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x173164: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x173164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x173168: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x173168u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17316c: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x17316cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x173170: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x173170u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x173174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173178: 0xd61021  addu        $v0, $a2, $s6
    ctx->pc = 0x173178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x17317c: 0x2778021  addu        $s0, $s3, $s7
    ctx->pc = 0x17317cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x173180: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173184: 0x2010  mfhi        $a0
    ctx->pc = 0x173184u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x173188: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x173188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
    // 0x17318c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173190: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x173190u;
    {
        const bool branch_taken_0x173190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x173190) {
            ctx->pc = 0x173194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173190u;
            // 0x173194: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x173198u;
            goto label_173198;
        }
    }
    ctx->pc = 0x173198u;
label_173198:
    // 0x173198: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x173198u;
    SET_GPR_U32(ctx, 31, 0x1731A0u);
    ctx->pc = 0x17319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173198u;
    // 0x17319c: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x173198u, 0x1731A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731A0u;
label_1731a0:
    // 0x1731a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1731a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1731a4: 0x3c026402  lui         $v0, 0x6402
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25602 << 16));
    // 0x1731a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1731a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1731acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1731b0: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1731B0u;
    SET_GPR_U32(ctx, 31, 0x1731B8u);
    ctx->pc = 0x1731B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731B0u;
    // 0x1731b4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1731B0u, 0x1731B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731B8u;
label_1731b8:
    // 0x1731b8: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x1731b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1731bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1731bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1731c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1731c4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1731c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1731c8: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1731C8u;
    SET_GPR_U32(ctx, 31, 0x1731D0u);
    ctx->pc = 0x1731CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731C8u;
    // 0x1731cc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1731C8u, 0x1731D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731D0u;
label_1731d0:
    // 0x1731d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1731d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731d4: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1731D4u;
    SET_GPR_U32(ctx, 31, 0x1731DCu);
    ctx->pc = 0x1731D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731D4u;
    // 0x1731d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1731D4u, 0x1731DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731DCu;
label_1731dc:
    // 0x1731dc: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x1731dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1731e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1731e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1731e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1731e8: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1731E8u;
    SET_GPR_U32(ctx, 31, 0x1731F0u);
    ctx->pc = 0x1731ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731E8u;
    // 0x1731ec: 0xc22823  subu        $a1, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1731E8u, 0x1731F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1731F0u;
label_1731f0:
    // 0x1731f0: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1731f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1731f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1731f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731f8: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1731F8u;
    SET_GPR_U32(ctx, 31, 0x173200u);
    ctx->pc = 0x1731FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1731F8u;
    // 0x1731fc: 0x712823  subu        $a1, $v1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1731F8u, 0x173200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173200u;
label_173200:
    // 0x173200: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x173200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x173204: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x173204u;
    SET_GPR_U32(ctx, 31, 0x17320Cu);
    ctx->pc = 0x173208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173204u;
    // 0x173208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x173204u, 0x17320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17320Cu;
label_17320c:
    // 0x17320c: 0x3c05bcbc  lui         $a1, 0xBCBC
    ctx->pc = 0x17320cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48316 << 16));
    // 0x173210: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173214: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x173214u;
    SET_GPR_U32(ctx, 31, 0x17321Cu);
    ctx->pc = 0x173218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173214u;
    // 0x173218: 0x34a5bcbc  ori         $a1, $a1, 0xBCBC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48316);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x173214u, 0x17321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17321Cu;
label_17321c:
    // 0x17321c: 0x1619c0  sll         $v1, $s6, 7
    ctx->pc = 0x17321cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
    // 0x173220: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x173220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x173224: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x173224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x173228: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x173228u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17322c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x17322cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x173230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x173230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173234: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173238: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x173238u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x17323c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x17323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x173240: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x173240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x173244: 0x25080083  addiu       $t0, $t0, 0x83
    ctx->pc = 0x173244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 131));
    // 0x173248: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x173248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x17324c: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x17324cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x173250: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x173250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x173254: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173258: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x173258u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x17325c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17325cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173260: 0xc06bb06  jal         func_1AEC18
    ctx->pc = 0x173260u;
    SET_GPR_U32(ctx, 31, 0x173268u);
    ctx->pc = 0x173264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173260u;
    // 0x173264: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC18u, 0x173260u, 0x173268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173268u;
label_173268:
    // 0x173268: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x173268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17326c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x17326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x173270: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x173270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x173274: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x173274u;
    {
        const bool branch_taken_0x173274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173274) {
            ctx->pc = 0x173278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173274u;
            // 0x173278: 0x2405fff9  addiu       $a1, $zero, -0x7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173288u;
            goto label_173288;
        }
    }
    ctx->pc = 0x17327Cu;
    // 0x17327c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x17327cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x173280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173280u;
    {
        const bool branch_taken_0x173280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173280u;
        // 0x173284: 0x8fb100a8  lw          $s1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173280) {
            ctx->pc = 0x173290u;
            goto label_173290;
        }
    }
    ctx->pc = 0x173288u;
label_173288:
    // 0x173288: 0x8fb10080  lw          $s1, 0x80($sp)
    ctx->pc = 0x173288u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17328c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x17328cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_173290:
    // 0x173290: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173294: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x173294u;
    SET_GPR_U32(ctx, 31, 0x17329Cu);
    ctx->pc = 0x173298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173294u;
    // 0x173298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x173294u, 0x17329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17329Cu;
label_17329c:
    // 0x17329c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x17329cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1732a0: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1732A0u;
    SET_GPR_U32(ctx, 31, 0x1732A8u);
    ctx->pc = 0x1732A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1732A0u;
    // 0x1732a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1732A0u, 0x1732A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1732A8u;
label_1732a8:
    // 0x1732a8: 0x3c05f3f3  lui         $a1, 0xF3F3
    ctx->pc = 0x1732a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62451 << 16));
    // 0x1732ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1732acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732b0: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x1732B0u;
    SET_GPR_U32(ctx, 31, 0x1732B8u);
    ctx->pc = 0x1732B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1732B0u;
    // 0x1732b4: 0x34a5f3f3  ori         $a1, $a1, 0xF3F3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62451);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x1732B0u, 0x1732B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1732B8u;
label_1732b8:
    // 0x1732b8: 0x16c00027  bnez        $s6, . + 4 + (0x27 << 2)
    ctx->pc = 0x1732B8u;
    {
        const bool branch_taken_0x1732b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1732BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732B8u;
        // 0x1732bc: 0x2351018  mult        $v0, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732b8) {
            ctx->pc = 0x173358u;
            goto label_173358;
        }
    }
    ctx->pc = 0x1732C0u;
    // 0x1732c0: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1732C0u;
    {
        const bool branch_taken_0x1732c0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1732C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732C0u;
        // 0x1732c4: 0x2353018  mult        $a2, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732c0) {
            ctx->pc = 0x1732ECu;
            goto label_1732ec;
        }
    }
    ctx->pc = 0x1732C8u;
    // 0x1732c8: 0x2351018  mult        $v0, $s1, $s5
    ctx->pc = 0x1732c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1732cc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1732ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1732d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1732d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1732d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1732d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1732d8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1732d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1732dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1732dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1732e0: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x1732e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1732e4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1732e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1732e8: 0x2353018  mult        $a2, $s1, $s5
    ctx->pc = 0x1732e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1732ec:
    // 0x1732ec: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x1732ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x1732f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1732f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1732f4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1732f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1732f8: 0x24650023  addiu       $a1, $v1, 0x23
    ctx->pc = 0x1732f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
    // 0x1732fc: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x1732fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x173300: 0xd22021  addu        $a0, $a2, $s2
    ctx->pc = 0x173300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x173304: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x173304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x173308: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x173308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x17330c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x17330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173310: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173314: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x173314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x173318: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x17331c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x17331cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x173320: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x173320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173324: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x173324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x173328: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x173328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x17332c: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x17332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x173330: 0x16400025  bnez        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x173330u;
    {
        const bool branch_taken_0x173330 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x173334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173330u;
        // 0x173334: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173330) {
            ctx->pc = 0x1733C8u;
            goto label_1733c8;
        }
    }
    ctx->pc = 0x173338u;
    // 0x173338: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x173338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x17333c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x17333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x173340: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x173340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x173344: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x173344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x173348: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x17334c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173350: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x173350u;
    {
        const bool branch_taken_0x173350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173350u;
        // 0x173354: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173350) {
            ctx->pc = 0x1733C4u;
            goto label_1733c4;
        }
    }
    ctx->pc = 0x173358u;
label_173358:
    // 0x173358: 0x26a6ffff  addiu       $a2, $s5, -0x1
    ctx->pc = 0x173358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x17335c: 0x246202a  slt         $a0, $s2, $a2
    ctx->pc = 0x17335cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x173360: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x173360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x173364: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x173364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17336c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17336cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173370: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x173370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173374: 0x24a30110  addiu       $v1, $a1, 0x110
    ctx->pc = 0x173374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x173378: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173378u;
    {
        const bool branch_taken_0x173378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173378u;
        // 0x17337c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173378) {
            ctx->pc = 0x173388u;
            goto label_173388;
        }
    }
    ctx->pc = 0x173380u;
    // 0x173380: 0x24a20280  addiu       $v0, $a1, 0x280
    ctx->pc = 0x173380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x173384: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x173384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_173388:
    // 0x173388: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x173388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17338c: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x17338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x173390: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173394: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x173398: 0x24620043  addiu       $v0, $v1, 0x43
    ctx->pc = 0x173398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 67));
    // 0x17339c: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x17339cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x1733a0: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1733a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1733a4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1733a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1733a8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1733a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1733ac: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x1733acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x1733b0: 0x16460005  bne         $s2, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1733B0u;
    {
        const bool branch_taken_0x1733b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x1733B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1733B0u;
        // 0x1733b4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1733b0) {
            ctx->pc = 0x1733C8u;
            goto label_1733c8;
        }
    }
    ctx->pc = 0x1733B8u;
    // 0x1733b8: 0x24a20130  addiu       $v0, $a1, 0x130
    ctx->pc = 0x1733b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 304));
    // 0x1733bc: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x1733bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1733c0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1733c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1733c4:
    // 0x1733c4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1733c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1733c8:
    // 0x1733c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1733c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1733ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1733d0:
    // 0x1733d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1733d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1733d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1733d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1733d8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1733d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1733dc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1733dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1733e0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1733e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1733e4: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x1733e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1733e8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1733e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1733ec: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1733ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1733f0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1733f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1733f4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1733f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1733f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1733f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1733fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1733fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173400: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x173400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x173404: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173408: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17340c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17340cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173410: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x173410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173414: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x173414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x173418: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x173418u;
    SET_GPR_U32(ctx, 31, 0x173420u);
    ctx->pc = 0x17341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173418u;
    // 0x17341c: 0x24060072  addiu       $a2, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x173418u, 0x173420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173420u;
label_173420:
    // 0x173420: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x173420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173424: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x173424u;
    {
        const bool branch_taken_0x173424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173424u;
        // 0x173428: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173424) {
            ctx->pc = 0x1733D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1733d0;
        }
    }
    ctx->pc = 0x17342Cu;
    // 0x17342c: 0x16c00024  bnez        $s6, . + 4 + (0x24 << 2)
    ctx->pc = 0x17342Cu;
    {
        const bool branch_taken_0x17342c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x173430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17342Cu;
        // 0x173430: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17342c) {
            ctx->pc = 0x1734C0u;
            goto label_1734c0;
        }
    }
    ctx->pc = 0x173434u;
    // 0x173434: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x173434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173438: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x173438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x17343c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17343cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173440: 0xd54018  mult        $t0, $a2, $s5
    ctx->pc = 0x173440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x173444: 0x2d2302a  slt         $a2, $s6, $s2
    ctx->pc = 0x173444u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x173448: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x173448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17344c: 0x24a700e3  addiu       $a3, $a1, 0xE3
    ctx->pc = 0x17344cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 227));
    // 0x173450: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x173450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x173454: 0x24a500d3  addiu       $a1, $a1, 0xD3
    ctx->pc = 0x173454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 211));
    // 0x173458: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x173458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17345c: 0x1122021  addu        $a0, $t0, $s2
    ctx->pc = 0x17345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x173460: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x173460u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x173464: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x173464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x173468: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x173468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x17346c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173470: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x173470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173474: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173478: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x173478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x17347c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173480: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x173480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x173484: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x173484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x173488: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17348c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x17348cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x173490: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x173490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x173494: 0x16400022  bnez        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x173494u;
    {
        const bool branch_taken_0x173494 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x173498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173494u;
        // 0x173498: 0xafbe0054  sw          $fp, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173494) {
            ctx->pc = 0x173520u;
            goto label_173520;
        }
    }
    ctx->pc = 0x17349Cu;
    // 0x17349c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x17349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1734a0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1734a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1734a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1734a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1734a8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1734a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1734ac: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1734acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1734b0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1734b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1734b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1734B4u;
    {
        const bool branch_taken_0x1734b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734B4u;
        // 0x1734b8: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734b4) {
            ctx->pc = 0x17351Cu;
            goto label_17351c;
        }
    }
    ctx->pc = 0x1734BCu;
    // 0x1734bc: 0x0  nop
    ctx->pc = 0x1734bcu;
    // NOP
label_1734c0:
    // 0x1734c0: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x1734c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1734c4: 0x26a5ffff  addiu       $a1, $s5, -0x1
    ctx->pc = 0x1734c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1734c8: 0x24820110  addiu       $v0, $a0, 0x110
    ctx->pc = 0x1734c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x1734cc: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x1734ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1734d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1734D0u;
    {
        const bool branch_taken_0x1734d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734D0u;
        // 0x1734d4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734d0) {
            ctx->pc = 0x1734E0u;
            goto label_1734e0;
        }
    }
    ctx->pc = 0x1734D8u;
    // 0x1734d8: 0x24820280  addiu       $v0, $a0, 0x280
    ctx->pc = 0x1734d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 640));
    // 0x1734dc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1734dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1734e0:
    // 0x1734e0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1734e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1734e4: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x1734e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x1734e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1734e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1734ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1734ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1734f0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1734f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1734f4: 0x24620103  addiu       $v0, $v1, 0x103
    ctx->pc = 0x1734f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 259));
    // 0x1734f8: 0x246300d3  addiu       $v1, $v1, 0xD3
    ctx->pc = 0x1734f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 211));
    // 0x1734fc: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1734fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x173500: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x173500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x173504: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x173504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x173508: 0x16450005  bne         $s2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x173508u;
    {
        const bool branch_taken_0x173508 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x17350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173508u;
        // 0x17350c: 0xafa60050  sw          $a2, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173508) {
            ctx->pc = 0x173520u;
            goto label_173520;
        }
    }
    ctx->pc = 0x173510u;
    // 0x173510: 0x24820130  addiu       $v0, $a0, 0x130
    ctx->pc = 0x173510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x173514: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x173514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x173518: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x173518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_17351c:
    // 0x17351c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x17351cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_173520:
    // 0x173520: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x173520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173524: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x173524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_173528:
    // 0x173528: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x173528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17352c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173530: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x173530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173534: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x173534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173538: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x173538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17353c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x17353cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173540: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x173540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173544: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x173544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173548: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17354c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x17354cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173550: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173554: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x173554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173558: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x173558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x17355c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x17355cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x173560: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x173560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x173564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173568: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x173568u;
    SET_GPR_U32(ctx, 31, 0x173570u);
    ctx->pc = 0x17356Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173568u;
    // 0x17356c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x173568u, 0x173570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173570u;
label_173570:
    // 0x173570: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x173570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173574: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x173574u;
    {
        const bool branch_taken_0x173574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173574) {
            ctx->pc = 0x173578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173574u;
            // 0x173578: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173528;
        }
    }
    ctx->pc = 0x17357Cu;
    // 0x17357c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17357cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173580: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x173580u;
    SET_GPR_U32(ctx, 31, 0x173588u);
    ctx->pc = 0x173584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173580u;
    // 0x173584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x173580u, 0x173588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173588u;
label_173588:
    // 0x173588: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x173588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x17358c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17358Cu;
    SET_GPR_U32(ctx, 31, 0x173594u);
    ctx->pc = 0x173590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17358Cu;
    // 0x173590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17358Cu, 0x173594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173594u;
label_173594:
    // 0x173594: 0x3c05cfcf  lui         $a1, 0xCFCF
    ctx->pc = 0x173594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53199 << 16));
    // 0x173598: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17359c: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x17359Cu;
    SET_GPR_U32(ctx, 31, 0x1735A4u);
    ctx->pc = 0x1735A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17359Cu;
    // 0x1735a0: 0x34a5cfcf  ori         $a1, $a1, 0xCFCF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53199);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x17359Cu, 0x1735A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1735A4u;
label_1735a4:
    // 0x1735a4: 0x16c00028  bnez        $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x1735A4u;
    {
        const bool branch_taken_0x1735a4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1735A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735A4u;
        // 0x1735a8: 0x2351018  mult        $v0, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735a4) {
            ctx->pc = 0x173648u;
            goto label_173648;
        }
    }
    ctx->pc = 0x1735ACu;
    // 0x1735ac: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1735ACu;
    {
        const bool branch_taken_0x1735ac = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1735B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1735ACu;
        // 0x1735b0: 0x2353018  mult        $a2, $s1, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1735ac) {
            ctx->pc = 0x1735D8u;
            goto label_1735d8;
        }
    }
    ctx->pc = 0x1735B4u;
    // 0x1735b4: 0x2351018  mult        $v0, $s1, $s5
    ctx->pc = 0x1735b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1735b8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1735b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1735bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1735bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1735c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1735c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1735c4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1735c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1735c8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1735c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1735cc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1735ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1735d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1735d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1735d4: 0x2353018  mult        $a2, $s1, $s5
    ctx->pc = 0x1735d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_1735d8:
    // 0x1735d8: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x1735d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x1735dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1735dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1735e0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1735e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1735e4: 0x24650023  addiu       $a1, $v1, 0x23
    ctx->pc = 0x1735e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
    // 0x1735e8: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x1735e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x1735ec: 0xd22021  addu        $a0, $a2, $s2
    ctx->pc = 0x1735ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1735f0: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1735f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x1735f4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1735f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1735f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1735f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1735fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1735fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173600: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x173600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x173604: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173608: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17360c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173610: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x173610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x173614: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x173614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x173618: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x173618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x17361c: 0x16400026  bnez        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x17361Cu;
    {
        const bool branch_taken_0x17361c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x173620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17361Cu;
        // 0x173620: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17361c) {
            ctx->pc = 0x1736B8u;
            goto label_1736b8;
        }
    }
    ctx->pc = 0x173624u;
    // 0x173624: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x173624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x173628: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x173628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17362c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x17362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x173630: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x173630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x173634: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173638: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x173638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x17363c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17363Cu;
    {
        const bool branch_taken_0x17363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17363Cu;
        // 0x173640: 0x24420140  addiu       $v0, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17363c) {
            ctx->pc = 0x1736B4u;
            goto label_1736b4;
        }
    }
    ctx->pc = 0x173644u;
    // 0x173644: 0x0  nop
    ctx->pc = 0x173644u;
    // NOP
label_173648:
    // 0x173648: 0x26a6ffff  addiu       $a2, $s5, -0x1
    ctx->pc = 0x173648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x17364c: 0x246202a  slt         $a0, $s2, $a2
    ctx->pc = 0x17364cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x173650: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x173650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x173654: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x173654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17365c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17365cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173660: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x173660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173664: 0x24a30150  addiu       $v1, $a1, 0x150
    ctx->pc = 0x173664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    // 0x173668: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173668u;
    {
        const bool branch_taken_0x173668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173668u;
        // 0x17366c: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173668) {
            ctx->pc = 0x173678u;
            goto label_173678;
        }
    }
    ctx->pc = 0x173670u;
    // 0x173670: 0x24a202c0  addiu       $v0, $a1, 0x2C0
    ctx->pc = 0x173670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x173674: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x173674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_173678:
    // 0x173678: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x173678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x17367c: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x17367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x173680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173684: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x173688: 0x24620043  addiu       $v0, $v1, 0x43
    ctx->pc = 0x173688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 67));
    // 0x17368c: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x17368cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x173690: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x173690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x173694: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x173694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173698: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x173698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x17369c: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x17369cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x1736a0: 0x16460005  bne         $s2, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1736A0u;
    {
        const bool branch_taken_0x1736a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x1736A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736A0u;
        // 0x1736a4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1736a0) {
            ctx->pc = 0x1736B8u;
            goto label_1736b8;
        }
    }
    ctx->pc = 0x1736A8u;
    // 0x1736a8: 0x24a20170  addiu       $v0, $a1, 0x170
    ctx->pc = 0x1736a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
    // 0x1736ac: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x1736acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1736b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1736b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1736b4:
    // 0x1736b4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1736b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1736b8:
    // 0x1736b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1736b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1736c0:
    // 0x1736c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1736c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1736c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1736c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1736c8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1736cc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1736ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1736d0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1736d4: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x1736d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1736d8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1736d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1736dc: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1736dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1736e0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1736e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1736e4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1736e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1736e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1736ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1736ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1736f0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1736f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1736f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1736f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1736f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1736f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1736fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173700: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x173700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173704: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x173704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x173708: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x173708u;
    SET_GPR_U32(ctx, 31, 0x173710u);
    ctx->pc = 0x17370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173708u;
    // 0x17370c: 0x24060072  addiu       $a2, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x173708u, 0x173710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173710u;
label_173710:
    // 0x173710: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x173710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173714: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x173714u;
    {
        const bool branch_taken_0x173714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173714u;
        // 0x173718: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173714) {
            ctx->pc = 0x1736C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1736c0;
        }
    }
    ctx->pc = 0x17371Cu;
    // 0x17371c: 0x16c00024  bnez        $s6, . + 4 + (0x24 << 2)
    ctx->pc = 0x17371Cu;
    {
        const bool branch_taken_0x17371c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x173720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17371Cu;
        // 0x173720: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17371c) {
            ctx->pc = 0x1737B0u;
            goto label_1737b0;
        }
    }
    ctx->pc = 0x173724u;
    // 0x173724: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x173724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173728: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x173728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x17372c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17372cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173730: 0xd54018  mult        $t0, $a2, $s5
    ctx->pc = 0x173730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x173734: 0x2d2302a  slt         $a2, $s6, $s2
    ctx->pc = 0x173734u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x173738: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x173738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17373c: 0x24a700e3  addiu       $a3, $a1, 0xE3
    ctx->pc = 0x17373cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 227));
    // 0x173740: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x173740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x173744: 0x24a500d3  addiu       $a1, $a1, 0xD3
    ctx->pc = 0x173744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 211));
    // 0x173748: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x173748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17374c: 0x1122021  addu        $a0, $t0, $s2
    ctx->pc = 0x17374cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x173750: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x173750u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x173754: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x173754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x173758: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x173758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x17375c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173760: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x173760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173764: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173768: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x173768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x17376c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17376cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173770: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x173770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x173774: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x173774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x173778: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17377c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x17377cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x173780: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x173780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x173784: 0x16400022  bnez        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x173784u;
    {
        const bool branch_taken_0x173784 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x173788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173784u;
        // 0x173788: 0xafbe0054  sw          $fp, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173784) {
            ctx->pc = 0x173810u;
            goto label_173810;
        }
    }
    ctx->pc = 0x17378Cu;
    // 0x17378c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x17378cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x173790: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x173790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x173794: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x173794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x173798: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x173798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17379c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17379cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1737a0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1737a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1737a4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1737A4u;
    {
        const bool branch_taken_0x1737a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1737A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737A4u;
        // 0x1737a8: 0x24420140  addiu       $v0, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737a4) {
            ctx->pc = 0x17380Cu;
            goto label_17380c;
        }
    }
    ctx->pc = 0x1737ACu;
    // 0x1737ac: 0x0  nop
    ctx->pc = 0x1737acu;
    // NOP
label_1737b0:
    // 0x1737b0: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x1737b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x1737b4: 0x26a5ffff  addiu       $a1, $s5, -0x1
    ctx->pc = 0x1737b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1737b8: 0x24820150  addiu       $v0, $a0, 0x150
    ctx->pc = 0x1737b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1737bc: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x1737bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1737c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1737C0u;
    {
        const bool branch_taken_0x1737c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1737C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737C0u;
        // 0x1737c4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737c0) {
            ctx->pc = 0x1737D0u;
            goto label_1737d0;
        }
    }
    ctx->pc = 0x1737C8u;
    // 0x1737c8: 0x248202c0  addiu       $v0, $a0, 0x2C0
    ctx->pc = 0x1737c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    // 0x1737cc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1737ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1737d0:
    // 0x1737d0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1737d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1737d4: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x1737d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x1737d8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1737d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1737dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1737dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1737e0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1737e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1737e4: 0x24620103  addiu       $v0, $v1, 0x103
    ctx->pc = 0x1737e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 259));
    // 0x1737e8: 0x246300d3  addiu       $v1, $v1, 0xD3
    ctx->pc = 0x1737e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 211));
    // 0x1737ec: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1737ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1737f0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1737f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1737f4: 0xafbe0054  sw          $fp, 0x54($sp)
    ctx->pc = 0x1737f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
    // 0x1737f8: 0x16450005  bne         $s2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1737F8u;
    {
        const bool branch_taken_0x1737f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x1737FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1737F8u;
        // 0x1737fc: 0xafa60050  sw          $a2, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1737f8) {
            ctx->pc = 0x173810u;
            goto label_173810;
        }
    }
    ctx->pc = 0x173800u;
    // 0x173800: 0x24820170  addiu       $v0, $a0, 0x170
    ctx->pc = 0x173800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x173804: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x173804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x173808: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x173808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_17380c:
    // 0x17380c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x17380cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_173810:
    // 0x173810: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x173810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173814: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x173814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_173818:
    // 0x173818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x173818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17381c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173820: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x173820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173824: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x173824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173828: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x173828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17382c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x17382cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173830: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x173830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173834: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x173834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x173838: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17383c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x17383cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173840: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173844: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x173844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173848: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x173848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x17384c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x17384cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x173850: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x173850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x173854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173858: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x173858u;
    SET_GPR_U32(ctx, 31, 0x173860u);
    ctx->pc = 0x17385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173858u;
    // 0x17385c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x173858u, 0x173860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173860u;
label_173860:
    // 0x173860: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x173860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173864: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x173864u;
    {
        const bool branch_taken_0x173864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173864) {
            ctx->pc = 0x173868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173864u;
            // 0x173868: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173818;
        }
    }
    ctx->pc = 0x17386Cu;
    // 0x17386c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173870: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x173870u;
    SET_GPR_U32(ctx, 31, 0x173878u);
    ctx->pc = 0x173874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173870u;
    // 0x173874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x173870u, 0x173878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173878u;
label_173878:
    // 0x173878: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x173878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x17387c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17387cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173880: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x173880u;
    SET_GPR_U32(ctx, 31, 0x173888u);
    ctx->pc = 0x173884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173880u;
    // 0x173884: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x173880u, 0x173888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173888u;
label_173888:
    // 0x173888: 0x3c051700  lui         $a1, 0x1700
    ctx->pc = 0x173888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5888 << 16));
    // 0x17388c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17388Cu;
    SET_GPR_U32(ctx, 31, 0x173894u);
    ctx->pc = 0x173890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17388Cu;
    // 0x173890: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17388Cu, 0x173894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173894u;
label_173894:
    // 0x173894: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x173894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173898: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x173898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x17389c: 0x8fb10084  lw          $s1, 0x84($sp)
    ctx->pc = 0x17389cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1738a0: 0x8fb00094  lw          $s0, 0x94($sp)
    ctx->pc = 0x1738a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1738a4: 0x1440fe2e  bnez        $v0, . + 4 + (-0x1D2 << 2)
    ctx->pc = 0x1738A4u;
    {
        const bool branch_taken_0x1738a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1738A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738A4u;
        // 0x1738a8: 0xafa50088  sw          $a1, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738a4) {
            ctx->pc = 0x173160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173160;
        }
    }
    ctx->pc = 0x1738ACu;
    // 0x1738ac: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x1738acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1738b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1738b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1738b4: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1738b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1738b8: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x1738b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1738bc: 0x24c60180  addiu       $a2, $a2, 0x180
    ctx->pc = 0x1738bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
    // 0x1738c0: 0x24630180  addiu       $v1, $v1, 0x180
    ctx->pc = 0x1738c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1738c4: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x1738c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x1738c8: 0x1440fe19  bnez        $v0, . + 4 + (-0x1E7 << 2)
    ctx->pc = 0x1738C8u;
    {
        const bool branch_taken_0x1738c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1738CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738C8u;
        // 0x1738cc: 0xafa300bc  sw          $v1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738c8) {
            ctx->pc = 0x173130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173130;
        }
    }
    ctx->pc = 0x1738D0u;
    // 0x1738d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1738D0u;
    {
        const bool branch_taken_0x1738d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1738D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738D0u;
        // 0x1738d4: 0x8fa500a8  lw          $a1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738d0) {
            ctx->pc = 0x1738E8u;
            goto label_1738e8;
        }
    }
    ctx->pc = 0x1738D8u;
label_1738d8:
    // 0x1738d8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1738d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1738dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1738dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1738e0: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1738e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1738e4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1738e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1738e8:
    // 0x1738e8: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x1738e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1738ec: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x1738ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1738f0: 0x1440fdf3  bnez        $v0, . + 4 + (-0x20D << 2)
    ctx->pc = 0x1738F0u;
    {
        const bool branch_taken_0x1738f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1738F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1738F0u;
        // 0x1738f4: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1738f0) {
            ctx->pc = 0x1730C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1730c0;
        }
    }
    ctx->pc = 0x1738F8u;
    // 0x1738f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1738f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1738fc:
    // 0x1738fc: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x1738FCu;
    SET_GPR_U32(ctx, 31, 0x173904u);
    ctx->pc = 0x173900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1738FCu;
    // 0x173900: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x1738FCu, 0x173904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173904u;
label_173904:
    // 0x173904: 0x3c051500  lui         $a1, 0x1500
    ctx->pc = 0x173904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5376 << 16));
    // 0x173908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17390c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17390Cu;
    SET_GPR_U32(ctx, 31, 0x173914u);
    ctx->pc = 0x173910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17390Cu;
    // 0x173910: 0x34a507fc  ori         $a1, $a1, 0x7FC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17390Cu, 0x173914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173914u;
label_173914:
    // 0x173914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173918: 0xc06bb48  jal         func_1AED20
    ctx->pc = 0x173918u;
    SET_GPR_U32(ctx, 31, 0x173920u);
    ctx->pc = 0x17391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173918u;
    // 0x17391c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED20u, 0x173918u, 0x173920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173920u;
label_173920:
    // 0x173920: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x173920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x173924: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x173924u;
    SET_GPR_U32(ctx, 31, 0x17392Cu);
    ctx->pc = 0x173928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173924u;
    // 0x173928: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x173924u, 0x17392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17392Cu;
label_17392c:
    // 0x17392c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17392cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173930: 0xc06bb5e  jal         func_1AED78
    ctx->pc = 0x173930u;
    SET_GPR_U32(ctx, 31, 0x173938u);
    ctx->pc = 0x173934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173930u;
    // 0x173934: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED78u, 0x173930u, 0x173938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173938u;
label_173938:
    // 0x173938: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x173938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17393c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17393cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x173944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173948: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x173948u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17394c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x17394cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173950: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x173950u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173954: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x173954u;
    SET_GPR_U32(ctx, 31, 0x17395Cu);
    ctx->pc = 0x173958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173954u;
    // 0x173958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x173954u, 0x17395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17395Cu;
label_17395c:
    // 0x17395c: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x17395cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x173960: 0xc06bb80  jal         func_1AEE00
    ctx->pc = 0x173960u;
    SET_GPR_U32(ctx, 31, 0x173968u);
    ctx->pc = 0x173964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173960u;
    // 0x173964: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE00u, 0x173960u, 0x173968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173968u;
label_173968:
    // 0x173968: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x173968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x17396c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17396cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173970: 0xc06bbfc  jal         func_1AEFF0
    ctx->pc = 0x173970u;
    SET_GPR_U32(ctx, 31, 0x173978u);
    ctx->pc = 0x173974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173970u;
    // 0x173974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFF0u, 0x173970u, 0x173978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173978u;
label_173978:
    // 0x173978: 0xc06bb86  jal         func_1AEE18
    ctx->pc = 0x173978u;
    SET_GPR_U32(ctx, 31, 0x173980u);
    ctx->pc = 0x17397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173978u;
    // 0x17397c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE18u, 0x173978u, 0x173980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173980u;
label_173980:
    // 0x173980: 0xc06bb74  jal         func_1AEDD0
    ctx->pc = 0x173980u;
    SET_GPR_U32(ctx, 31, 0x173988u);
    ctx->pc = 0x173984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173980u;
    // 0x173984: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEDD0u, 0x173980u, 0x173988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173988u;
label_173988:
    // 0x173988: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x173988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x17398c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17398Cu;
    SET_GPR_U32(ctx, 31, 0x173994u);
    ctx->pc = 0x173990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17398Cu;
    // 0x173990: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17398Cu, 0x173994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173994u;
label_173994:
    // 0x173994: 0xc06bada  jal         func_1AEB68
    ctx->pc = 0x173994u;
    SET_GPR_U32(ctx, 31, 0x17399Cu);
    ctx->pc = 0x173998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173994u;
    // 0x173998: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB68u, 0x173994u, 0x17399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17399Cu;
label_17399c:
    // 0x17399c: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x17399cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1739a0: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1739a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1739a4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1739a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1739a8: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x1739a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1739ac: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x1739acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1739b0: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x1739b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1739b4: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x1739b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1739b8: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x1739b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1739bc: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x1739bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1739c0: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x1739c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1739c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1739C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1739C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1739C4u;
        // 0x1739c8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1739C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1739CCu;
}
