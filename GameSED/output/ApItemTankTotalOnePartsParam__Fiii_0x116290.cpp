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

// Function: ApItemTankTotalOnePartsParam__Fiii
// Address: 0x116290 - 0x1163ec
void ApItemTankTotalOnePartsParam__Fiii_0x116290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemTankTotalOnePartsParam__Fiii_0x116290");
#endif

    switch (ctx->pc) {
        case 0x116300u: goto label_116300;
        case 0x116344u: goto label_116344;
        case 0x116354u: goto label_116354;
        default: break;
    }

    ctx->pc = 0x116290u;

    // 0x116290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x116290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x116294: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x116294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x116298: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x116298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11629c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x11629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1162a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1162a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162a4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1162a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1162a8: 0x141203  sra         $v0, $s4, 8
    ctx->pc = 0x1162a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 8));
    // 0x1162ac: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1162acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1162b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1162b4: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1162b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1162b8: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x1162b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1162bc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1162bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1162c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1162c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1162c4: 0x3c1e0024  lui         $fp, 0x24
    ctx->pc = 0x1162c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)36 << 16));
    // 0x1162c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1162c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1162cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1162ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1162d0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1162d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1162d4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1162d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1162d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1162d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1162dc: 0x3c12001f  lui         $s2, 0x1F
    ctx->pc = 0x1162dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
    // 0x1162e0: 0x2652d532  addiu       $s2, $s2, -0x2ACE
    ctx->pc = 0x1162e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956338));
    // 0x1162e4: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1162e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1162e8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1162e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1162ec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1162ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1162f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1162f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1162f4: 0x27d6fcb0  addiu       $s6, $fp, -0x350
    ctx->pc = 0x1162f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966448));
    // 0x1162f8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1162f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1162fc: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1162fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_116300:
    // 0x116300: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x116300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x116304: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x116304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116308: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11630c: 0x10530002  beq         $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x11630Cu;
    {
        const bool branch_taken_0x11630c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x116310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11630Cu;
        // 0x116310: 0x285880b  movn        $s1, $s4, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11630c) {
            ctx->pc = 0x116318u;
            goto label_116318;
        }
    }
    ctx->pc = 0x116314u;
    // 0x116314: 0x86510000  lh          $s1, 0x0($s2)
    ctx->pc = 0x116314u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_116318:
    // 0x116318: 0x1237001f  beq         $s1, $s7, . + 4 + (0x1F << 2)
    ctx->pc = 0x116318u;
    {
        const bool branch_taken_0x116318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x11631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116318u;
        // 0x11631c: 0x118203  sra         $s0, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116318) {
            ctx->pc = 0x116398u;
            goto label_116398;
        }
    }
    ctx->pc = 0x116320u;
    // 0x116320: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x116320u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x116324: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116328: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x116328u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x11632c: 0x2442c0c0  addiu       $v0, $v0, -0x3F40
    ctx->pc = 0x11632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951104));
    // 0x116330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116334: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x116334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x116338: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x116338u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11633c: 0xc041882  jal         func_106208
    ctx->pc = 0x11633Cu;
    SET_GPR_U32(ctx, 31, 0x116344u);
    ctx->pc = 0x116340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11633Cu;
    // 0x116340: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11633Cu, 0x116344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116344u;
label_116344:
    // 0x116344: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x116344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116348: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x116348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11634c: 0xc041882  jal         func_106208
    ctx->pc = 0x11634Cu;
    SET_GPR_U32(ctx, 31, 0x116354u);
    ctx->pc = 0x116350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11634Cu;
    // 0x116350: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106208u, 0x11634Cu, 0x116354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116354u;
label_116354:
    // 0x116354: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x116354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116358: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x116358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11635c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x11635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x116360: 0x16a50009  bne         $s5, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x116360u;
    {
        const bool branch_taken_0x116360 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        ctx->pc = 0x116364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116360u;
        // 0x116364: 0x27c4fcb0  addiu       $a0, $fp, -0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116360) {
            ctx->pc = 0x116388u;
            goto label_116388;
        }
    }
    ctx->pc = 0x116368u;
    // 0x116368: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x116368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11636c: 0x8c820400  lw          $v0, 0x400($a0)
    ctx->pc = 0x11636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1024)));
    // 0x116370: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x116370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x116374: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x116374u;
    {
        const bool branch_taken_0x116374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116374) {
            ctx->pc = 0x116378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116374u;
            // 0x116378: 0xac830400  sw          $v1, 0x400($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116398u;
            goto label_116398;
        }
    }
    ctx->pc = 0x11637Cu;
    // 0x11637c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11637Cu;
    {
        const bool branch_taken_0x11637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11637Cu;
        // 0x116380: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11637c) {
            ctx->pc = 0x11639Cu;
            goto label_11639c;
        }
    }
    ctx->pc = 0x116384u;
    // 0x116384: 0x0  nop
    ctx->pc = 0x116384u;
    // NOP
label_116388:
    // 0x116388: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x116388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11638c: 0x8ec20400  lw          $v0, 0x400($s6)
    ctx->pc = 0x11638cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 1024)));
    // 0x116390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116394: 0xaec20400  sw          $v0, 0x400($s6)
    ctx->pc = 0x116394u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1024), GPR_U32(ctx, 2));
label_116398:
    // 0x116398: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x116398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_11639c:
    // 0x11639c: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x11639cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1163a0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1163A0u;
    {
        const bool branch_taken_0x1163a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1163A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163A0u;
        // 0x1163a4: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163a0) {
            ctx->pc = 0x116300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116300;
        }
    }
    ctx->pc = 0x1163A8u;
    // 0x1163a8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1163a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1163ac: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x1163acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x1163b0: 0x8c430400  lw          $v1, 0x400($v0)
    ctx->pc = 0x1163b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2400B0u));
    // 0x1163b4: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1163B4u;
    {
        const bool branch_taken_0x1163b4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1163b4) {
            ctx->pc = 0x1163B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1163B4u;
            // 0x1163b8: 0xac400400  sw          $zero, 0x400($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1163BCu;
            goto label_1163bc;
        }
    }
    ctx->pc = 0x1163BCu;
label_1163bc:
    // 0x1163bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1163bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1163c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1163c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1163c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1163c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1163c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1163c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1163cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1163ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1163d0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1163d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1163d4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1163d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1163d8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1163d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1163dc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1163dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1163e0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1163e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1163e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1163E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1163E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163E4u;
        // 0x1163e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1163E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1163ECu;
}
