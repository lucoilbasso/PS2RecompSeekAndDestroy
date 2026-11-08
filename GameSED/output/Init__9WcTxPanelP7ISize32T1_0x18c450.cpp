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

// Function: Init__9WcTxPanelP7ISize32T1
// Address: 0x18c450 - 0x18c5a4
void Init__9WcTxPanelP7ISize32T1_0x18c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9WcTxPanelP7ISize32T1_0x18c450");
#endif

    switch (ctx->pc) {
        case 0x18c47cu: goto label_18c47c;
        case 0x18c4a0u: goto label_18c4a0;
        case 0x18c508u: goto label_18c508;
        case 0x18c524u: goto label_18c524;
        case 0x18c538u: goto label_18c538;
        case 0x18c560u: goto label_18c560;
        default: break;
    }

    ctx->pc = 0x18c450u;

    // 0x18c450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18c458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c45c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18c460: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x18c460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c464: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x18c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18c468: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18c468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c46c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18c46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x18c470: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18c470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c474: 0xc062de2  jal         func_18B788
    ctx->pc = 0x18C474u;
    SET_GPR_U32(ctx, 31, 0x18C47Cu);
    ctx->pc = 0x18C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C474u;
    // 0x18c478: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B788u, 0x18C474u, 0x18C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C47Cu;
label_18c47c:
    // 0x18c47c: 0x8f838d6c  lw          $v1, -0x7294($gp)
    ctx->pc = 0x18c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937964)));
    // 0x18c480: 0x24020166  addiu       $v0, $zero, 0x166
    ctx->pc = 0x18c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x18c484: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18C484u;
    {
        const bool branch_taken_0x18c484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C484u;
        // 0x18c488: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c484) {
            ctx->pc = 0x18C4C8u;
            goto label_18c4c8;
        }
    }
    ctx->pc = 0x18C48Cu;
    // 0x18c48c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x18c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x18c490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18c490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c494: 0x24421688  addiu       $v0, $v0, 0x1688
    ctx->pc = 0x18c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5768));
    // 0x18c498: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x18c498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x18c49c: 0x0  nop
    ctx->pc = 0x18c49cu;
    // NOP
label_18c4a0:
    // 0x18c4a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18c4a4: 0xa8440003  swl         $a0, 0x3($v0)
    ctx->pc = 0x18c4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18c4a8: 0xb8440000  swr         $a0, 0x0($v0)
    ctx->pc = 0x18c4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x18c4ac: 0x0  nop
    ctx->pc = 0x18c4acu;
    // NOP
    // 0x18c4b0: 0x0  nop
    ctx->pc = 0x18c4b0u;
    // NOP
    // 0x18c4b4: 0x0  nop
    ctx->pc = 0x18c4b4u;
    // NOP
    // 0x18c4b8: 0x461fff9  bgez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18C4B8u;
    {
        const bool branch_taken_0x18c4b8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C4B8u;
        // 0x18c4bc: 0x24420028  addiu       $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c4b8) {
            ctx->pc = 0x18C4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c4a0;
        }
    }
    ctx->pc = 0x18C4C0u;
    // 0x18c4c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c4c4: 0xaf828d6c  sw          $v0, -0x7294($gp)
    ctx->pc = 0x18c4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937964), GPR_U32(ctx, 2));
label_18c4c8:
    // 0x18c4c8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x18c4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x18c4cc: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x18c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x18c4d0: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x18c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x18c4d4: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x18c4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x18c4d8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x18c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
    // 0x18c4dc: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x18c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x18c4e0: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x18c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x18c4e4: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x18c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x18c4e8: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x18c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x18c4ec: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x18c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x18c4f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18c4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18c4f4: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x18c4f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c4f8: 0xfe220208  sd          $v0, 0x208($s1)
    ctx->pc = 0x18c4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 2));
    // 0x18c4fc: 0x8e25020c  lw          $a1, 0x20C($s1)
    ctx->pc = 0x18c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18c500: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18C500u;
    SET_GPR_U32(ctx, 31, 0x18C508u);
    ctx->pc = 0x18C504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C500u;
    // 0x18c504: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18C500u, 0x18C508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C508u;
label_18c508:
    // 0x18c508: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C508u;
    {
        const bool branch_taken_0x18c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C508u;
        // 0x18c50c: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c508) {
            ctx->pc = 0x18C524u;
            goto label_18c524;
        }
    }
    ctx->pc = 0x18C510u;
    // 0x18c510: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18c510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18c514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c518: 0x24a58030  addiu       $a1, $a1, -0x7FD0
    ctx->pc = 0x18c518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934576));
    // 0x18c51c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18C51Cu;
    SET_GPR_U32(ctx, 31, 0x18C524u);
    ctx->pc = 0x18C520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C51Cu;
    // 0x18c520: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18C51Cu, 0x18C524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C524u;
label_18c524:
    // 0x18c524: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x18c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18c528: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18C528u;
    {
        const bool branch_taken_0x18c528 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18c528) {
            ctx->pc = 0x18C52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C528u;
            // 0x18c52c: 0xa620023c  sh          $zero, 0x23C($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 572), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C558u;
            goto label_18c558;
        }
    }
    ctx->pc = 0x18C530u;
    // 0x18c530: 0x8e230254  lw          $v1, 0x254($s1)
    ctx->pc = 0x18c530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x18c534: 0x0  nop
    ctx->pc = 0x18c534u;
    // NOP
label_18c538:
    // 0x18c538: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18c53c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x18c540: 0x0  nop
    ctx->pc = 0x18c540u;
    // NOP
    // 0x18c544: 0x0  nop
    ctx->pc = 0x18c544u;
    // NOP
    // 0x18c548: 0x0  nop
    ctx->pc = 0x18c548u;
    // NOP
    // 0x18c54c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18C54Cu;
    {
        const bool branch_taken_0x18c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C54Cu;
        // 0x18c550: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c54c) {
            ctx->pc = 0x18C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18c538;
        }
    }
    ctx->pc = 0x18C554u;
    // 0x18c554: 0xa620023c  sh          $zero, 0x23C($s1)
    ctx->pc = 0x18c554u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 572), (uint16_t)GPR_U32(ctx, 0));
label_18c558:
    // 0x18c558: 0xc063af8  jal         func_18EBE0
    ctx->pc = 0x18C558u;
    SET_GPR_U32(ctx, 31, 0x18C560u);
    ctx->pc = 0x18C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C558u;
    // 0x18c55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EBE0u, 0x18C558u, 0x18C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C560u;
label_18c560:
    // 0x18c560: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C560u;
    {
        const bool branch_taken_0x18c560 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c560) {
            ctx->pc = 0x18C564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C560u;
            // 0x18c564: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C578u;
            goto label_18c578;
        }
    }
    ctx->pc = 0x18C568u;
    // 0x18c568: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x18c568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x18c56c: 0x26230230  addiu       $v1, $s1, 0x230
    ctx->pc = 0x18c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x18c570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C570u;
    {
        const bool branch_taken_0x18c570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C570u;
        // 0x18c574: 0x8e240208  lw          $a0, 0x208($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c570) {
            ctx->pc = 0x18C580u;
            goto label_18c580;
        }
    }
    ctx->pc = 0x18C578u;
label_18c578:
    // 0x18c578: 0x26230230  addiu       $v1, $s1, 0x230
    ctx->pc = 0x18c578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x18c57c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x18c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_18c580:
    // 0x18c580: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18c580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x18c584: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x18c584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x18c588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18c588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c58c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18c58cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18c590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x18c590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c594: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18c594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18c598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18c598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c59c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C59Cu;
        // 0x18c5a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C5A4u;
}
