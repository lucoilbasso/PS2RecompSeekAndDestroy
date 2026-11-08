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

// Function: entry_0015f530
// Address: 0x15f530 - 0x15f690
void entry_0015f530_0x15f530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015f530_0x15f530");
#endif

    switch (ctx->pc) {
        case 0x15f54cu: goto label_15f54c;
        case 0x15f554u: goto label_15f554;
        case 0x15f574u: goto label_15f574;
        case 0x15f57cu: goto label_15f57c;
        case 0x15f5a4u: goto label_15f5a4;
        case 0x15f5b4u: goto label_15f5b4;
        case 0x15f5d0u: goto label_15f5d0;
        default: break;
    }

    ctx->pc = 0x15f530u;

label_15f530:
    // 0x15f530: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15f530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15f534:
    // 0x15f534: 0x2454a968  addiu       $s4, $v0, -0x5698
    ctx->pc = 0x15f534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945128));
label_15f538:
    // 0x15f538: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15f538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15f53c:
    // 0x15f53c: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15f53cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15f540:
    // 0x15f540: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15f540u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15f544:
    // 0x15f544: 0xc06bd28  jal         func_1AF4A0
label_15f548:
    if (ctx->pc == 0x15F548u) {
        ctx->pc = 0x15F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F544u;
        // 0x15f548: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F54Cu;
        goto label_15f54c;
    }
    ctx->pc = 0x15F544u;
    SET_GPR_U32(ctx, 31, 0x15F54Cu);
    ctx->pc = 0x15F548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F544u;
    // 0x15f548: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15F544u, 0x15F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F54Cu;
label_15f54c:
    // 0x15f54c: 0xc06bd20  jal         func_1AF480
label_15f550:
    if (ctx->pc == 0x15F550u) {
        ctx->pc = 0x15F550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F54Cu;
        // 0x15f550: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F554u;
        goto label_15f554;
    }
    ctx->pc = 0x15F54Cu;
    SET_GPR_U32(ctx, 31, 0x15F554u);
    ctx->pc = 0x15F550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F54Cu;
    // 0x15f550: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15F54Cu, 0x15F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F554u;
label_15f554:
    // 0x15f554: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15f554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15f558:
    // 0x15f558: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15f558u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15f55c:
    // 0x15f55c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15f560:
    // 0x15f560: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15f560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15f564:
    // 0x15f564: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15f564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15f568:
    // 0x15f568: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15f568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15f56c:
    // 0x15f56c: 0xc0682b2  jal         func_1A0AC8
label_15f570:
    if (ctx->pc == 0x15F570u) {
        ctx->pc = 0x15F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F56Cu;
        // 0x15f570: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F574u;
        goto label_15f574;
    }
    ctx->pc = 0x15F56Cu;
    SET_GPR_U32(ctx, 31, 0x15F574u);
    ctx->pc = 0x15F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F56Cu;
    // 0x15f570: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15F56Cu, 0x15F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F574u;
label_15f574:
    // 0x15f574: 0xc0682b6  jal         func_1A0AD8
label_15f578:
    if (ctx->pc == 0x15F578u) {
        ctx->pc = 0x15F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F574u;
        // 0x15f578: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F57Cu;
        goto label_15f57c;
    }
    ctx->pc = 0x15F574u;
    SET_GPR_U32(ctx, 31, 0x15F57Cu);
    ctx->pc = 0x15F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F574u;
    // 0x15f578: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15F574u, 0x15F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F57Cu;
label_15f57c:
    // 0x15f57c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15f57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15f580:
    // 0x15f580: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15f580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f584:
    // 0x15f584: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15f588:
    // 0x15f588: 0x245601c0  addiu       $s6, $v0, 0x1C0
    ctx->pc = 0x15f588u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15f58c:
    // 0x15f58c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15f58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15f590:
    // 0x15f590: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15f590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15f594:
    // 0x15f594: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15f594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f598:
    // 0x15f598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15f598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f59c:
    // 0x15f59c: 0xc062cb0  jal         func_18B2C0
label_15f5a0:
    if (ctx->pc == 0x15F5A0u) {
        ctx->pc = 0x15F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F59Cu;
        // 0x15f5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5A4u;
        goto label_15f5a4;
    }
    ctx->pc = 0x15F59Cu;
    SET_GPR_U32(ctx, 31, 0x15F5A4u);
    ctx->pc = 0x15F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F59Cu;
    // 0x15f5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15F59Cu, 0x15F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5A4u;
label_15f5a4:
    // 0x15f5a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f5a8:
    // 0x15f5a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f5ac:
    // 0x15f5ac: 0xc06825c  jal         func_1A0970
label_15f5b0:
    if (ctx->pc == 0x15F5B0u) {
        ctx->pc = 0x15F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5ACu;
        // 0x15f5b0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5B4u;
        goto label_15f5b4;
    }
    ctx->pc = 0x15F5ACu;
    SET_GPR_U32(ctx, 31, 0x15F5B4u);
    ctx->pc = 0x15F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F5ACu;
    // 0x15f5b0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15F5ACu, 0x15F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5B4u;
label_15f5b4:
    // 0x15f5b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15f5b8:
    // 0x15f5b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f5bc:
    // 0x15f5bc: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15f5c0:
    // 0x15f5c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15f5c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f5c4:
    // 0x15f5c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f5c8:
    // 0x15f5c8: 0x60f809  jalr        $v1
label_15f5cc:
    if (ctx->pc == 0x15F5CCu) {
        ctx->pc = 0x15F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5C8u;
        // 0x15f5cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5D0u;
        goto label_15f5d0;
    }
    ctx->pc = 0x15F5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F5D0u);
        ctx->pc = 0x15F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5C8u;
        // 0x15f5cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F5C8u, 0x15F5D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F5D0u;
label_15f5d0:
    // 0x15f5d0: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15f5d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15f5d4:
    // 0x15f5d4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15f5d8:
    if (ctx->pc == 0x15F5D8u) {
        ctx->pc = 0x15F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5D4u;
        // 0x15f5d8: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5DCu;
        goto label_15f5dc;
    }
    ctx->pc = 0x15F5D4u;
    {
        const bool branch_taken_0x15f5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5D4u;
        // 0x15f5d8: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5d4) {
            ctx->pc = 0x15F690u;
            return;
        }
    }
    ctx->pc = 0x15F5DCu;
label_15f5dc:
    // 0x15f5dc: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15f5dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15f5e0:
    // 0x15f5e0: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15f5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15f5e4:
    // 0x15f5e4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15f5e8:
    // 0x15f5e8: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f5ec:
    // 0x15f5ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f5f0:
    // 0x15f5f0: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f5f4:
    // 0x15f5f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f5f8:
    // 0x15f5f8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f5f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f5fc:
    // 0x15f5fc: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f5fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f600:
    // 0x15f600: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f604:
    // 0x15f604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f608:
    // 0x15f608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f60c:
    // 0x15f60c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f610:
    // 0x15f610: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15f610u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15f614:
    // 0x15f614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f618:
    // 0x15f618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f61c:
    // 0x15f61c: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15f61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f620:
    // 0x15f620: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15f620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15f624:
    // 0x15f624: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15f624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15f628:
    // 0x15f628: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f628u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f62c:
    // 0x15f62c: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15f62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15f630:
    // 0x15f630: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f630u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f634:
    // 0x15f634: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f638:
    // 0x15f638: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f63c:
    // 0x15f63c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f640:
    // 0x15f640: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f644:
    // 0x15f644: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f644u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f648:
    // 0x15f648: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f648u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f64c:
    // 0x15f64c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f64cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f650:
    // 0x15f650: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15f650u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15f654:
    // 0x15f654: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f658:
    // 0x15f658: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15f658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f65c:
    // 0x15f65c: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f660:
    // 0x15f660: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f660u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f664:
    // 0x15f664: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f668:
    // 0x15f668: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f668u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f66c:
    // 0x15f66c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f670:
    // 0x15f670: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f670u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f674:
    // 0x15f674: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f674u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f678:
    // 0x15f678: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f678u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f67c:
    // 0x15f67c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f680:
    // 0x15f680: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f680u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f684:
    // 0x15f684: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15f684u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15f688:
    // 0x15f688: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f688u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f68c:
    // 0x15f68c: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f68cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15f690u;
}
