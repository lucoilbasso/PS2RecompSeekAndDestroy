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

// Function: entry_00100680
// Address: 0x100680 - 0x1006b8
void entry_00100680_0x100680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100680_0x100680");
#endif

    ctx->pc = 0x100680u;

label_100680:
    // 0x100680: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x100680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_100684:
    // 0x100684: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x100684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_100688:
    // 0x100688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10068c:
    // 0x10068c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10068cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100690:
    // 0x100690: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x100690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_100694:
    // 0x100694: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_100698:
    if (ctx->pc == 0x100698u) {
        ctx->pc = 0x100698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100694u;
        // 0x100698: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10069Cu;
        goto label_10069c;
    }
    ctx->pc = 0x100694u;
    {
        const bool branch_taken_0x100694 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x100698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100694u;
        // 0x100698: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100694) {
            ctx->pc = 0x1006B8u;
            return;
        }
    }
    ctx->pc = 0x10069Cu;
label_10069c:
    // 0x10069c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x10069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1006a0:
    // 0x1006a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1006a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1006a4:
    // 0x1006a4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1006a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1006a8:
    // 0x1006a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1006a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1006ac:
    // 0x1006ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1006acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1006b0:
    // 0x1006b0: 0x60f809  jalr        $v1
label_1006b4:
    if (ctx->pc == 0x1006B4u) {
        ctx->pc = 0x1006B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006B0u;
        // 0x1006b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1006B8u;
        goto label_fallthrough_0x1006b0;
    }
    ctx->pc = 0x1006B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1006B8u);
        ctx->pc = 0x1006B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1006B0u;
        // 0x1006b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1006B0u, 0x1006B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1006b0:
    ctx->pc = 0x1006B8u;
}
