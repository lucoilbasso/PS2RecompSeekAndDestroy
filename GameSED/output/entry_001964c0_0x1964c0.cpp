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

// Function: entry_001964c0
// Address: 0x1964c0 - 0x196568
void entry_001964c0_0x1964c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001964c0_0x1964c0");
#endif

    switch (ctx->pc) {
        case 0x1964d0u: goto label_1964d0;
        case 0x1964e0u: goto label_1964e0;
        case 0x1964fcu: goto label_1964fc;
        case 0x196510u: goto label_196510;
        case 0x196518u: goto label_196518;
        case 0x196530u: goto label_196530;
        default: break;
    }

    ctx->pc = 0x1964c0u;

label_1964c0:
    // 0x1964c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1964c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1964c4:
    // 0x1964c4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1964c8:
    // 0x1964c8: 0xc0618da  jal         func_186368
label_1964cc:
    if (ctx->pc == 0x1964CCu) {
        ctx->pc = 0x1964CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964C8u;
        // 0x1964cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964D0u;
        goto label_1964d0;
    }
    ctx->pc = 0x1964C8u;
    SET_GPR_U32(ctx, 31, 0x1964D0u);
    ctx->pc = 0x1964CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964C8u;
    // 0x1964cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x1964C8u, 0x1964D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964D0u;
label_1964d0:
    // 0x1964d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1964d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1964d4:
    // 0x1964d4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x1964d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_1964d8:
    // 0x1964d8: 0xc0618f2  jal         func_1863C8
label_1964dc:
    if (ctx->pc == 0x1964DCu) {
        ctx->pc = 0x1964DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964D8u;
        // 0x1964dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964E0u;
        goto label_1964e0;
    }
    ctx->pc = 0x1964D8u;
    SET_GPR_U32(ctx, 31, 0x1964E0u);
    ctx->pc = 0x1964DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964D8u;
    // 0x1964dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1863C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1863C8u, 0x1964D8u, 0x1964E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964E0u;
label_1964e0:
    // 0x1964e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1964e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1964e4:
    // 0x1964e4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x1964e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1964e8:
    // 0x1964e8: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1964e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1964ec:
    // 0x1964ec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1964ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1964f0:
    // 0x1964f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1964f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1964f4:
    // 0x1964f4: 0x60f809  jalr        $v1
label_1964f8:
    if (ctx->pc == 0x1964F8u) {
        ctx->pc = 0x1964F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F4u;
        // 0x1964f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1964FCu;
        goto label_1964fc;
    }
    ctx->pc = 0x1964F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1964FCu);
        ctx->pc = 0x1964F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964F4u;
        // 0x1964f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1964F4u, 0x1964FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1964FCu;
label_1964fc:
    // 0x1964fc: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1964fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_196500:
    // 0x196500: 0x602002b  bltzl       $s0, . + 4 + (0x2B << 2)
label_196504:
    if (ctx->pc == 0x196504u) {
        ctx->pc = 0x196504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196500u;
        // 0x196504: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196508u;
        goto label_196508;
    }
    ctx->pc = 0x196500u;
    {
        const bool branch_taken_0x196500 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x196500) {
            ctx->pc = 0x196504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196500u;
            // 0x196504: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1965B0u;
            return;
        }
    }
    ctx->pc = 0x196508u;
label_196508:
    // 0x196508: 0xc06bd28  jal         func_1AF4A0
label_19650c:
    if (ctx->pc == 0x19650Cu) {
        ctx->pc = 0x19650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196508u;
        // 0x19650c: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196510u;
        goto label_196510;
    }
    ctx->pc = 0x196508u;
    SET_GPR_U32(ctx, 31, 0x196510u);
    ctx->pc = 0x19650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196508u;
    // 0x19650c: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x196508u, 0x196510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196510u;
label_196510:
    // 0x196510: 0xc06bd20  jal         func_1AF480
label_196514:
    if (ctx->pc == 0x196514u) {
        ctx->pc = 0x196514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196510u;
        // 0x196514: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196518u;
        goto label_196518;
    }
    ctx->pc = 0x196510u;
    SET_GPR_U32(ctx, 31, 0x196518u);
    ctx->pc = 0x196514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196510u;
    // 0x196514: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x196510u, 0x196518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196518u;
label_196518:
    // 0x196518: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x196518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_19651c:
    // 0x19651c: 0x8eb00024  lw          $s0, 0x24($s5)
    ctx->pc = 0x19651cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_196520:
    // 0x196520: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x196520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_196524:
    // 0x196524: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x196524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_196528:
    // 0x196528: 0xc05fec2  jal         func_17FB08
label_19652c:
    if (ctx->pc == 0x19652Cu) {
        ctx->pc = 0x19652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196528u;
        // 0x19652c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196530u;
        goto label_196530;
    }
    ctx->pc = 0x196528u;
    SET_GPR_U32(ctx, 31, 0x196530u);
    ctx->pc = 0x19652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196528u;
    // 0x19652c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB08u, 0x196528u, 0x196530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196530u;
label_196530:
    // 0x196530: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x196530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196534:
    // 0x196534: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x196534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_196538:
    // 0x196538: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x196538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_19653c:
    // 0x19653c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x19653cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_196540:
    // 0x196540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196544:
    // 0x196544: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x196544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_196548:
    // 0x196548: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x196548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_19654c:
    // 0x19654c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19654cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196550:
    // 0x196550: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x196550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_196554:
    // 0x196554: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x196554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_196558:
    // 0x196558: 0x448024  and         $s0, $v0, $a0
    ctx->pc = 0x196558u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19655c:
    // 0x19655c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_196560:
    if (ctx->pc == 0x196560u) {
        ctx->pc = 0x196560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19655Cu;
        // 0x196560: 0x102900  sll         $a1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196564u;
        goto label_196564;
    }
    ctx->pc = 0x19655Cu;
    {
        const bool branch_taken_0x19655c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x196560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19655Cu;
        // 0x196560: 0x102900  sll         $a1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19655c) {
            ctx->pc = 0x196568u;
            return;
        }
    }
    ctx->pc = 0x196564u;
label_196564:
    // 0x196564: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x196564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->pc = 0x196568u;
}
