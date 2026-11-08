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

// Function: FontForwarding__9WcFontMan
// Address: 0x17c488 - 0x17c5fc
void FontForwarding__9WcFontMan_0x17c488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FontForwarding__9WcFontMan_0x17c488");
#endif

    switch (ctx->pc) {
        case 0x17c4d0u: goto label_17c4d0;
        case 0x17c504u: goto label_17c504;
        case 0x17c518u: goto label_17c518;
        case 0x17c524u: goto label_17c524;
        case 0x17c534u: goto label_17c534;
        case 0x17c540u: goto label_17c540;
        case 0x17c560u: goto label_17c560;
        case 0x17c568u: goto label_17c568;
        case 0x17c5a8u: goto label_17c5a8;
        case 0x17c5e0u: goto label_17c5e0;
        default: break;
    }

    ctx->pc = 0x17c488u;

    // 0x17c488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17c488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17c48c: 0x8f838d18  lw          $v1, -0x72E8($gp)
    ctx->pc = 0x17c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937880)));
    // 0x17c490: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17c490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17c494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17c494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c498: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17c49c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x17c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x17c4a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17c4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17c4a4: 0x2452d1c0  addiu       $s2, $v0, -0x2E40
    ctx->pc = 0x17c4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x17c4a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17c4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17c4ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17c4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17c4b0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x17C4B0u;
    {
        const bool branch_taken_0x17c4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4B0u;
        // 0x17c4b4: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4b0) {
            ctx->pc = 0x17C518u;
            goto label_17c518;
        }
    }
    ctx->pc = 0x17C4B8u;
    // 0x17c4b8: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x17c4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17c4bc: 0x3c102000  lui         $s0, 0x2000
    ctx->pc = 0x17c4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)8192 << 16));
    // 0x17c4c0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x17c4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x17c4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4c8: 0xc05f874  jal         func_17E1D0
    ctx->pc = 0x17C4C8u;
    SET_GPR_U32(ctx, 31, 0x17C4D0u);
    ctx->pc = 0x17C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C4C8u;
    // 0x17c4cc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1D0u, 0x17C4C8u, 0x17C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C4D0u;
label_17c4d0:
    // 0x17c4d0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x17c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x17c4d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17c4d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17c4dc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x17c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17c4e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x17c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x17c4e4: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x17c4e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
    // 0x17c4e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x17c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x17c4ec: 0x28a200a1  slti        $v0, $a1, 0xA1
    ctx->pc = 0x17c4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)161) ? 1 : 0);
    // 0x17c4f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17C4F0u;
    {
        const bool branch_taken_0x17c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C4F0u;
        // 0x17c4f4: 0xaf808d18  sw          $zero, -0x72E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937880), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c4f0) {
            ctx->pc = 0x17C518u;
            goto label_17c518;
        }
    }
    ctx->pc = 0x17C4F8u;
    // 0x17c4f8: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x17c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x17c4fc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17C4FCu;
    SET_GPR_U32(ctx, 31, 0x17C504u);
    ctx->pc = 0x17C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C4FCu;
    // 0x17c500: 0x2484d590  addiu       $a0, $a0, -0x2A70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17C4FCu, 0x17C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C504u;
label_17c504:
    // 0x17c504: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17c504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17c508: 0x24a57b50  addiu       $a1, $a1, 0x7B50
    ctx->pc = 0x17c508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31568));
    // 0x17c50c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17c50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c510: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17C510u;
    SET_GPR_U32(ctx, 31, 0x17C518u);
    ctx->pc = 0x17C514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C510u;
    // 0x17c514: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17C510u, 0x17C518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C518u;
label_17c518:
    // 0x17c518: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c51c: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x17C51Cu;
    SET_GPR_U32(ctx, 31, 0x17C524u);
    ctx->pc = 0x17C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C51Cu;
    // 0x17c520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x17C51Cu, 0x17C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C524u;
label_17c524:
    // 0x17c524: 0x8f848c64  lw          $a0, -0x739C($gp)
    ctx->pc = 0x17c524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
    // 0x17c528: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x17c528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c52c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17C52Cu;
    SET_GPR_U32(ctx, 31, 0x17C534u);
    ctx->pc = 0x17C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C52Cu;
    // 0x17c530: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17C52Cu, 0x17C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C534u;
label_17c534:
    // 0x17c534: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17c534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x17c538: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x17c538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c53c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x17c53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_17c540:
    // 0x17c540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c544: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x17c544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x17c548: 0x0  nop
    ctx->pc = 0x17c548u;
    // NOP
    // 0x17c54c: 0x0  nop
    ctx->pc = 0x17c54cu;
    // NOP
    // 0x17c550: 0x0  nop
    ctx->pc = 0x17c550u;
    // NOP
    // 0x17c554: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C554u;
    {
        const bool branch_taken_0x17c554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c554) {
            ctx->pc = 0x17C540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c540;
        }
    }
    ctx->pc = 0x17C55Cu;
    // 0x17c55c: 0x0  nop
    ctx->pc = 0x17c55cu;
    // NOP
label_17c560:
    // 0x17c560: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x17C560u;
    SET_GPR_U32(ctx, 31, 0x17C568u);
    ctx->pc = 0x17C564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C560u;
    // 0x17c564: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x17C560u, 0x17C568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C568u;
label_17c568:
    // 0x17c568: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x17c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x17c56c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17C56Cu;
    {
        const bool branch_taken_0x17c56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C56Cu;
        // 0x17c570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c56c) {
            ctx->pc = 0x17C560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17c560;
        }
    }
    ctx->pc = 0x17C574u;
    // 0x17c574: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17c574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c578: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C578u;
    {
        const bool branch_taken_0x17c578 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C578u;
        // 0x17c57c: 0xaf828c70  sw          $v0, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c578) {
            ctx->pc = 0x17C598u;
            goto label_17c598;
        }
    }
    ctx->pc = 0x17C580u;
    // 0x17c580: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x17c580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x17c584: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x17c584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x17c588: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17c588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17c58c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x17c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x17c590: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17C590u;
    {
        const bool branch_taken_0x17c590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C590u;
        // 0x17c594: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c590) {
            ctx->pc = 0x17C5A8u;
            goto label_17c5a8;
        }
    }
    ctx->pc = 0x17C598u;
label_17c598:
    // 0x17c598: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x17C598u;
    {
        const bool branch_taken_0x17c598 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C598u;
        // 0x17c59c: 0x8f838c54  lw          $v1, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c598) {
            ctx->pc = 0x17C5ACu;
            goto label_17c5ac;
        }
    }
    ctx->pc = 0x17C5A0u;
    // 0x17c5a0: 0xc06bdb8  jal         func_1AF6E0
    ctx->pc = 0x17C5A0u;
    SET_GPR_U32(ctx, 31, 0x17C5A8u);
    ctx->pc = 0x17C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C5A0u;
    // 0x17c5a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x17C5A0u, 0x17C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5A8u;
label_17c5a8:
    // 0x17c5a8: 0x8f838c54  lw          $v1, -0x73AC($gp)
    ctx->pc = 0x17c5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_17c5ac:
    // 0x17c5ac: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x17c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x17c5b0: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x17c5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x17c5b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c5b8: 0xac700030  sw          $s0, 0x30($v1)
    ctx->pc = 0x17c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 16));
    // 0x17c5bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x17c5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x17c5c0: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x17c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x17c5c4: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x17c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x17c5c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x17c5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x17c5cc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x17c5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x17c5d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x17c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17c5d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x17c5d8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17C5D8u;
    SET_GPR_U32(ctx, 31, 0x17C5E0u);
    ctx->pc = 0x17C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C5D8u;
    // 0x17c5dc: 0x8e240830  lw          $a0, 0x830($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17C5D8u, 0x17C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C5E0u;
label_17c5e0:
    // 0x17c5e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17c5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c5e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17c5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c5e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17c5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c5ec: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x17c5ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17c5f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17c5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17C5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5F4u;
        // 0x17c5f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17C5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17C5FCu;
}
