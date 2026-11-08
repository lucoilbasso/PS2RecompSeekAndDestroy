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

// Function: ApCqpart_RRMotor_Proc__FP9ApcCqpartP17CQ2PartsSequencer
// Address: 0x169460 - 0x1697d4
void ApCqpart_RRMotor_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x169460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqpart_RRMotor_Proc__FP9ApcCqpartP17CQ2PartsSequencer_0x169460");
#endif

    switch (ctx->pc) {
        case 0x1694d8u: goto label_1694d8;
        case 0x169528u: goto label_169528;
        case 0x169548u: goto label_169548;
        case 0x169568u: goto label_169568;
        case 0x1695a8u: goto label_1695a8;
        case 0x1695c0u: goto label_1695c0;
        case 0x1695e0u: goto label_1695e0;
        case 0x1695fcu: goto label_1695fc;
        case 0x169644u: goto label_169644;
        case 0x169660u: goto label_169660;
        case 0x16966cu: goto label_16966c;
        case 0x169684u: goto label_169684;
        case 0x1696b8u: goto label_1696b8;
        case 0x1696d0u: goto label_1696d0;
        case 0x1696f0u: goto label_1696f0;
        case 0x16970cu: goto label_16970c;
        case 0x169760u: goto label_169760;
        case 0x16977cu: goto label_16977c;
        case 0x169788u: goto label_169788;
        case 0x1697a0u: goto label_1697a0;
        default: break;
    }

    ctx->pc = 0x169460u;

    // 0x169460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x169460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x169464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169468: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x169468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16946c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169470: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x169470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169474: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x169474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x169478: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x169478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16947c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169480: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169484: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x169484u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x169488: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x169488u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x16948c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x169490: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x169490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x169494: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x169494u;
    {
        const bool branch_taken_0x169494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x169498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169494u;
        // 0x169498: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169494) {
            ctx->pc = 0x169578u;
            goto label_169578;
        }
    }
    ctx->pc = 0x16949Cu;
    // 0x16949c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16949Cu;
    {
        const bool branch_taken_0x16949c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1694A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16949Cu;
        // 0x1694a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16949c) {
            ctx->pc = 0x1694B8u;
            goto label_1694b8;
        }
    }
    ctx->pc = 0x1694A4u;
    // 0x1694a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1694a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1694a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1694A8u;
    {
        const bool branch_taken_0x1694a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1694ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694A8u;
        // 0x1694ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694a8) {
            ctx->pc = 0x1694D0u;
            goto label_1694d0;
        }
    }
    ctx->pc = 0x1694B0u;
    // 0x1694b0: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1694B0u;
    {
        const bool branch_taken_0x1694b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694B0u;
        // 0x1694b4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694b0) {
            ctx->pc = 0x1697B8u;
            goto label_1697b8;
        }
    }
    ctx->pc = 0x1694B8u;
label_1694b8:
    // 0x1694b8: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1694B8u;
    {
        const bool branch_taken_0x1694b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1694BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694B8u;
        // 0x1694bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694b8) {
            ctx->pc = 0x169610u;
            goto label_169610;
        }
    }
    ctx->pc = 0x1694C0u;
    // 0x1694c0: 0x10620095  beq         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1694C0u;
    {
        const bool branch_taken_0x1694c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1694C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694C0u;
        // 0x1694c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694c0) {
            ctx->pc = 0x169718u;
            goto label_169718;
        }
    }
    ctx->pc = 0x1694C8u;
    // 0x1694c8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1694C8u;
    {
        const bool branch_taken_0x1694c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1694CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694C8u;
        // 0x1694cc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694c8) {
            ctx->pc = 0x1697B8u;
            goto label_1697b8;
        }
    }
    ctx->pc = 0x1694D0u;
label_1694d0:
    // 0x1694d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1694d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1694d4: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1694d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1694d8:
    // 0x1694d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1694d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1694dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1694dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1694e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1694e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1694e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1694e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1694e8: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1694e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1694ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1694ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1694f0: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x1694f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1694f4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1694F4u;
    {
        const bool branch_taken_0x1694f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1694F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1694F4u;
        // 0x1694f8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1694f4) {
            ctx->pc = 0x1694D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1694d8;
        }
    }
    ctx->pc = 0x1694FCu;
    // 0x1694fc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1694fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x169500: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x169500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x169504: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x169504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169508: 0x24a5d390  addiu       $a1, $a1, -0x2C70
    ctx->pc = 0x169508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
    // 0x16950c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x16950cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169518: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x169518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x16951c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169520: 0xc0618c2  jal         func_186308
    ctx->pc = 0x169520u;
    SET_GPR_U32(ctx, 31, 0x169528u);
    ctx->pc = 0x169524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169520u;
    // 0x169524: 0x2610d3b0  addiu       $s0, $s0, -0x2C50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186308u, 0x169520u, 0x169528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169528u;
label_169528:
    // 0x169528: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x169528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16952c: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x16952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169534: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x169534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x169538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16953c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16953cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169540: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x169540u;
    SET_GPR_U32(ctx, 31, 0x169548u);
    ctx->pc = 0x169544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169540u;
    // 0x169544: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x169540u, 0x169548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169548u;
label_169548:
    // 0x169548: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x169548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16954c: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x16954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x169550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169554: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x169554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x169558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16955c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169560: 0xc0618f2  jal         func_1863C8
    ctx->pc = 0x169560u;
    SET_GPR_U32(ctx, 31, 0x169568u);
    ctx->pc = 0x169564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169560u;
    // 0x169564: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x169560u, 0x169568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169568u;
label_169568:
    // 0x169568: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x169568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x16956c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x16956Cu;
    {
        const bool branch_taken_0x16956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16956Cu;
        // 0x169570: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16956c) {
            ctx->pc = 0x1697B0u;
            goto label_1697b0;
        }
    }
    ctx->pc = 0x169574u;
    // 0x169574: 0x0  nop
    ctx->pc = 0x169574u;
    // NOP
label_169578:
    // 0x169578: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x169578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16957c: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x16957Cu;
    {
        const bool branch_taken_0x16957c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16957c) {
            ctx->pc = 0x169580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16957Cu;
            // 0x169580: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169724u;
            goto label_169724;
        }
    }
    ctx->pc = 0x169584u;
    // 0x169584: 0x1080008a  beqz        $a0, . + 4 + (0x8A << 2)
    ctx->pc = 0x169584u;
    {
        const bool branch_taken_0x169584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169584u;
        // 0x169588: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169584) {
            ctx->pc = 0x1697B0u;
            goto label_1697b0;
        }
    }
    ctx->pc = 0x16958Cu;
    // 0x16958c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x16958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x169590: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169594: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x169594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16959c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16959cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1695a0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1695A0u;
    SET_GPR_U32(ctx, 31, 0x1695A8u);
    ctx->pc = 0x1695A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695A0u;
    // 0x1695a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1695A0u, 0x1695A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695A8u;
label_1695a8:
    // 0x1695a8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1695a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1695ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1695acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1695b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695b4: 0x24c6d3a0  addiu       $a2, $a2, -0x2C60
    ctx->pc = 0x1695b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955936));
    // 0x1695b8: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1695B8u;
    SET_GPR_U32(ctx, 31, 0x1695C0u);
    ctx->pc = 0x1695BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695B8u;
    // 0x1695bc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1695B8u, 0x1695C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695C0u;
label_1695c0:
    // 0x1695c0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1695c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1695c4: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x1695c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1695c8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1695c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1695cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1695ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1695d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1695d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1695d4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1695d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1695d8: 0xc06164c  jal         func_185930
    ctx->pc = 0x1695D8u;
    SET_GPR_U32(ctx, 31, 0x1695E0u);
    ctx->pc = 0x1695DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695D8u;
    // 0x1695dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1695D8u, 0x1695E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695E0u;
label_1695e0:
    // 0x1695e0: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1695e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1695e4: 0xc78c8448  lwc1        $f12, -0x7BB8($gp)
    ctx->pc = 0x1695e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1695e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1695e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695ec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1695ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1695f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1695f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1695f4: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x1695F4u;
    SET_GPR_U32(ctx, 31, 0x1695FCu);
    ctx->pc = 0x1695F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1695F4u;
    // 0x1695f8: 0x24c6d3c0  addiu       $a2, $a2, -0x2C40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x1695F4u, 0x1695FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1695FCu;
label_1695fc:
    // 0x1695fc: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x1695fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x169600: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x169600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x169604: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x169604u;
    {
        const bool branch_taken_0x169604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169604u;
        // 0x169608: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169604) {
            ctx->pc = 0x1697ACu;
            goto label_1697ac;
        }
    }
    ctx->pc = 0x16960Cu;
    // 0x16960c: 0x0  nop
    ctx->pc = 0x16960cu;
    // NOP
label_169610:
    // 0x169610: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x169610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x169614: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x169614u;
    {
        const bool branch_taken_0x169614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169614u;
        // 0x169618: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169614) {
            ctx->pc = 0x169724u;
            goto label_169724;
        }
    }
    ctx->pc = 0x16961Cu;
    // 0x16961c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16961Cu;
    {
        const bool branch_taken_0x16961c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16961Cu;
        // 0x169620: 0x240501c0  addiu       $a1, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16961c) {
            ctx->pc = 0x169698u;
            goto label_169698;
        }
    }
    ctx->pc = 0x169624u;
    // 0x169624: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x169624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x169628: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x169628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x16962c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x16962cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169630: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x169630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x169634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169638: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x169638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16963c: 0xc06164c  jal         func_185930
    ctx->pc = 0x16963Cu;
    SET_GPR_U32(ctx, 31, 0x169644u);
    ctx->pc = 0x169640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16963Cu;
    // 0x169640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x16963Cu, 0x169644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169644u;
label_169644:
    // 0x169644: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x169644u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x169648: 0xc78c844c  lwc1        $f12, -0x7BB4($gp)
    ctx->pc = 0x169648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16964c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16964cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169650: 0x24c6d3c0  addiu       $a2, $a2, -0x2C40
    ctx->pc = 0x169650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955968));
    // 0x169654: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x169654u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x169658: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169658u;
    SET_GPR_U32(ctx, 31, 0x169660u);
    ctx->pc = 0x16965Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169658u;
    // 0x16965c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169658u, 0x169660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169660u;
label_169660:
    // 0x169660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169664: 0xc06164c  jal         func_185930
    ctx->pc = 0x169664u;
    SET_GPR_U32(ctx, 31, 0x16966Cu);
    ctx->pc = 0x169668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169664u;
    // 0x169668: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169664u, 0x16966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16966Cu;
label_16966c:
    // 0x16966c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169670: 0xc78d8450  lwc1        $f13, -0x7BB0($gp)
    ctx->pc = 0x169670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x169674: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169678: 0xc78e8454  lwc1        $f14, -0x7BAC($gp)
    ctx->pc = 0x169678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x16967c: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x16967Cu;
    SET_GPR_U32(ctx, 31, 0x169684u);
    ctx->pc = 0x169680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16967Cu;
    // 0x169680: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x16967Cu, 0x169684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169684u;
label_169684:
    // 0x169684: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x169684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x169688: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x169688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16968c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x16968Cu;
    {
        const bool branch_taken_0x16968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16968Cu;
        // 0x169690: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16968c) {
            ctx->pc = 0x1697ACu;
            goto label_1697ac;
        }
    }
    ctx->pc = 0x169694u;
    // 0x169694: 0x0  nop
    ctx->pc = 0x169694u;
    // NOP
label_169698:
    // 0x169698: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x169698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16969c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x16969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1696a0: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x1696a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1696a4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1696a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1696a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1696a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1696ac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1696acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1696b0: 0xc06164c  jal         func_185930
    ctx->pc = 0x1696B0u;
    SET_GPR_U32(ctx, 31, 0x1696B8u);
    ctx->pc = 0x1696B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696B0u;
    // 0x1696b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1696B0u, 0x1696B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696B8u;
label_1696b8:
    // 0x1696b8: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1696b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1696bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1696bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1696c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696c4: 0x24c6d390  addiu       $a2, $a2, -0x2C70
    ctx->pc = 0x1696c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955920));
    // 0x1696c8: 0xc068bdc  jal         func_1A2F70
    ctx->pc = 0x1696C8u;
    SET_GPR_U32(ctx, 31, 0x1696D0u);
    ctx->pc = 0x1696CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696C8u;
    // 0x1696cc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2F70u, 0x1696C8u, 0x1696D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696D0u;
label_1696d0:
    // 0x1696d0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1696d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1696d4: 0x8e4301b4  lw          $v1, 0x1B4($s2)
    ctx->pc = 0x1696d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x1696d8: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x1696d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1696dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1696dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1696e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1696e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1696e4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1696e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1696e8: 0xc06164c  jal         func_185930
    ctx->pc = 0x1696E8u;
    SET_GPR_U32(ctx, 31, 0x1696F0u);
    ctx->pc = 0x1696ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1696E8u;
    // 0x1696ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x1696E8u, 0x1696F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696F0u;
label_1696f0:
    // 0x1696f0: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1696f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1696f4: 0xc78c8458  lwc1        $f12, -0x7BA8($gp)
    ctx->pc = 0x1696f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1696f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1696f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1696fc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1696fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x169700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169704: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169704u;
    SET_GPR_U32(ctx, 31, 0x16970Cu);
    ctx->pc = 0x169708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169704u;
    // 0x169708: 0x24c6d3b0  addiu       $a2, $a2, -0x2C50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169704u, 0x16970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16970Cu;
label_16970c:
    // 0x16970c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16970Cu;
    {
        const bool branch_taken_0x16970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16970Cu;
        // 0x169710: 0xae33000c  sw          $s3, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16970c) {
            ctx->pc = 0x1697A4u;
            goto label_1697a4;
        }
    }
    ctx->pc = 0x169714u;
    // 0x169714: 0x0  nop
    ctx->pc = 0x169714u;
    // NOP
label_169718:
    // 0x169718: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x169718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16971c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16971Cu;
    {
        const bool branch_taken_0x16971c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16971Cu;
        // 0x169720: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16971c) {
            ctx->pc = 0x169730u;
            goto label_169730;
        }
    }
    ctx->pc = 0x169724u;
label_169724:
    // 0x169724: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x169724u;
    {
        const bool branch_taken_0x169724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169724u;
        // 0x169728: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169724) {
            ctx->pc = 0x1697B0u;
            goto label_1697b0;
        }
    }
    ctx->pc = 0x16972Cu;
    // 0x16972c: 0x0  nop
    ctx->pc = 0x16972cu;
    // NOP
label_169730:
    // 0x169730: 0x14800020  bnez        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x169730u;
    {
        const bool branch_taken_0x169730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169730u;
        // 0x169734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169730) {
            ctx->pc = 0x1697B4u;
            goto label_1697b4;
        }
    }
    ctx->pc = 0x169738u;
    // 0x169738: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x169738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16973c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x16973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x169740: 0x8e4201b4  lw          $v0, 0x1B4($s2)
    ctx->pc = 0x169740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x169744: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x169744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x169748: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x169748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16974c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169750: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x169750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169754: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x169754u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x169758: 0xc06164c  jal         func_185930
    ctx->pc = 0x169758u;
    SET_GPR_U32(ctx, 31, 0x169760u);
    ctx->pc = 0x16975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169758u;
    // 0x16975c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169758u, 0x169760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169760u;
label_169760:
    // 0x169760: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x169760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x169764: 0xc78c845c  lwc1        $f12, -0x7BA4($gp)
    ctx->pc = 0x169764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16976c: 0x24c6d3b0  addiu       $a2, $a2, -0x2C50
    ctx->pc = 0x16976cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955952));
    // 0x169770: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x169770u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x169774: 0xc069532  jal         func_1A54C8
    ctx->pc = 0x169774u;
    SET_GPR_U32(ctx, 31, 0x16977Cu);
    ctx->pc = 0x169778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169774u;
    // 0x169778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A54C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54C8u, 0x169774u, 0x16977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16977Cu;
label_16977c:
    // 0x16977c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16977cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169780: 0xc06164c  jal         func_185930
    ctx->pc = 0x169780u;
    SET_GPR_U32(ctx, 31, 0x169788u);
    ctx->pc = 0x169784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169780u;
    // 0x169784: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185930u, 0x169780u, 0x169788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169788u;
label_169788:
    // 0x169788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16978c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16978cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x169790: 0xc78e8460  lwc1        $f14, -0x7BA0($gp)
    ctx->pc = 0x169790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x169794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x169794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169798: 0xc0694d2  jal         func_1A5348
    ctx->pc = 0x169798u;
    SET_GPR_U32(ctx, 31, 0x1697A0u);
    ctx->pc = 0x16979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169798u;
    // 0x16979c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5348u, 0x169798u, 0x1697A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697A0u;
label_1697a0:
    // 0x1697a0: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x1697a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_1697a4:
    // 0x1697a4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1697a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1697a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1697a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1697ac:
    // 0x1697ac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1697acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1697b0:
    // 0x1697b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1697b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1697b4:
    // 0x1697b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1697b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1697b8:
    // 0x1697b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1697b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1697bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1697bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1697c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1697c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1697c4: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x1697c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1697c8: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1697c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1697cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1697CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1697D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1697CCu;
        // 0x1697d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1697CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1697D4u;
}
