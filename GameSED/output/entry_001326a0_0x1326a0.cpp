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

// Function: entry_001326a0
// Address: 0x1326a0 - 0x1326dc
void entry_001326a0_0x1326a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001326a0_0x1326a0");
#endif

    switch (ctx->pc) {
        case 0x1326d8u: goto label_1326d8;
        default: break;
    }

    ctx->pc = 0x1326a0u;

label_1326a0:
    // 0x1326a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1326a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1326a4:
    // 0x1326a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1326a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1326a8:
    // 0x1326a8: 0x8cc20154  lw          $v0, 0x154($a2)
    ctx->pc = 0x1326a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
label_1326ac:
    // 0x1326ac: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1326acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_1326b0:
    // 0x1326b0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1326b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_1326b4:
    // 0x1326b4: 0x8c8602f8  lw          $a2, 0x2F8($a0)
    ctx->pc = 0x1326b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 760)));
label_1326b8:
    // 0x1326b8: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
label_1326bc:
    if (ctx->pc == 0x1326BCu) {
        ctx->pc = 0x1326BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326B8u;
        // 0x1326bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1326C0u;
        goto label_1326c0;
    }
    ctx->pc = 0x1326B8u;
    {
        const bool branch_taken_0x1326b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1326b8) {
            ctx->pc = 0x1326BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1326B8u;
            // 0x1326bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1326DCu;
            return;
        }
    }
    ctx->pc = 0x1326C0u;
label_1326c0:
    // 0x1326c0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1326c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1326c4:
    // 0x1326c4: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x1326c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_1326c8:
    // 0x1326c8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1326c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1326cc:
    // 0x1326cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1326ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1326d0:
    // 0x1326d0: 0x60f809  jalr        $v1
label_1326d4:
    if (ctx->pc == 0x1326D4u) {
        ctx->pc = 0x1326D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326D0u;
        // 0x1326d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1326D8u;
        goto label_1326d8;
    }
    ctx->pc = 0x1326D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1326D8u);
        ctx->pc = 0x1326D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326D0u;
        // 0x1326d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1326D0u, 0x1326D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1326D8u;
label_1326d8:
    // 0x1326d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1326d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1326dcu;
}
