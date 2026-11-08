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

// Function: entry_001044f0
// Address: 0x1044f0 - 0x104558
void entry_001044f0_0x1044f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001044f0_0x1044f0");
#endif

    switch (ctx->pc) {
        case 0x10450cu: goto label_10450c;
        case 0x104530u: goto label_104530;
        case 0x104550u: goto label_104550;
        default: break;
    }

    ctx->pc = 0x1044f0u;

label_1044f0:
    // 0x1044f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1044f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1044f4:
    // 0x1044f4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1044f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1044f8:
    // 0x1044f8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1044f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1044fc:
    // 0x1044fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1044fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_104500:
    // 0x104500: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x104500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_104504:
    // 0x104504: 0x60f809  jalr        $v1
label_104508:
    if (ctx->pc == 0x104508u) {
        ctx->pc = 0x104508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104504u;
        // 0x104508: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10450Cu;
        goto label_10450c;
    }
    ctx->pc = 0x104504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10450Cu);
        ctx->pc = 0x104508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104504u;
        // 0x104508: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104504u, 0x10450Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10450Cu;
label_10450c:
    // 0x10450c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x10450cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_104510:
    // 0x104510: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x104510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_104514:
    // 0x104514: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x104514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_104518:
    // 0x104518: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_10451c:
    if (ctx->pc == 0x10451Cu) {
        ctx->pc = 0x10451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104518u;
        // 0x10451c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104520u;
        goto label_104520;
    }
    ctx->pc = 0x104518u;
    {
        const bool branch_taken_0x104518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104518) {
            ctx->pc = 0x10451Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104518u;
            // 0x10451c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10456Cu;
            return;
        }
    }
    ctx->pc = 0x104520u;
label_104520:
    // 0x104520: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_104524:
    if (ctx->pc == 0x104524u) {
        ctx->pc = 0x104524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104520u;
        // 0x104524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104528u;
        goto label_104528;
    }
    ctx->pc = 0x104520u;
    {
        const bool branch_taken_0x104520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x104524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104520u;
        // 0x104524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104520) {
            ctx->pc = 0x104558u;
            return;
        }
    }
    ctx->pc = 0x104528u;
label_104528:
    // 0x104528: 0xc0684ee  jal         func_1A13B8
label_10452c:
    if (ctx->pc == 0x10452Cu) {
        ctx->pc = 0x10452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104528u;
        // 0x10452c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104530u;
        goto label_104530;
    }
    ctx->pc = 0x104528u;
    SET_GPR_U32(ctx, 31, 0x104530u);
    ctx->pc = 0x10452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104528u;
    // 0x10452c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13B8u, 0x104528u, 0x104530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104530u;
label_104530:
    // 0x104530: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_104534:
    if (ctx->pc == 0x104534u) {
        ctx->pc = 0x104534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104530u;
        // 0x104534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104538u;
        goto label_104538;
    }
    ctx->pc = 0x104530u;
    {
        const bool branch_taken_0x104530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104530u;
        // 0x104534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104530) {
            ctx->pc = 0x104568u;
            return;
        }
    }
    ctx->pc = 0x104538u;
label_104538:
    // 0x104538: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x104538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_10453c:
    // 0x10453c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x10453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_104540:
    // 0x104540: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x104540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_104544:
    // 0x104544: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x104544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_104548:
    // 0x104548: 0x60f809  jalr        $v1
label_10454c:
    if (ctx->pc == 0x10454Cu) {
        ctx->pc = 0x10454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104548u;
        // 0x10454c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104550u;
        goto label_104550;
    }
    ctx->pc = 0x104548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x104550u);
        ctx->pc = 0x10454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104548u;
        // 0x10454c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104548u, 0x104550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104550u;
label_104550:
    // 0x104550: 0x10000006  b           . + 4 + (0x6 << 2)
label_104554:
    if (ctx->pc == 0x104554u) {
        ctx->pc = 0x104554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104550u;
        // 0x104554: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104558u;
        goto label_fallthrough_0x104550;
    }
    ctx->pc = 0x104550u;
    {
        const bool branch_taken_0x104550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104550u;
        // 0x104554: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104550) {
            ctx->pc = 0x10456Cu;
            return;
        }
    }
label_fallthrough_0x104550:
    ctx->pc = 0x104558u;
}
