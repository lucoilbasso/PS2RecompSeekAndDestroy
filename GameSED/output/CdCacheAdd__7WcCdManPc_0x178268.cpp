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

// Function: CdCacheAdd__7WcCdManPc
// Address: 0x178268 - 0x178394
void CdCacheAdd__7WcCdManPc_0x178268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdCacheAdd__7WcCdManPc_0x178268");
#endif

    switch (ctx->pc) {
        case 0x1782a8u: goto label_1782a8;
        case 0x1782c8u: goto label_1782c8;
        case 0x1782d8u: goto label_1782d8;
        case 0x1782e0u: goto label_1782e0;
        case 0x178304u: goto label_178304;
        case 0x178310u: goto label_178310;
        case 0x178334u: goto label_178334;
        case 0x178364u: goto label_178364;
        default: break;
    }

    ctx->pc = 0x178268u;

    // 0x178268: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x178268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17826c: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x17826cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x178270: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x178270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x178274: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x178274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178278: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x178278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x17827c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x17827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x178280: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x178280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x178284: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x178284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x178288: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x178288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x17828c: 0x2671108c  addiu       $s1, $s3, 0x108C
    ctx->pc = 0x17828cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4236));
    // 0x178290: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x178290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x178294: 0x26721048  addiu       $s2, $s3, 0x1048
    ctx->pc = 0x178294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4168));
    // 0x178298: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x178298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x17829c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17829cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782a0: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x1782a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1782a4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1782a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1782a8:
    // 0x1782a8: 0x8e22fffc  lw          $v0, -0x4($s1)
    ctx->pc = 0x1782a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x1782ac: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1782ACu;
    {
        const bool branch_taken_0x1782ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1782ac) {
            ctx->pc = 0x1782B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1782ACu;
            // 0x1782b0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178340u;
            goto label_178340;
        }
    }
    ctx->pc = 0x1782B4u;
    // 0x1782b4: 0x24c6d538  addiu       $a2, $a2, -0x2AC8
    ctx->pc = 0x1782b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956344));
    // 0x1782b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1782b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1782bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782c0: 0xc066ea0  jal         func_19BA80
    ctx->pc = 0x1782C0u;
    SET_GPR_U32(ctx, 31, 0x1782C8u);
    ctx->pc = 0x1782C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782C0u;
    // 0x1782c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA80u, 0x1782C0u, 0x1782C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782C8u;
label_1782c8:
    // 0x1782c8: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x1782c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1782cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1782CCu;
    {
        const bool branch_taken_0x1782cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1782D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782CCu;
        // 0x1782d0: 0x3c160025  lui         $s6, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782cc) {
            ctx->pc = 0x178304u;
            goto label_178304;
        }
    }
    ctx->pc = 0x1782D4u;
    // 0x1782d4: 0x0  nop
    ctx->pc = 0x1782d4u;
    // NOP
label_1782d8:
    // 0x1782d8: 0xc06ecd2  jal         func_1BB348
    ctx->pc = 0x1782D8u;
    SET_GPR_U32(ctx, 31, 0x1782E0u);
    ctx->pc = 0x1BB348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB348u, 0x1782D8u, 0x1782E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782E0u;
label_1782e0:
    // 0x1782e0: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1782E0u;
    {
        const bool branch_taken_0x1782e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1782E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782E0u;
        // 0x1782e4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782e0) {
            ctx->pc = 0x178308u;
            goto label_178308;
        }
    }
    ctx->pc = 0x1782E8u;
    // 0x1782e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1782e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1782ec: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1782ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1782f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1782F0u;
    {
        const bool branch_taken_0x1782f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1782F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782F0u;
        // 0x1782f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782f0) {
            ctx->pc = 0x178304u;
            goto label_178304;
        }
    }
    ctx->pc = 0x1782F8u;
    // 0x1782f8: 0x26c579d0  addiu       $a1, $s6, 0x79D0
    ctx->pc = 0x1782f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 31184));
    // 0x1782fc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1782FCu;
    SET_GPR_U32(ctx, 31, 0x178304u);
    ctx->pc = 0x178300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782FCu;
    // 0x178300: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1782FCu, 0x178304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178304u;
label_178304:
    // 0x178304: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x178304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_178308:
    // 0x178308: 0xc06e96e  jal         func_1BA5B8
    ctx->pc = 0x178308u;
    SET_GPR_U32(ctx, 31, 0x178310u);
    ctx->pc = 0x17830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178308u;
    // 0x17830c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA5B8u, 0x178308u, 0x178310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178310u;
label_178310:
    // 0x178310: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x178310u;
    {
        const bool branch_taken_0x178310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178310u;
        // 0x178314: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178310) {
            ctx->pc = 0x1782D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1782d8;
        }
    }
    ctx->pc = 0x178318u;
    // 0x178318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x178318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17831c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x17831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x178320: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x178320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178324: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x178324u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x178328: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x178328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x17832c: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x17832Cu;
    SET_GPR_U32(ctx, 31, 0x178334u);
    ctx->pc = 0x178330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17832Cu;
    // 0x178330: 0xae23fffc  sw          $v1, -0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x17832Cu, 0x178334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178334u;
label_178334:
    // 0x178334: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x178334u;
    {
        const bool branch_taken_0x178334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178334u;
        // 0x178338: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178334) {
            ctx->pc = 0x178368u;
            goto label_178368;
        }
    }
    ctx->pc = 0x17833Cu;
    // 0x17833c: 0x0  nop
    ctx->pc = 0x17833cu;
    // NOP
label_178340:
    // 0x178340: 0x26520048  addiu       $s2, $s2, 0x48
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x178344: 0x2aa20028  slti        $v0, $s5, 0x28
    ctx->pc = 0x178344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x178348: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x178348u;
    {
        const bool branch_taken_0x178348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178348u;
        // 0x17834c: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178348) {
            ctx->pc = 0x1782A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1782a8;
        }
    }
    ctx->pc = 0x178350u;
    // 0x178350: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x178350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x178354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178358: 0x24a579e0  addiu       $a1, $a1, 0x79E0
    ctx->pc = 0x178358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31200));
    // 0x17835c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17835Cu;
    SET_GPR_U32(ctx, 31, 0x178364u);
    ctx->pc = 0x178360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17835Cu;
    // 0x178360: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17835Cu, 0x178364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178364u;
label_178364:
    // 0x178364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_178368:
    // 0x178368: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x178368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17836c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x17836cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178370: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x178370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x178374: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x178374u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x178378: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x178378u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17837c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x17837cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x178380: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x178380u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x178384: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x178384u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x178388: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x178388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17838c: 0x3e00008  jr          $ra
    ctx->pc = 0x17838Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17838Cu;
        // 0x178390: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17838Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178394u;
}
