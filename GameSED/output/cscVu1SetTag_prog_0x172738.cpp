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

// Function: cscVu1SetTag_prog
// Address: 0x172738 - 0x172f94
void cscVu1SetTag_prog_0x172738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cscVu1SetTag_prog_0x172738");
#endif

    switch (ctx->pc) {
        case 0x172790u: goto label_172790;
        case 0x172798u: goto label_172798;
        case 0x1727acu: goto label_1727ac;
        case 0x1727b8u: goto label_1727b8;
        case 0x1727c4u: goto label_1727c4;
        case 0x1727d4u: goto label_1727d4;
        case 0x1727f8u: goto label_1727f8;
        case 0x17280cu: goto label_17280c;
        case 0x172818u: goto label_172818;
        case 0x172828u: goto label_172828;
        case 0x172834u: goto label_172834;
        case 0x172844u: goto label_172844;
        case 0x172850u: goto label_172850;
        case 0x172860u: goto label_172860;
        case 0x1728c8u: goto label_1728c8;
        case 0x172904u: goto label_172904;
        case 0x172924u: goto label_172924;
        case 0x172944u: goto label_172944;
        case 0x172950u: goto label_172950;
        case 0x172960u: goto label_172960;
        case 0x172970u: goto label_172970;
        case 0x17297cu: goto label_17297c;
        case 0x17298cu: goto label_17298c;
        case 0x1729ccu: goto label_1729cc;
        case 0x172a5cu: goto label_172a5c;
        case 0x172a94u: goto label_172a94;
        case 0x172b20u: goto label_172b20;
        case 0x172b64u: goto label_172b64;
        case 0x172bb8u: goto label_172bb8;
        case 0x172c0cu: goto label_172c0c;
        case 0x172c2cu: goto label_172c2c;
        case 0x172c8cu: goto label_172c8c;
        case 0x172cc4u: goto label_172cc4;
        case 0x172d50u: goto label_172d50;
        case 0x172d94u: goto label_172d94;
        case 0x172de0u: goto label_172de0;
        case 0x172e3cu: goto label_172e3c;
        case 0x172e5cu: goto label_172e5c;
        case 0x172e68u: goto label_172e68;
        case 0x172e74u: goto label_172e74;
        case 0x172e80u: goto label_172e80;
        case 0x172eccu: goto label_172ecc;
        case 0x172edcu: goto label_172edc;
        case 0x172ee8u: goto label_172ee8;
        case 0x172ef4u: goto label_172ef4;
        case 0x172f00u: goto label_172f00;
        case 0x172f24u: goto label_172f24;
        case 0x172f30u: goto label_172f30;
        case 0x172f40u: goto label_172f40;
        case 0x172f48u: goto label_172f48;
        case 0x172f50u: goto label_172f50;
        case 0x172f5cu: goto label_172f5c;
        case 0x172f64u: goto label_172f64;
        default: break;
    }

    ctx->pc = 0x172738u;

    // 0x172738: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x172738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17273c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17273cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172740: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x172740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x172744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x172744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17274c: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x17274cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x172750: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x172750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x172754: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x172754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172758: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x172758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x17275c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17275cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172760: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x172760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x172764: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172768: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x172768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x17276c: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x17276cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
    // 0x172770: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x172770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x172774: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x172774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x172778: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x172778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x17277c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x17277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x172780: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x172780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x172784: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x172784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x172788: 0xc06bad2  jal         func_1AEB48
    ctx->pc = 0x172788u;
    SET_GPR_U32(ctx, 31, 0x172790u);
    ctx->pc = 0x17278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172788u;
    // 0x17278c: 0x7b903  sra         $s7, $a3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB48u, 0x172788u, 0x172790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172790u;
label_172790:
    // 0x172790: 0xc06bad6  jal         func_1AEB58
    ctx->pc = 0x172790u;
    SET_GPR_U32(ctx, 31, 0x172798u);
    ctx->pc = 0x172794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172790u;
    // 0x172794: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB58u, 0x172790u, 0x172798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172798u;
label_172798:
    // 0x172798: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x172798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x17279c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17279cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1727a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727a4: 0xc06bb2c  jal         func_1AECB0
    ctx->pc = 0x1727A4u;
    SET_GPR_U32(ctx, 31, 0x1727ACu);
    ctx->pc = 0x1727A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727A4u;
    // 0x1727a8: 0x24a52300  addiu       $a1, $a1, 0x2300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AECB0u, 0x1727A4u, 0x1727ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727ACu;
label_1727ac:
    // 0x1727ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1727acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727b0: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x1727B0u;
    SET_GPR_U32(ctx, 31, 0x1727B8u);
    ctx->pc = 0x1727B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727B0u;
    // 0x1727b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x1727B0u, 0x1727B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727B8u;
label_1727b8:
    // 0x1727b8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1727b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1727bc: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1727BCu;
    SET_GPR_U32(ctx, 31, 0x1727C4u);
    ctx->pc = 0x1727C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727BCu;
    // 0x1727c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1727BCu, 0x1727C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727C4u;
label_1727c4:
    // 0x1727c4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1727c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1727c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1727c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727cc: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x1727CCu;
    SET_GPR_U32(ctx, 31, 0x1727D4u);
    ctx->pc = 0x1727D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727CCu;
    // 0x1727d0: 0x34a50404  ori         $a1, $a1, 0x404 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x1727CCu, 0x1727D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727D4u;
label_1727d4:
    // 0x1727d4: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1727d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1727d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1727d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1727dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1727dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1727e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1727e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1727e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1727e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1727e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1727ec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1727ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1727f0: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x1727F0u;
    SET_GPR_U32(ctx, 31, 0x1727F8u);
    ctx->pc = 0x1727F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1727F0u;
    // 0x1727f4: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x1727F0u, 0x1727F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1727F8u;
label_1727f8:
    // 0x1727f8: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x1727f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x1727fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1727fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172800: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x172800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x172804: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172804u;
    SET_GPR_U32(ctx, 31, 0x17280Cu);
    ctx->pc = 0x172808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172804u;
    // 0x172808: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172804u, 0x17280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17280Cu;
label_17280c:
    // 0x17280c: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x17280cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172810: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x172810u;
    SET_GPR_U32(ctx, 31, 0x172818u);
    ctx->pc = 0x172814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172810u;
    // 0x172814: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x172810u, 0x172818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172818u;
label_172818:
    // 0x172818: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x172818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x17281c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17281cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172820: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172820u;
    SET_GPR_U32(ctx, 31, 0x172828u);
    ctx->pc = 0x172824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172820u;
    // 0x172824: 0x34a5015a  ori         $a1, $a1, 0x15A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)346);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172820u, 0x172828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172828u;
label_172828:
    // 0x172828: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x172828u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17282c: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x17282Cu;
    SET_GPR_U32(ctx, 31, 0x172834u);
    ctx->pc = 0x172830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17282Cu;
    // 0x172830: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x17282Cu, 0x172834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172834u;
label_172834:
    // 0x172834: 0x3c056c01  lui         $a1, 0x6C01
    ctx->pc = 0x172834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27649 << 16));
    // 0x172838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17283c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17283Cu;
    SET_GPR_U32(ctx, 31, 0x172844u);
    ctx->pc = 0x172840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17283Cu;
    // 0x172840: 0x34a502ad  ori         $a1, $a1, 0x2AD (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)685);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17283Cu, 0x172844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172844u;
label_172844:
    // 0x172844: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x172844u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172848: 0xc06bbe8  jal         func_1AEFA0
    ctx->pc = 0x172848u;
    SET_GPR_U32(ctx, 31, 0x172850u);
    ctx->pc = 0x17284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172848u;
    // 0x17284c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFA0u, 0x172848u, 0x172850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172850u;
label_172850:
    // 0x172850: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x172850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172854: 0x1840019b  blez        $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x172854u;
    {
        const bool branch_taken_0x172854 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x172858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172854u;
        // 0x172858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172854) {
            ctx->pc = 0x172EC4u;
            goto label_172ec4;
        }
    }
    ctx->pc = 0x17285Cu;
    // 0x17285c: 0x0  nop
    ctx->pc = 0x17285cu;
    // NOP
label_172860:
    // 0x172860: 0x1ae0018f  blez        $s7, . + 4 + (0x18F << 2)
    ctx->pc = 0x172860u;
    {
        const bool branch_taken_0x172860 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x172864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172860u;
        // 0x172864: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172860) {
            ctx->pc = 0x172EA0u;
            goto label_172ea0;
        }
    }
    ctx->pc = 0x172868u;
    // 0x172868: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x172868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x17286c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x17286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x172870: 0x971818  mult        $v1, $a0, $s7
    ctx->pc = 0x172870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172874: 0x3c047200  lui         $a0, 0x7200
    ctx->pc = 0x172874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29184 << 16));
    // 0x172878: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x172878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x17287c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x17287cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x172880: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x172880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x172884: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x172884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x172888: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x172888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17288c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x172890: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x172890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x172894: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x172894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x172898: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17289c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x17289cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1728a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1728a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1728a4: 0x3c037200  lui         $v1, 0x7200
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29184 << 16));
    // 0x1728a8: 0x26e4ffff  addiu       $a0, $s7, -0x1
    ctx->pc = 0x1728a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1728ac: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1728acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1728b0: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x1728b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x1728b4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1728b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1728b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1728bc: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1728bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x1728c0: 0x44a821  addu        $s5, $v0, $a0
    ctx->pc = 0x1728c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1728c4: 0x0  nop
    ctx->pc = 0x1728c4u;
    // NOP
label_1728c8:
    // 0x1728c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1728c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1728cc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1728ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1728d0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1728d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1728d4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1728d8: 0x2442d5c0  addiu       $v0, $v0, -0x2A40
    ctx->pc = 0x1728d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956480));
    // 0x1728dc: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x1728dcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1728e0: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x1728e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1728e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1728e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728e8: 0x2010  mfhi        $a0
    ctx->pc = 0x1728e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1728ec: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x1728ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x1728f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1728f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728f4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1728F4u;
    {
        const bool branch_taken_0x1728f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1728f4) {
            ctx->pc = 0x1728F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1728F4u;
            // 0x1728f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1728FCu;
            goto label_1728fc;
        }
    }
    ctx->pc = 0x1728FCu;
label_1728fc:
    // 0x1728fc: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x1728FCu;
    SET_GPR_U32(ctx, 31, 0x172904u);
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x1728FCu, 0x172904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172904u;
label_172904:
    // 0x172904: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x172904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172908: 0x3c026402  lui         $v0, 0x6402
    ctx->pc = 0x172908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25602 << 16));
    // 0x17290c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172910: 0x1619c0  sll         $v1, $s6, 7
    ctx->pc = 0x172910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 7));
    // 0x172914: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x172914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x172918: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x172918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x17291c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x17291Cu;
    SET_GPR_U32(ctx, 31, 0x172924u);
    ctx->pc = 0x172920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17291Cu;
    // 0x172920: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x17291Cu, 0x172924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172924u;
label_172924:
    // 0x172924: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x172924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x172928: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17292c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17292cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x172930: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172934: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x172938: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17293c: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x17293Cu;
    SET_GPR_U32(ctx, 31, 0x172944u);
    ctx->pc = 0x172940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17293Cu;
    // 0x172940: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x17293Cu, 0x172944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172944u;
label_172944:
    // 0x172944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172948: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x172948u;
    SET_GPR_U32(ctx, 31, 0x172950u);
    ctx->pc = 0x17294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172948u;
    // 0x17294c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x172948u, 0x172950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172950u;
label_172950:
    // 0x172950: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x172950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x172954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172958: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x172958u;
    SET_GPR_U32(ctx, 31, 0x172960u);
    ctx->pc = 0x17295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172958u;
    // 0x17295c: 0x522823  subu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x172958u, 0x172960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172960u;
label_172960:
    // 0x172960: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x172960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x172964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172968: 0xc06bbe2  jal         func_1AEF88
    ctx->pc = 0x172968u;
    SET_GPR_U32(ctx, 31, 0x172970u);
    ctx->pc = 0x17296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172968u;
    // 0x17296c: 0x712823  subu        $a1, $v1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF88u, 0x172968u, 0x172970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172970u;
label_172970:
    // 0x172970: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x172970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x172974: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172974u;
    SET_GPR_U32(ctx, 31, 0x17297Cu);
    ctx->pc = 0x172978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172974u;
    // 0x172978: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172974u, 0x17297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17297Cu;
label_17297c:
    // 0x17297c: 0x3c05bcbc  lui         $a1, 0xBCBC
    ctx->pc = 0x17297cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48316 << 16));
    // 0x172980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172984: 0xc06bbdc  jal         func_1AEF70
    ctx->pc = 0x172984u;
    SET_GPR_U32(ctx, 31, 0x17298Cu);
    ctx->pc = 0x172988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172984u;
    // 0x172988: 0x34a5bcbc  ori         $a1, $a1, 0xBCBC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48316);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF70u, 0x172984u, 0x17298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17298Cu;
label_17298c:
    // 0x17298c: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x17298cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x172990: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x172990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172994: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x172994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x172998: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17299c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x17299cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1729a0: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x1729a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1729a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1729a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1729a8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1729a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1729ac: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x1729acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x1729b0: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x1729b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1729b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1729b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729b8: 0x2a52824  and         $a1, $s5, $a1
    ctx->pc = 0x1729b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
    // 0x1729bc: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1729bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1729c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1729c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729c4: 0xc06bb06  jal         func_1AEC18
    ctx->pc = 0x1729C4u;
    SET_GPR_U32(ctx, 31, 0x1729CCu);
    ctx->pc = 0x1729C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1729C4u;
    // 0x1729c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEC18u, 0x1729C4u, 0x1729CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1729CCu;
label_1729cc:
    // 0x1729cc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1729ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1729d0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1729d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1729d4: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1729d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1729d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1729D8u;
    {
        const bool branch_taken_0x1729d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729D8u;
        // 0x1729dc: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729d8) {
            ctx->pc = 0x1729F0u;
            goto label_1729f0;
        }
    }
    ctx->pc = 0x1729E0u;
    // 0x1729e0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1729e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1729e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1729E4u;
    {
        const bool branch_taken_0x1729e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1729E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729E4u;
        // 0x1729e8: 0x8fb3005c  lw          $s3, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729e4) {
            ctx->pc = 0x1729F8u;
            goto label_1729f8;
        }
    }
    ctx->pc = 0x1729ECu;
    // 0x1729ec: 0x0  nop
    ctx->pc = 0x1729ecu;
    // NOP
label_1729f0:
    // 0x1729f0: 0x8fb30044  lw          $s3, 0x44($sp)
    ctx->pc = 0x1729f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1729f4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1729f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1729f8:
    // 0x1729f8: 0x1ac0000b  blez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1729F8u;
    {
        const bool branch_taken_0x1729f8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1729FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1729F8u;
        // 0x1729fc: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1729f8) {
            ctx->pc = 0x172A28u;
            goto label_172a28;
        }
    }
    ctx->pc = 0x172A00u;
    // 0x172a00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172a00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a04: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172a08: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172a10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172a14: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172a18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172a1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x172A1Cu;
    {
        const bool branch_taken_0x172a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A1Cu;
        // 0x172a20: 0x2451ffb0  addiu       $s1, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a1c) {
            ctx->pc = 0x172A48u;
            goto label_172a48;
        }
    }
    ctx->pc = 0x172A24u;
    // 0x172a24: 0x0  nop
    ctx->pc = 0x172a24u;
    // NOP
label_172a28:
    // 0x172a28: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x172a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172a2c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172a30: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172a34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172a38: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172a3c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172a40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172a44: 0x24510100  addiu       $s1, $v0, 0x100
    ctx->pc = 0x172a44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_172a48:
    // 0x172a48: 0x3c06f3f3  lui         $a2, 0xF3F3
    ctx->pc = 0x172a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62451 << 16));
    // 0x172a4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a50: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x172a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x172a54: 0xc05ceae  jal         func_173AB8
    ctx->pc = 0x172A54u;
    SET_GPR_U32(ctx, 31, 0x172A5Cu);
    ctx->pc = 0x172A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A54u;
    // 0x172a58: 0x34c6f3f3  ori         $a2, $a2, 0xF3F3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62451);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173AB8u, 0x172A54u, 0x172A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A5Cu;
label_172a5c:
    // 0x172a5c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x172a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x172a60: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x172a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x172a64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a68: 0x3c41021  addu        $v0, $fp, $a0
    ctx->pc = 0x172a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x172a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a70: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x172a70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172a74: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172a78: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172a7c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172a80: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172a84: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172a88: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x172a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x172a8c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172A8Cu;
    SET_GPR_U32(ctx, 31, 0x172A94u);
    ctx->pc = 0x172A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172A8Cu;
    // 0x172a90: 0x24e70013  addiu       $a3, $a3, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172A8Cu, 0x172A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172A94u;
label_172a94:
    // 0x172a94: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x172a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x172a98: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x172a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172a9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x172A9Cu;
    {
        const bool branch_taken_0x172a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A9Cu;
        // 0x172aa0: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a9c) {
            ctx->pc = 0x172AC8u;
            goto label_172ac8;
        }
    }
    ctx->pc = 0x172AA4u;
    // 0x172aa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172aa8: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172aac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172ab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172ab4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172ab8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172abc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172ac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172AC0u;
    {
        const bool branch_taken_0x172ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AC0u;
        // 0x172ac4: 0x24510280  addiu       $s1, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ac0) {
            ctx->pc = 0x172AE8u;
            goto label_172ae8;
        }
    }
    ctx->pc = 0x172AC8u;
label_172ac8:
    // 0x172ac8: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x172ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x172acc: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172ad0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172ad8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172adc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172ae0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172ae4: 0x24510130  addiu       $s1, $v0, 0x130
    ctx->pc = 0x172ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_172ae8:
    // 0x172ae8: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x172ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x172aec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172af0: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x172af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x172af4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172af8: 0x3c48021  addu        $s0, $fp, $a0
    ctx->pc = 0x172af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x172afc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b00: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172b04: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172b08: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172b08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172b0c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172b10: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172b14: 0x24e70063  addiu       $a3, $a3, 0x63
    ctx->pc = 0x172b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 99));
    // 0x172b18: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172B18u;
    SET_GPR_U32(ctx, 31, 0x172B20u);
    ctx->pc = 0x172B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B18u;
    // 0x172b1c: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172B18u, 0x172B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B20u;
label_172b20:
    // 0x172b20: 0x2771818  mult        $v1, $s3, $s7
    ctx->pc = 0x172b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172b24: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172b24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172b28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b2c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172b30: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172b34: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172b34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172b38: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x172b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x172b3c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x172b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172b40: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x172b40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x172b44: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x172b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x172b48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172b4c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x172b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x172b50: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x172b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x172b54: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x172b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x172b58: 0x24e70023  addiu       $a3, $a3, 0x23
    ctx->pc = 0x172b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 35));
    // 0x172b5c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172B5Cu;
    SET_GPR_U32(ctx, 31, 0x172B64u);
    ctx->pc = 0x172B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B5Cu;
    // 0x172b60: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172B5Cu, 0x172B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B64u;
label_172b64:
    // 0x172b64: 0x5ac00006  blezl       $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x172B64u;
    {
        const bool branch_taken_0x172b64 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x172b64) {
            ctx->pc = 0x172B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172B64u;
            // 0x172b68: 0x26b10100  addiu       $s1, $s5, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172B80u;
            goto label_172b80;
        }
    }
    ctx->pc = 0x172B6Cu;
    // 0x172b6c: 0x26b1ffb0  addiu       $s1, $s5, -0x50
    ctx->pc = 0x172b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967216));
    // 0x172b70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172B74u;
    {
        const bool branch_taken_0x172b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B74u;
        // 0x172b78: 0x26b40100  addiu       $s4, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b74) {
            ctx->pc = 0x172B88u;
            goto label_172b88;
        }
    }
    ctx->pc = 0x172B7Cu;
    // 0x172b7c: 0x0  nop
    ctx->pc = 0x172b7cu;
    // NOP
label_172b80:
    // 0x172b80: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x172b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172b84: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x172b84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172b88:
    // 0x172b88: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172b8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b90: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x172b94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b98: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x172b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x172b9c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172ba0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x172ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172ba4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172ba8: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172bac: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172bb0: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172BB0u;
    SET_GPR_U32(ctx, 31, 0x172BB8u);
    ctx->pc = 0x172BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BB0u;
    // 0x172bb4: 0x24e700b3  addiu       $a3, $a3, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172BB0u, 0x172BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BB8u;
label_172bb8:
    // 0x172bb8: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x172bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x172bbc: 0x2c4102a  slt         $v0, $s6, $a0
    ctx->pc = 0x172bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x172bc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172BC0u;
    {
        const bool branch_taken_0x172bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172bc0) {
            ctx->pc = 0x172BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172BC0u;
            // 0x172bc4: 0x26b10130  addiu       $s1, $s5, 0x130 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172BD8u;
            goto label_172bd8;
        }
    }
    ctx->pc = 0x172BC8u;
    // 0x172bc8: 0x26b10280  addiu       $s1, $s5, 0x280
    ctx->pc = 0x172bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 640));
    // 0x172bcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172BCCu;
    {
        const bool branch_taken_0x172bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BCCu;
        // 0x172bd0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bcc) {
            ctx->pc = 0x172BDCu;
            goto label_172bdc;
        }
    }
    ctx->pc = 0x172BD4u;
    // 0x172bd4: 0x0  nop
    ctx->pc = 0x172bd4u;
    // NOP
label_172bd8:
    // 0x172bd8: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x172bd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_172bdc:
    // 0x172bdc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x172bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x172be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172be4: 0x2442d5c0  addiu       $v0, $v0, -0x2A40
    ctx->pc = 0x172be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956480));
    // 0x172be8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172bec: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x172bf0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172bf4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172bf8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172bfc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172c00: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172c04: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172C04u;
    SET_GPR_U32(ctx, 31, 0x172C0Cu);
    ctx->pc = 0x172C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C04u;
    // 0x172c08: 0x24e70103  addiu       $a3, $a3, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172C04u, 0x172C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C0Cu;
label_172c0c:
    // 0x172c0c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172c10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x172c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c18: 0x24e700c3  addiu       $a3, $a3, 0xC3
    ctx->pc = 0x172c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 195));
    // 0x172c1c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172c20: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172c24: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172C24u;
    SET_GPR_U32(ctx, 31, 0x172C2Cu);
    ctx->pc = 0x172C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C24u;
    // 0x172c28: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172C24u, 0x172C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C2Cu;
label_172c2c:
    // 0x172c2c: 0x1ac0000a  blez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x172C2Cu;
    {
        const bool branch_taken_0x172c2c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x172C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C2Cu;
        // 0x172c30: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c2c) {
            ctx->pc = 0x172C58u;
            goto label_172c58;
        }
    }
    ctx->pc = 0x172C34u;
    // 0x172c34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c38: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172c3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172c44: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172c48: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172c4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172c50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172C50u;
    {
        const bool branch_taken_0x172c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C50u;
        // 0x172c54: 0x2451fff0  addiu       $s1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c50) {
            ctx->pc = 0x172C78u;
            goto label_172c78;
        }
    }
    ctx->pc = 0x172C58u;
label_172c58:
    // 0x172c58: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x172c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172c5c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172c60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172c68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172c6c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172c70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172c74: 0x24510140  addiu       $s1, $v0, 0x140
    ctx->pc = 0x172c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_172c78:
    // 0x172c78: 0x3c06cfcf  lui         $a2, 0xCFCF
    ctx->pc = 0x172c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53199 << 16));
    // 0x172c7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c80: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x172c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x172c84: 0xc05ceae  jal         func_173AB8
    ctx->pc = 0x172C84u;
    SET_GPR_U32(ctx, 31, 0x172C8Cu);
    ctx->pc = 0x172C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C84u;
    // 0x172c88: 0x34c6cfcf  ori         $a2, $a2, 0xCFCF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53199);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173AB8u, 0x172C84u, 0x172C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C8Cu;
label_172c8c:
    // 0x172c8c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x172c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x172c90: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x172c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x172c94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c98: 0x3c41021  addu        $v0, $fp, $a0
    ctx->pc = 0x172c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x172c9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ca0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x172ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172ca4: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172ca8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172cac: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172cb0: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172cb4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172cb8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x172cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x172cbc: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172CBCu;
    SET_GPR_U32(ctx, 31, 0x172CC4u);
    ctx->pc = 0x172CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CBCu;
    // 0x172cc0: 0x24e70013  addiu       $a3, $a3, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172CBCu, 0x172CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CC4u;
label_172cc4:
    // 0x172cc4: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x172cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x172cc8: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x172cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172ccc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x172CCCu;
    {
        const bool branch_taken_0x172ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CCCu;
        // 0x172cd0: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ccc) {
            ctx->pc = 0x172CF8u;
            goto label_172cf8;
        }
    }
    ctx->pc = 0x172CD4u;
    // 0x172cd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x172cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cd8: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172cdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172ce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172ce4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172ce8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172cec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172cf0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172CF0u;
    {
        const bool branch_taken_0x172cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CF0u;
        // 0x172cf4: 0x245102c0  addiu       $s1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cf0) {
            ctx->pc = 0x172D18u;
            goto label_172d18;
        }
    }
    ctx->pc = 0x172CF8u;
label_172cf8:
    // 0x172cf8: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x172cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x172cfc: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x172cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x172d00: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x172d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172d04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172d08: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172d0c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172d10: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x172d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172d14: 0x24510170  addiu       $s1, $v0, 0x170
    ctx->pc = 0x172d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_172d18:
    // 0x172d18: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x172d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x172d1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x172d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172d20: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x172d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x172d24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d28: 0x3c48021  addu        $s0, $fp, $a0
    ctx->pc = 0x172d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x172d2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d30: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172d30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172d34: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172d38: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172d3c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172d40: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172d44: 0x24e70063  addiu       $a3, $a3, 0x63
    ctx->pc = 0x172d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 99));
    // 0x172d48: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172D48u;
    SET_GPR_U32(ctx, 31, 0x172D50u);
    ctx->pc = 0x172D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D48u;
    // 0x172d4c: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172D48u, 0x172D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D50u;
label_172d50:
    // 0x172d50: 0x2771818  mult        $v1, $s3, $s7
    ctx->pc = 0x172d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172d54: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172d58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172d5c: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172d60: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172d64: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172d64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172d68: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x172d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x172d6c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x172d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x172d70: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x172d70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x172d74: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x172d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x172d78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x172d7c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x172d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x172d80: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x172d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x172d84: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x172d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x172d88: 0x24e70023  addiu       $a3, $a3, 0x23
    ctx->pc = 0x172d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 35));
    // 0x172d8c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172D8Cu;
    SET_GPR_U32(ctx, 31, 0x172D94u);
    ctx->pc = 0x172D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D8Cu;
    // 0x172d90: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172D8Cu, 0x172D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D94u;
label_172d94:
    // 0x172d94: 0x1ac00004  blez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D94u;
    {
        const bool branch_taken_0x172d94 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x172D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D94u;
        // 0x172d98: 0x26b30140  addiu       $s3, $s5, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d94) {
            ctx->pc = 0x172DA8u;
            goto label_172da8;
        }
    }
    ctx->pc = 0x172D9Cu;
    // 0x172d9c: 0x26b1fff0  addiu       $s1, $s5, -0x10
    ctx->pc = 0x172d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
    // 0x172da0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172DA0u;
    {
        const bool branch_taken_0x172da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DA0u;
        // 0x172da4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172da0) {
            ctx->pc = 0x172DB0u;
            goto label_172db0;
        }
    }
    ctx->pc = 0x172DA8u;
label_172da8:
    // 0x172da8: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x172da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x172dac: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x172dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_172db0:
    // 0x172db0: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x172db4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172db8: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x172dbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172dc0: 0x3c31021  addu        $v0, $fp, $v1
    ctx->pc = 0x172dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x172dc4: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172dc8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172dcc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172dd0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172dd4: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172dd8: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172DD8u;
    SET_GPR_U32(ctx, 31, 0x172DE0u);
    ctx->pc = 0x172DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172DD8u;
    // 0x172ddc: 0x24e700b3  addiu       $a3, $a3, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172DD8u, 0x172DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172DE0u;
label_172de0:
    // 0x172de0: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x172de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x172de4: 0x2c4102a  slt         $v0, $s6, $a0
    ctx->pc = 0x172de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x172de8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x172DE8u;
    {
        const bool branch_taken_0x172de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172de8) {
            ctx->pc = 0x172DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172DE8u;
            // 0x172dec: 0x26b10170  addiu       $s1, $s5, 0x170 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 368));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172E00u;
            goto label_172e00;
        }
    }
    ctx->pc = 0x172DF0u;
    // 0x172df0: 0x26b102c0  addiu       $s1, $s5, 0x2C0
    ctx->pc = 0x172df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 704));
    // 0x172df4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172DF4u;
    {
        const bool branch_taken_0x172df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172DF4u;
        // 0x172df8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172df4) {
            ctx->pc = 0x172E04u;
            goto label_172e04;
        }
    }
    ctx->pc = 0x172DFCu;
    // 0x172dfc: 0x0  nop
    ctx->pc = 0x172dfcu;
    // NOP
label_172e00:
    // 0x172e00: 0x2412fff8  addiu       $s2, $zero, -0x8
    ctx->pc = 0x172e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_172e04:
    // 0x172e04: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x172e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x172e08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e0c: 0x2442d5c0  addiu       $v0, $v0, -0x2A40
    ctx->pc = 0x172e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956480));
    // 0x172e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e14: 0x3c28021  addu        $s0, $fp, $v0
    ctx->pc = 0x172e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x172e18: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172e1c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172e20: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172e24: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172e28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x172e28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x172e2c: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x172e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x172e30: 0x26b50180  addiu       $s5, $s5, 0x180
    ctx->pc = 0x172e30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 384));
    // 0x172e34: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172E34u;
    SET_GPR_U32(ctx, 31, 0x172E3Cu);
    ctx->pc = 0x172E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E34u;
    // 0x172e38: 0x24e70103  addiu       $a3, $a3, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172E34u, 0x172E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E3Cu;
label_172e3c:
    // 0x172e3c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172e40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e44: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172e48: 0x24e700c3  addiu       $a3, $a3, 0xC3
    ctx->pc = 0x172e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 195));
    // 0x172e4c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172e50: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172e50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172e54: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172E54u;
    SET_GPR_U32(ctx, 31, 0x172E5Cu);
    ctx->pc = 0x172E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E54u;
    // 0x172e58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172E54u, 0x172E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E5Cu;
label_172e5c:
    // 0x172e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e60: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172E60u;
    SET_GPR_U32(ctx, 31, 0x172E68u);
    ctx->pc = 0x172E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E60u;
    // 0x172e64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172E60u, 0x172E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E68u;
label_172e68:
    // 0x172e68: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x172e6c: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172E6Cu;
    SET_GPR_U32(ctx, 31, 0x172E74u);
    ctx->pc = 0x172E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E6Cu;
    // 0x172e70: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172E6Cu, 0x172E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E74u;
label_172e74:
    // 0x172e74: 0x3c051700  lui         $a1, 0x1700
    ctx->pc = 0x172e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5888 << 16));
    // 0x172e78: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172E78u;
    SET_GPR_U32(ctx, 31, 0x172E80u);
    ctx->pc = 0x172E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172E78u;
    // 0x172e7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172E78u, 0x172E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172E80u;
label_172e80:
    // 0x172e80: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x172e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x172e84: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x172e84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x172e88: 0x8fb00054  lw          $s0, 0x54($sp)
    ctx->pc = 0x172e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x172e8c: 0x1440fe8e  bnez        $v0, . + 4 + (-0x172 << 2)
    ctx->pc = 0x172E8Cu;
    {
        const bool branch_taken_0x172e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E8Cu;
        // 0x172e90: 0x8fb20068  lw          $s2, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e8c) {
            ctx->pc = 0x1728C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1728c8;
        }
    }
    ctx->pc = 0x172E94u;
    // 0x172e94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172E94u;
    {
        const bool branch_taken_0x172e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172E94u;
        // 0x172e98: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e94) {
            ctx->pc = 0x172EB0u;
            goto label_172eb0;
        }
    }
    ctx->pc = 0x172E9Cu;
    // 0x172e9c: 0x0  nop
    ctx->pc = 0x172e9cu;
    // NOP
label_172ea0:
    // 0x172ea0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x172ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x172ea4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x172ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x172ea8: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x172ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x172eac: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x172eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_172eb0:
    // 0x172eb0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x172eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172eb4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x172eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x172eb8: 0x1440fe69  bnez        $v0, . + 4 + (-0x197 << 2)
    ctx->pc = 0x172EB8u;
    {
        const bool branch_taken_0x172eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172EB8u;
        // 0x172ebc: 0xafa40044  sw          $a0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172eb8) {
            ctx->pc = 0x172860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172860;
        }
    }
    ctx->pc = 0x172EC0u;
    // 0x172ec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_172ec4:
    // 0x172ec4: 0xc06baf0  jal         func_1AEBC0
    ctx->pc = 0x172EC4u;
    SET_GPR_U32(ctx, 31, 0x172ECCu);
    ctx->pc = 0x172EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EC4u;
    // 0x172ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEBC0u, 0x172EC4u, 0x172ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172ECCu;
label_172ecc:
    // 0x172ecc: 0x3c051500  lui         $a1, 0x1500
    ctx->pc = 0x172eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5376 << 16));
    // 0x172ed0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ed4: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172ED4u;
    SET_GPR_U32(ctx, 31, 0x172EDCu);
    ctx->pc = 0x172ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172ED4u;
    // 0x172ed8: 0x34a507fc  ori         $a1, $a1, 0x7FC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2044);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172ED4u, 0x172EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EDCu;
label_172edc:
    // 0x172edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ee0: 0xc06bb48  jal         func_1AED20
    ctx->pc = 0x172EE0u;
    SET_GPR_U32(ctx, 31, 0x172EE8u);
    ctx->pc = 0x172EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EE0u;
    // 0x172ee4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED20u, 0x172EE0u, 0x172EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EE8u;
label_172ee8:
    // 0x172ee8: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x172eec: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172EECu;
    SET_GPR_U32(ctx, 31, 0x172EF4u);
    ctx->pc = 0x172EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EECu;
    // 0x172ef0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172EECu, 0x172EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172EF4u;
label_172ef4:
    // 0x172ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ef8: 0xc06bb5e  jal         func_1AED78
    ctx->pc = 0x172EF8u;
    SET_GPR_U32(ctx, 31, 0x172F00u);
    ctx->pc = 0x172EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172EF8u;
    // 0x172efc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AED78u, 0x172EF8u, 0x172F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F00u;
label_172f00:
    // 0x172f00: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x172f04: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x172f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x172f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x172f0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x172f10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f14: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x172f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172f18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x172f18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f1c: 0xc05c7d4  jal         func_171F50
    ctx->pc = 0x172F1Cu;
    SET_GPR_U32(ctx, 31, 0x172F24u);
    ctx->pc = 0x172F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F1Cu;
    // 0x172f20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F50u, 0x172F1Cu, 0x172F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F24u;
label_172f24:
    // 0x172f24: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x172f24u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172f28: 0xc06bb80  jal         func_1AEE00
    ctx->pc = 0x172F28u;
    SET_GPR_U32(ctx, 31, 0x172F30u);
    ctx->pc = 0x172F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F28u;
    // 0x172f2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE00u, 0x172F28u, 0x172F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F30u;
label_172f30:
    // 0x172f30: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x172f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x172f34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f38: 0xc06bbfc  jal         func_1AEFF0
    ctx->pc = 0x172F38u;
    SET_GPR_U32(ctx, 31, 0x172F40u);
    ctx->pc = 0x172F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F38u;
    // 0x172f3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEFF0u, 0x172F38u, 0x172F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F40u;
label_172f40:
    // 0x172f40: 0xc06bb86  jal         func_1AEE18
    ctx->pc = 0x172F40u;
    SET_GPR_U32(ctx, 31, 0x172F48u);
    ctx->pc = 0x172F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F40u;
    // 0x172f44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE18u, 0x172F40u, 0x172F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F48u;
label_172f48:
    // 0x172f48: 0xc06bb74  jal         func_1AEDD0
    ctx->pc = 0x172F48u;
    SET_GPR_U32(ctx, 31, 0x172F50u);
    ctx->pc = 0x172F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F48u;
    // 0x172f4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEDD0u, 0x172F48u, 0x172F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F50u;
label_172f50:
    // 0x172f50: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x172f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x172f54: 0xc06bbd6  jal         func_1AEF58
    ctx->pc = 0x172F54u;
    SET_GPR_U32(ctx, 31, 0x172F5Cu);
    ctx->pc = 0x172F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F54u;
    // 0x172f58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEF58u, 0x172F54u, 0x172F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F5Cu;
label_172f5c:
    // 0x172f5c: 0xc06bada  jal         func_1AEB68
    ctx->pc = 0x172F5Cu;
    SET_GPR_U32(ctx, 31, 0x172F64u);
    ctx->pc = 0x172F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172F5Cu;
    // 0x172f60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEB68u, 0x172F5Cu, 0x172F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172F64u;
label_172f64:
    // 0x172f64: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x172f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x172f68: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x172f68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x172f6c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x172f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x172f70: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x172f70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x172f74: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x172f74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172f78: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x172f78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x172f7c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x172f7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x172f80: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x172f80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x172f84: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x172f84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x172f88: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x172f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x172f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x172F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172F8Cu;
        // 0x172f90: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172F94u;
}
