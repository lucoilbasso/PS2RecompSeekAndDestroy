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

// Function: cscVu1SetTag_frfl
// Address: 0x171fa8 - 0x172734
void cscVu1SetTag_frfl_0x171fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cscVu1SetTag_frfl_0x171fa8");
#endif

    switch (ctx->pc) {
        case 0x172000u: goto label_172000;
        case 0x172008u: goto label_172008;
        case 0x17201cu: goto label_17201c;
        case 0x172028u: goto label_172028;
        case 0x172034u: goto label_172034;
        case 0x172044u: goto label_172044;
        case 0x172068u: goto label_172068;
        case 0x17207cu: goto label_17207c;
        case 0x172088u: goto label_172088;
        case 0x172098u: goto label_172098;
        case 0x1720a4u: goto label_1720a4;
        case 0x1720b4u: goto label_1720b4;
        case 0x1720c0u: goto label_1720c0;
        case 0x1720d0u: goto label_1720d0;
        case 0x172130u: goto label_172130;
        case 0x172160u: goto label_172160;
        case 0x172188u: goto label_172188;
        case 0x172194u: goto label_172194;
        case 0x1721a4u: goto label_1721a4;
        case 0x1721b4u: goto label_1721b4;
        case 0x1721c0u: goto label_1721c0;
        case 0x1721d0u: goto label_1721d0;
        case 0x17221cu: goto label_17221c;
        case 0x17229cu: goto label_17229c;
        case 0x1722d0u: goto label_1722d0;
        case 0x17234cu: goto label_17234c;
        case 0x17238cu: goto label_17238c;
        case 0x1723d0u: goto label_1723d0;
        case 0x172400u: goto label_172400;
        case 0x172420u: goto label_172420;
        case 0x172474u: goto label_172474;
        case 0x1724a8u: goto label_1724a8;
        case 0x172524u: goto label_172524;
        case 0x172564u: goto label_172564;
        case 0x1725a8u: goto label_1725a8;
        case 0x1725d8u: goto label_1725d8;
        case 0x1725f8u: goto label_1725f8;
        case 0x172608u: goto label_172608;
        case 0x172618u: goto label_172618;
        case 0x172624u: goto label_172624;
        case 0x17266cu: goto label_17266c;
        case 0x17267cu: goto label_17267c;
        case 0x172688u: goto label_172688;
        case 0x172694u: goto label_172694;
        case 0x1726a0u: goto label_1726a0;
        case 0x1726c4u: goto label_1726c4;
        case 0x1726d0u: goto label_1726d0;
        case 0x1726e0u: goto label_1726e0;
        case 0x1726e8u: goto label_1726e8;
        case 0x1726f0u: goto label_1726f0;
        case 0x1726fcu: goto label_1726fc;
        case 0x172704u: goto label_172704;
        default: break;
    }

    ctx->pc = 0x171fa8u;

    // 0x171fa8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x171fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x171fac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x171facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fb0: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x171fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x171fb4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x171fb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x171fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fbc: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x171fbcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x171fc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fc4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x171fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x171fc8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x171fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x171fcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fd0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x171fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x171fd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x171fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fd8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x171fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x171fdc: 0x7b103  sra         $s6, $a3, 4
    ctx->pc = 0x171fdcu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 7), 4));
    // 0x171fe0: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x171fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x171fe4: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x171fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x171fe8: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x171fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x171fec: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x171fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x171ff0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x171ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x171ff4: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x171ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x171ff8: 0xc06bad2  jal         func_1AEB48
    ctx->pc = 0x171FF8u;
    SET_GPR_U32(ctx, 31, 0x172000u);
    ctx->pc = 0x171FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FF8u;
    // 0x171ffc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB48u, 0x171FF8u, 0x172000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172000u;
label_172000:
    // 0x172000: 0xc06bad6  jal         func_1AEB58
    ctx->pc = 0x172000u;
    SET_GPR_U32(ctx, 31, 0x172008u);
    ctx->pc = 0x172004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172000u;
    // 0x172004: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB58u, 0x172000u, 0x172008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172008u;
label_172008:
    // 0x172008: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x172008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x17200c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17200cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172014: 0xc06bb2c  jal         func_1AECB0
    ctx->pc = 0x172014u;
    SET_GPR_U32(ctx, 31, 0x17201Cu);
    ctx->pc = 0x172018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172014u;
    // 0x172018: 0x24a52300  addiu       $a1, $a1, 0x2300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AECB0u, 0x172014u, 0x17201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17201Cu;
label_17201c:
    // 0x17201c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172020: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172020u;
    SET_GPR_U32(ctx, 31, 0x172028u);
    ctx->pc = 0x172024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172020u;
    // 0x172024: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172020u, 0x172028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172028u;
label_172028:
    // 0x172028: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x172028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x17202c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17202Cu;
    SET_GPR_U32(ctx, 31, 0x172034u);
    ctx->pc = 0x172030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17202Cu;
    // 0x172030: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17202Cu, 0x172034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172034u;
label_172034:
    // 0x172034: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x172034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x172038: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17203c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17203Cu;
    SET_GPR_U32(ctx, 31, 0x172044u);
    ctx->pc = 0x172040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17203Cu;
    // 0x172040: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17203Cu, 0x172044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172044u;
label_172044:
    // 0x172044: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x172044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x172048: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x172048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17204c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17204cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x172050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172058: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x172058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17205c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x17205cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172060: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x172060u;
    SET_GPR_U32(ctx, 31, 0x172068u);
    ctx->pc = 0x172064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172060u;
    // 0x172064: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x172060u, 0x172068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172068u;
label_172068:
    // 0x172068: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x172068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x17206c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17206cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172070: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x172070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x172074: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172074u;
    SET_GPR_U32(ctx, 31, 0x17207Cu);
    ctx->pc = 0x172078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172074u;
    // 0x172078: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172074u, 0x17207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17207Cu;
label_17207c:
    // 0x17207c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x17207cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172080: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x172080u;
    SET_GPR_U32(ctx, 31, 0x172088u);
    ctx->pc = 0x172084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172080u;
    // 0x172084: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x172080u, 0x172088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172088u;
label_172088:
    // 0x172088: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x172088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x17208c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17208cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172090: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172090u;
    SET_GPR_U32(ctx, 31, 0x172098u);
    ctx->pc = 0x172094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172090u;
    // 0x172094: 0x34a5015a  ori         $a1, $a1, 0x15A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)346);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172090u, 0x172098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172098u;
label_172098:
    // 0x172098: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x172098u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17209c: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x17209Cu;
    SET_GPR_U32(ctx, 31, 0x1720A4u);
    ctx->pc = 0x1720A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17209Cu;
    // 0x1720a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x17209Cu, 0x1720A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720A4u;
label_1720a4:
    // 0x1720a4: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x1720a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x1720a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1720a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720ac: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1720ACu;
    SET_GPR_U32(ctx, 31, 0x1720B4u);
    ctx->pc = 0x1720B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1720ACu;
    // 0x1720b0: 0x34a502ad  ori         $a1, $a1, 0x2AD (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)685);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1720ACu, 0x1720B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720B4u;
label_1720b4:
    // 0x1720b4: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x1720b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1720b8: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x1720B8u;
    SET_GPR_U32(ctx, 31, 0x1720C0u);
    ctx->pc = 0x1720BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1720B8u;
    // 0x1720bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x1720B8u, 0x1720C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720C0u;
label_1720c0:
    // 0x1720c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1720c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1720c4: 0x18400167  blez        $v0, . + 4 + (0x167 << 2)
    ctx->pc = 0x1720C4u;
    {
        const bool branch_taken_0x1720c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1720C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720C4u;
        // 0x1720c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720c4) {
            ctx->pc = 0x172664u;
            goto label_172664;
        }
    }
    ctx->pc = 0x1720CCu;
    // 0x1720cc: 0x0  nop
    ctx->pc = 0x1720ccu;
    // NOP
label_1720d0:
    // 0x1720d0: 0x1ac0015b  blez        $s6, . + 4 + (0x15B << 2)
    ctx->pc = 0x1720D0u;
    {
        const bool branch_taken_0x1720d0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1720D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1720D0u;
        // 0x1720d4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720d0) {
            ctx->pc = 0x172640u;
            goto label_172640;
        }
    }
    ctx->pc = 0x1720D8u;
    // 0x1720d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1720d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1720dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1720dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1720e0: 0x961818  mult        $v1, $a0, $s6
    ctx->pc = 0x1720e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1720e4: 0x3c047200  lui         $a0, 0x7200
    ctx->pc = 0x1720e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29184 << 16));
    // 0x1720e8: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1720e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1720ec: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x1720ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x1720f0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1720f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1720f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1720f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1720f8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1720f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1720fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1720fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172100: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x172100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x172104: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172108: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x172108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x17210c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172110: 0x3c037200  lui         $v1, 0x7200
    ctx->pc = 0x172110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29184 << 16));
    // 0x172114: 0xafa4005c  sw          $a0, 0x5C($sp)
    ctx->pc = 0x172114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
    // 0x172118: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x172118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x17211c: 0x26c4ffff  addiu       $a0, $s6, -0x1
    ctx->pc = 0x17211cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x172120: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172124: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x172124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x172128: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x172128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x17212c: 0x57a021  addu        $s4, $v0, $s7
    ctx->pc = 0x17212cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_172130:
    // 0x172130: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x172130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x172134: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x172134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x172138: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x172138u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17213c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17213cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172140: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x172140u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x172144: 0x2010  mfhi        $a0
    ctx->pc = 0x172144u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x172148: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x172148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x17214c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17214cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172150: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x172150u;
    {
        const bool branch_taken_0x172150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172150) {
            ctx->pc = 0x172154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172150u;
            // 0x172154: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x172158u;
            goto label_172158;
        }
    }
    ctx->pc = 0x172158u;
label_172158:
    // 0x172158: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172158u;
    SET_GPR_U32(ctx, 31, 0x172160u);
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172158u, 0x172160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172160u;
label_172160:
    // 0x172160: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x172160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172164: 0x1511c0  sll         $v0, $s5, 7
    ctx->pc = 0x172164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x172168: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x172168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x17216c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17216cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172170: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x172170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x172174: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172178: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x17217c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172180: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x172180u;
    SET_GPR_U32(ctx, 31, 0x172188u);
    ctx->pc = 0x172184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172180u;
    // 0x172184: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x172180u, 0x172188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172188u;
label_172188:
    // 0x172188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17218c: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x17218Cu;
    SET_GPR_U32(ctx, 31, 0x172194u);
    ctx->pc = 0x172190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17218Cu;
    // 0x172190: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x17218Cu, 0x172194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172194u;
label_172194:
    // 0x172194: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x172194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x172198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17219c: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x17219Cu;
    SET_GPR_U32(ctx, 31, 0x1721A4u);
    ctx->pc = 0x1721A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17219Cu;
    // 0x1721a0: 0x522823  subu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x17219Cu, 0x1721A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721A4u;
label_1721a4:
    // 0x1721a4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1721a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1721a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1721a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721ac: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x1721ACu;
    SET_GPR_U32(ctx, 31, 0x1721B4u);
    ctx->pc = 0x1721B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721ACu;
    // 0x1721b0: 0x712823  subu        $a1, $v1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x1721ACu, 0x1721B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721B4u;
label_1721b4:
    // 0x1721b4: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x1721b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x1721b8: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1721B8u;
    SET_GPR_U32(ctx, 31, 0x1721C0u);
    ctx->pc = 0x1721BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721B8u;
    // 0x1721bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1721B8u, 0x1721C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721C0u;
label_1721c0:
    // 0x1721c0: 0x3c05bcbc  lui         $a1, 0xBCBC
    ctx->pc = 0x1721c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48316 << 16));
    // 0x1721c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1721c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721c8: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x1721C8u;
    SET_GPR_U32(ctx, 31, 0x1721D0u);
    ctx->pc = 0x1721CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721C8u;
    // 0x1721cc: 0x34a5bcbc  ori         $a1, $a1, 0xBCBC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48316);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x1721C8u, 0x1721D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721D0u;
label_1721d0:
    // 0x1721d0: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x1721d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x1721d4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x1721d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x1721d8: 0x2403010f  addiu       $v1, $zero, 0x10F
    ctx->pc = 0x1721d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x1721dc: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x1721dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x1721e0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1721e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1721e4: 0x3c41021  addu        $v0, $fp, $a0
    ctx->pc = 0x1721e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1721e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1721e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721ec: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1721ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1721f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1721f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1721f4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1721f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1721f8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1721f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1721fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1721fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x172200: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x172200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x172204: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x172204u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x172208: 0x2852824  and         $a1, $s4, $a1
    ctx->pc = 0x172208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x17220c: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x17220cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x172210: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172214: 0xc06bb06  jal         func_1AEC18
    ctx->pc = 0x172214u;
    SET_GPR_U32(ctx, 31, 0x17221Cu);
    ctx->pc = 0x172218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172214u;
    // 0x172218: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC18u, 0x172214u, 0x17221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17221Cu;
label_17221c:
    // 0x17221c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x17221cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172220: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x172220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x172224: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x172224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x172228u;
    {
        const bool branch_taken_0x172228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172228u;
        // 0x17222c: 0x2404fff9  addiu       $a0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172228) {
            ctx->pc = 0x172240u;
            goto label_172240;
        }
    }
    ctx->pc = 0x172230u;
    // 0x172230: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x172230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x172234: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172234u;
    {
        const bool branch_taken_0x172234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172234u;
        // 0x172238: 0x8fb20058  lw          $s2, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172234) {
            ctx->pc = 0x172248u;
            goto label_172248;
        }
    }
    ctx->pc = 0x17223Cu;
    // 0x17223c: 0x0  nop
    ctx->pc = 0x17223cu;
    // NOP
label_172240:
    // 0x172240: 0x8fb20040  lw          $s2, 0x40($sp)
    ctx->pc = 0x172240u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172244: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x172244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
label_172248:
    // 0x172248: 0x1aa00009  blez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x172248u;
    {
        const bool branch_taken_0x172248 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x17224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172248u;
        // 0x17224c: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172248) {
            ctx->pc = 0x172270u;
            goto label_172270;
        }
    }
    ctx->pc = 0x172250u;
    // 0x172250: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x172250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x172254: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17225c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17225cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172260: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x172260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x172264: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172264u;
    {
        const bool branch_taken_0x172264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172264u;
        // 0x172268: 0x2451ffb0  addiu       $s1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172264) {
            ctx->pc = 0x172288u;
            goto label_172288;
        }
    }
    ctx->pc = 0x17226Cu;
    // 0x17226c: 0x0  nop
    ctx->pc = 0x17226cu;
    // NOP
label_172270:
    // 0x172270: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x172270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x172274: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17227c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17227cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172280: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x172280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x172284: 0x24510100  addiu       $s1, $v0, 0x100
    ctx->pc = 0x172284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_172288:
    // 0x172288: 0x3c06f3f3  lui         $a2, 0xF3F3
    ctx->pc = 0x172288u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62451 << 16));
    // 0x17228c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17228cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172290: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x172290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x172294: 0xc05ceae  jal         func_173AB8
    ctx->pc = 0x172294u;
    SET_GPR_U32(ctx, 31, 0x17229Cu);
    ctx->pc = 0x172298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172294u;
    // 0x172298: 0x34c6f3f3  ori         $a2, $a2, 0xF3F3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62451);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173AB8u, 0x172294u, 0x17229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17229Cu;
label_17229c:
    // 0x17229c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x17229cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1722a0: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x1722a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x1722a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1722a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722a8: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x1722a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1722ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1722acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1722b0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1722b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1722b4: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1722b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1722b8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1722b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1722bc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1722bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1722c0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1722c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1722c4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1722c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1722c8: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1722C8u;
    SET_GPR_U32(ctx, 31, 0x1722D0u);
    ctx->pc = 0x1722CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1722C8u;
    // 0x1722cc: 0x24e70013  addiu       $a3, $a3, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1722C8u, 0x1722D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1722D0u;
label_1722d0:
    // 0x1722d0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1722d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1722d4: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1722d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1722d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1722D8u;
    {
        const bool branch_taken_0x1722d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722D8u;
        // 0x1722dc: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722d8) {
            ctx->pc = 0x172300u;
            goto label_172300;
        }
    }
    ctx->pc = 0x1722E0u;
    // 0x1722e0: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x1722e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1722e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1722e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1722e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1722e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1722ec: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1722ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1722f0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1722f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1722f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1722F4u;
    {
        const bool branch_taken_0x1722f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1722F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1722F4u;
        // 0x1722f8: 0x24510280  addiu       $s1, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1722f4) {
            ctx->pc = 0x172318u;
            goto label_172318;
        }
    }
    ctx->pc = 0x1722FCu;
    // 0x1722fc: 0x0  nop
    ctx->pc = 0x1722fcu;
    // NOP
label_172300:
    // 0x172300: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x172300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x172304: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17230c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x17230cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172310: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x172310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x172314: 0x24510130  addiu       $s1, $v0, 0x130
    ctx->pc = 0x172314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_172318:
    // 0x172318: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x17231c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x17231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172320: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x172324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172328: 0x3c38021  addu        $s0, $fp, $v1
    ctx->pc = 0x172328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x17232c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172330: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172334: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172338: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17233c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x17233cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172340: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x172340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x172344: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172344u;
    SET_GPR_U32(ctx, 31, 0x17234Cu);
    ctx->pc = 0x172348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172344u;
    // 0x172348: 0x24e70063  addiu       $a3, $a3, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172344u, 0x17234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17234Cu;
label_17234c:
    // 0x17234c: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x17234cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172350: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172354: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172358: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x17235c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x17235cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172360: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172364: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x172364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x172368: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x172368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17236c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x17236cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x172370: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x172370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x172374: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x172374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x172378: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x172378u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x17237c: 0x24e70023  addiu       $a3, $a3, 0x23
    ctx->pc = 0x17237cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 35));
    // 0x172380: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x172380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x172384: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172384u;
    SET_GPR_U32(ctx, 31, 0x17238Cu);
    ctx->pc = 0x172388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172384u;
    // 0x172388: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172384u, 0x17238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17238Cu;
label_17238c:
    // 0x17238c: 0x5aa00004  blezl       $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x17238Cu;
    {
        const bool branch_taken_0x17238c = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x17238c) {
            ctx->pc = 0x172390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17238Cu;
            // 0x172390: 0x26910100  addiu       $s1, $s4, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1723A0u;
            goto label_1723a0;
        }
    }
    ctx->pc = 0x172394u;
    // 0x172394: 0x2691ffb0  addiu       $s1, $s4, -0x50
    ctx->pc = 0x172394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967216));
    // 0x172398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x172398u;
    {
        const bool branch_taken_0x172398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172398u;
        // 0x17239c: 0x26930100  addiu       $s3, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172398) {
            ctx->pc = 0x1723A4u;
            goto label_1723a4;
        }
    }
    ctx->pc = 0x1723A0u;
label_1723a0:
    // 0x1723a0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1723a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1723a4:
    // 0x1723a4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x1723a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x1723a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1723a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723ac: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x1723acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x1723b0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1723b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1723b4: 0x3c48021  addu        $s0, $fp, $a0
    ctx->pc = 0x1723b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1723b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1723b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723bc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1723bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1723c0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1723c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1723c4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1723c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1723c8: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1723C8u;
    SET_GPR_U32(ctx, 31, 0x1723D0u);
    ctx->pc = 0x1723CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723C8u;
    // 0x1723cc: 0x24e700b3  addiu       $a3, $a3, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1723C8u, 0x1723D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723D0u;
label_1723d0:
    // 0x1723d0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1723d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1723d4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1723d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1723d8: 0x26850130  addiu       $a1, $s4, 0x130
    ctx->pc = 0x1723d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x1723dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1723dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723e0: 0x24e70103  addiu       $a3, $a3, 0x103
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 259));
    // 0x1723e4: 0x2a2182a  slt         $v1, $s5, $v0
    ctx->pc = 0x1723e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1723e8: 0x26820280  addiu       $v0, $s4, 0x280
    ctx->pc = 0x1723e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
    // 0x1723ec: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1723ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1723f0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1723f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1723f4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1723f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1723f8: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1723F8u;
    SET_GPR_U32(ctx, 31, 0x172400u);
    ctx->pc = 0x1723FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723F8u;
    // 0x1723fc: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1723F8u, 0x172400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172400u;
label_172400:
    // 0x172400: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172404: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x172404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172408: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17240c: 0x24e700c3  addiu       $a3, $a3, 0xC3
    ctx->pc = 0x17240cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 195));
    // 0x172410: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172414: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172418: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172418u;
    SET_GPR_U32(ctx, 31, 0x172420u);
    ctx->pc = 0x17241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172418u;
    // 0x17241c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172418u, 0x172420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172420u;
label_172420:
    // 0x172420: 0x1aa00009  blez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x172420u;
    {
        const bool branch_taken_0x172420 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x172424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172420u;
        // 0x172424: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172420) {
            ctx->pc = 0x172448u;
            goto label_172448;
        }
    }
    ctx->pc = 0x172428u;
    // 0x172428: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x172428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17242c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17242cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172434: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172438: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x172438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17243c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17243Cu;
    {
        const bool branch_taken_0x17243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17243Cu;
        // 0x172440: 0x2451fff0  addiu       $s1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17243c) {
            ctx->pc = 0x172460u;
            goto label_172460;
        }
    }
    ctx->pc = 0x172444u;
    // 0x172444: 0x0  nop
    ctx->pc = 0x172444u;
    // NOP
label_172448:
    // 0x172448: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x172448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17244c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17244cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172454: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172458: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x172458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17245c: 0x24510140  addiu       $s1, $v0, 0x140
    ctx->pc = 0x17245cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_172460:
    // 0x172460: 0x3c06cfcf  lui         $a2, 0xCFCF
    ctx->pc = 0x172460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53199 << 16));
    // 0x172464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172468: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x172468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x17246c: 0xc05ceae  jal         func_173AB8
    ctx->pc = 0x17246Cu;
    SET_GPR_U32(ctx, 31, 0x172474u);
    ctx->pc = 0x172470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17246Cu;
    // 0x172470: 0x34c6cfcf  ori         $a2, $a2, 0xCFCF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53199);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173AB8u, 0x17246Cu, 0x172474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172474u;
label_172474:
    // 0x172474: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172478: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x17247c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17247cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172480: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x172480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x172484: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172488: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x172488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17248c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x17248cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172490: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x172490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172494: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172498: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17249c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x17249cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1724a0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1724A0u;
    SET_GPR_U32(ctx, 31, 0x1724A8u);
    ctx->pc = 0x1724A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1724A0u;
    // 0x1724a4: 0x24e70013  addiu       $a3, $a3, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1724A0u, 0x1724A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1724A8u;
label_1724a8:
    // 0x1724a8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x1724a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1724ac: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1724acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1724b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1724B0u;
    {
        const bool branch_taken_0x1724b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724B0u;
        // 0x1724b4: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724b0) {
            ctx->pc = 0x1724D8u;
            goto label_1724d8;
        }
    }
    ctx->pc = 0x1724B8u;
    // 0x1724b8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x1724b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1724bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1724bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1724c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1724c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1724c4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1724c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1724c8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1724c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1724cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1724CCu;
    {
        const bool branch_taken_0x1724cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1724D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1724CCu;
        // 0x1724d0: 0x245102c0  addiu       $s1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1724cc) {
            ctx->pc = 0x1724F0u;
            goto label_1724f0;
        }
    }
    ctx->pc = 0x1724D4u;
    // 0x1724d4: 0x0  nop
    ctx->pc = 0x1724d4u;
    // NOP
label_1724d8:
    // 0x1724d8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x1724d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1724dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1724dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1724e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1724e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1724e4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1724e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1724e8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1724e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1724ec: 0x24510170  addiu       $s1, $v0, 0x170
    ctx->pc = 0x1724ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_1724f0:
    // 0x1724f0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1724f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1724f4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1724f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1724f8: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x1724f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x1724fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1724fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172500: 0x3c38021  addu        $s0, $fp, $v1
    ctx->pc = 0x172500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x172504: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172508: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17250c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x17250cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172510: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172514: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172518: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x172518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x17251c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x17251Cu;
    SET_GPR_U32(ctx, 31, 0x172524u);
    ctx->pc = 0x172520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17251Cu;
    // 0x172520: 0x24e70063  addiu       $a3, $a3, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x17251Cu, 0x172524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172524u;
label_172524:
    // 0x172524: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x172524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172528: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17252c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17252cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172530: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172534: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172538: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17253c: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x17253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x172540: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x172540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172544: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x172544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x172548: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x172548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17254c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x17254cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x172550: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x172550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x172554: 0x24e70023  addiu       $a3, $a3, 0x23
    ctx->pc = 0x172554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 35));
    // 0x172558: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x172558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x17255c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x17255Cu;
    SET_GPR_U32(ctx, 31, 0x172564u);
    ctx->pc = 0x172560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17255Cu;
    // 0x172560: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x17255Cu, 0x172564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172564u;
label_172564:
    // 0x172564: 0x1aa00004  blez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x172564u;
    {
        const bool branch_taken_0x172564 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x172568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172564u;
        // 0x172568: 0x26920140  addiu       $s2, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172564) {
            ctx->pc = 0x172578u;
            goto label_172578;
        }
    }
    ctx->pc = 0x17256Cu;
    // 0x17256c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17256Cu;
    {
        const bool branch_taken_0x17256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17256Cu;
        // 0x172570: 0x2691fff0  addiu       $s1, $s4, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17256c) {
            ctx->pc = 0x17257Cu;
            goto label_17257c;
        }
    }
    ctx->pc = 0x172574u;
    // 0x172574: 0x0  nop
    ctx->pc = 0x172574u;
    // NOP
label_172578:
    // 0x172578: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x172578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17257c:
    // 0x17257c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x17257cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x172580: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172584: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x172584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x172588: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x17258c: 0x3c48021  addu        $s0, $fp, $a0
    ctx->pc = 0x17258cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x172590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172594: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172598: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17259c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x17259cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1725a0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1725A0u;
    SET_GPR_U32(ctx, 31, 0x1725A8u);
    ctx->pc = 0x1725A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725A0u;
    // 0x1725a4: 0x24e700b3  addiu       $a3, $a3, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1725A0u, 0x1725A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725A8u;
label_1725a8:
    // 0x1725a8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1725a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1725ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1725acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1725b0: 0x26850170  addiu       $a1, $s4, 0x170
    ctx->pc = 0x1725b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
    // 0x1725b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1725b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725b8: 0x24e70103  addiu       $a3, $a3, 0x103
    ctx->pc = 0x1725b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 259));
    // 0x1725bc: 0x2a2182a  slt         $v1, $s5, $v0
    ctx->pc = 0x1725bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1725c0: 0x268202c0  addiu       $v0, $s4, 0x2C0
    ctx->pc = 0x1725c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
    // 0x1725c4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1725c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1725c8: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1725c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1725cc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1725ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1725d0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1725D0u;
    SET_GPR_U32(ctx, 31, 0x1725D8u);
    ctx->pc = 0x1725D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725D0u;
    // 0x1725d4: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1725D0u, 0x1725D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725D8u;
label_1725d8:
    // 0x1725d8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1725d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1725dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1725dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725e0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1725e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1725e4: 0x24e700c3  addiu       $a3, $a3, 0xC3
    ctx->pc = 0x1725e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 195));
    // 0x1725e8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1725e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1725ec: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1725ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1725f0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1725F0u;
    SET_GPR_U32(ctx, 31, 0x1725F8u);
    ctx->pc = 0x1725F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1725F0u;
    // 0x1725f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1725F0u, 0x1725F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1725F8u;
label_1725f8:
    // 0x1725f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1725f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1725fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1725fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172600: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172600u;
    SET_GPR_U32(ctx, 31, 0x172608u);
    ctx->pc = 0x172604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172600u;
    // 0x172604: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172600u, 0x172608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172608u;
label_172608:
    // 0x172608: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x17260c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17260cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172610: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172610u;
    SET_GPR_U32(ctx, 31, 0x172618u);
    ctx->pc = 0x172614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172610u;
    // 0x172614: 0x26940180  addiu       $s4, $s4, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172610u, 0x172618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172618u;
label_172618:
    // 0x172618: 0x3c051700  lui         $a1, 0x1700
    ctx->pc = 0x172618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5888 << 16));
    // 0x17261c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17261Cu;
    SET_GPR_U32(ctx, 31, 0x172624u);
    ctx->pc = 0x172620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17261Cu;
    // 0x172620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17261Cu, 0x172624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172624u;
label_172624:
    // 0x172624: 0x2b6102a  slt         $v0, $s5, $s6
    ctx->pc = 0x172624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x172628: 0x8fb10044  lw          $s1, 0x44($sp)
    ctx->pc = 0x172628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x17262c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x17262cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172630: 0x1440febf  bnez        $v0, . + 4 + (-0x141 << 2)
    ctx->pc = 0x172630u;
    {
        const bool branch_taken_0x172630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172630u;
        // 0x172634: 0x8fb20064  lw          $s2, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172630) {
            ctx->pc = 0x172130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172130;
        }
    }
    ctx->pc = 0x172638u;
    // 0x172638: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172638u;
    {
        const bool branch_taken_0x172638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172638u;
        // 0x17263c: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172638) {
            ctx->pc = 0x172650u;
            goto label_172650;
        }
    }
    ctx->pc = 0x172640u;
label_172640:
    // 0x172640: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172644: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x172644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x172648: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x172648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x17264c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x17264cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_172650:
    // 0x172650: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x172650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x172654: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x172654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172658: 0x1440fe9d  bnez        $v0, . + 4 + (-0x163 << 2)
    ctx->pc = 0x172658u;
    {
        const bool branch_taken_0x172658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172658u;
        // 0x17265c: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172658) {
            ctx->pc = 0x1720D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1720d0;
        }
    }
    ctx->pc = 0x172660u;
    // 0x172660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172664:
    // 0x172664: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172664u;
    SET_GPR_U32(ctx, 31, 0x17266Cu);
    ctx->pc = 0x172668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172664u;
    // 0x172668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172664u, 0x17266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17266Cu;
label_17266c:
    // 0x17266c: 0x3c051500  lui         $a1, 0x1500
    ctx->pc = 0x17266cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5376 << 16));
    // 0x172670: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172674: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172674u;
    SET_GPR_U32(ctx, 31, 0x17267Cu);
    ctx->pc = 0x172678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172674u;
    // 0x172678: 0x34a507fc  ori         $a1, $a1, 0x7FC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172674u, 0x17267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17267Cu;
label_17267c:
    // 0x17267c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17267cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172680: 0xc06bb48  jal         func_1AED20
    ctx->pc = 0x172680u;
    SET_GPR_U32(ctx, 31, 0x172688u);
    ctx->pc = 0x172684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172680u;
    // 0x172684: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED20u, 0x172680u, 0x172688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172688u;
label_172688:
    // 0x172688: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x17268c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17268Cu;
    SET_GPR_U32(ctx, 31, 0x172694u);
    ctx->pc = 0x172690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17268Cu;
    // 0x172690: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17268Cu, 0x172694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172694u;
label_172694:
    // 0x172694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172698: 0xc06bb5e  jal         func_1AED78
    ctx->pc = 0x172698u;
    SET_GPR_U32(ctx, 31, 0x1726A0u);
    ctx->pc = 0x17269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172698u;
    // 0x17269c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED78u, 0x172698u, 0x1726A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726A0u;
label_1726a0:
    // 0x1726a0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1726a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1726a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1726a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1726a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1726a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1726acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1726b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726b4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1726b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1726b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1726b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726bc: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x1726BCu;
    SET_GPR_U32(ctx, 31, 0x1726C4u);
    ctx->pc = 0x1726C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726BCu;
    // 0x1726c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x1726BCu, 0x1726C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726C4u;
label_1726c4:
    // 0x1726c4: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x1726c4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1726c8: 0xc06bb80  jal         func_1AEE00
    ctx->pc = 0x1726C8u;
    SET_GPR_U32(ctx, 31, 0x1726D0u);
    ctx->pc = 0x1726CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726C8u;
    // 0x1726cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE00u, 0x1726C8u, 0x1726D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726D0u;
label_1726d0:
    // 0x1726d0: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x1726d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1726d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1726d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1726d8: 0xc06bbfc  jal         func_1AEFF0
    ctx->pc = 0x1726D8u;
    SET_GPR_U32(ctx, 31, 0x1726E0u);
    ctx->pc = 0x1726DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726D8u;
    // 0x1726dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFF0u, 0x1726D8u, 0x1726E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726E0u;
label_1726e0:
    // 0x1726e0: 0xc06bb86  jal         func_1AEE18
    ctx->pc = 0x1726E0u;
    SET_GPR_U32(ctx, 31, 0x1726E8u);
    ctx->pc = 0x1726E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726E0u;
    // 0x1726e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE18u, 0x1726E0u, 0x1726E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726E8u;
label_1726e8:
    // 0x1726e8: 0xc06bb74  jal         func_1AEDD0
    ctx->pc = 0x1726E8u;
    SET_GPR_U32(ctx, 31, 0x1726F0u);
    ctx->pc = 0x1726ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726E8u;
    // 0x1726ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEDD0u, 0x1726E8u, 0x1726F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726F0u;
label_1726f0:
    // 0x1726f0: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x1726f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x1726f4: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1726F4u;
    SET_GPR_U32(ctx, 31, 0x1726FCu);
    ctx->pc = 0x1726F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726F4u;
    // 0x1726f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1726F4u, 0x1726FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726FCu;
label_1726fc:
    // 0x1726fc: 0xc06bada  jal         func_1AEB68
    ctx->pc = 0x1726FCu;
    SET_GPR_U32(ctx, 31, 0x172704u);
    ctx->pc = 0x172700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726FCu;
    // 0x172700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB68u, 0x1726FCu, 0x172704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172704u;
label_172704:
    // 0x172704: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x172704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x172708: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x172708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17270c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x17270cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x172710: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x172710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x172714: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x172714u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172718: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x172718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x17271c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x17271cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x172720: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x172720u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x172724: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x172724u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x172728: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x172728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x17272c: 0x3e00008  jr          $ra
    ctx->pc = 0x17272Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17272Cu;
        // 0x172730: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17272Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172734u;
}
