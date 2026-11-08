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

// Function: entry_0015e4f0
// Address: 0x15e4f0 - 0x15e53c
void entry_0015e4f0_0x15e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e4f0_0x15e4f0");
#endif

    switch (ctx->pc) {
        case 0x15e518u: goto label_15e518;
        default: break;
    }

    ctx->pc = 0x15e4f0u;

label_15e4f0:
    // 0x15e4f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15e4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15e4f4:
    // 0x15e4f4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_15e4f8:
    if (ctx->pc == 0x15E4F8u) {
        ctx->pc = 0x15E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4F4u;
        // 0x15e4f8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4FCu;
        goto label_15e4fc;
    }
    ctx->pc = 0x15E4F4u;
    {
        const bool branch_taken_0x15e4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e4f4) {
            ctx->pc = 0x15E4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E4F4u;
            // 0x15e4f8: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E540u;
            return;
        }
    }
    ctx->pc = 0x15E4FCu;
label_15e4fc:
    // 0x15e4fc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e500:
    // 0x15e500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e504:
    // 0x15e504: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e508:
    // 0x15e508: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e50c:
    // 0x15e50c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e510:
    // 0x15e510: 0x60f809  jalr        $v1
label_15e514:
    if (ctx->pc == 0x15E514u) {
        ctx->pc = 0x15E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E510u;
        // 0x15e514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E518u;
        goto label_15e518;
    }
    ctx->pc = 0x15E510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E518u);
        ctx->pc = 0x15E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E510u;
        // 0x15e514: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E510u, 0x15E518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E518u;
label_15e518:
    // 0x15e518: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x15e518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15e51c:
    // 0x15e51c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15e520:
    if (ctx->pc == 0x15E520u) {
        ctx->pc = 0x15E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E51Cu;
        // 0x15e520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E524u;
        goto label_15e524;
    }
    ctx->pc = 0x15E51Cu;
    {
        const bool branch_taken_0x15e51c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E51Cu;
        // 0x15e520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e51c) {
            ctx->pc = 0x15E53Cu;
            return;
        }
    }
    ctx->pc = 0x15E524u;
label_15e524:
    // 0x15e524: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x15e524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_15e528:
    // 0x15e528: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x15e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_15e52c:
    // 0x15e52c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15e52cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15e530:
    // 0x15e530: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15e534:
    // 0x15e534: 0x60f809  jalr        $v1
label_15e538:
    if (ctx->pc == 0x15E538u) {
        ctx->pc = 0x15E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E534u;
        // 0x15e538: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E53Cu;
        goto label_fallthrough_0x15e534;
    }
    ctx->pc = 0x15E534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E53Cu);
        ctx->pc = 0x15E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E534u;
        // 0x15e538: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E534u, 0x15E53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e534:
    ctx->pc = 0x15E53Cu;
}
