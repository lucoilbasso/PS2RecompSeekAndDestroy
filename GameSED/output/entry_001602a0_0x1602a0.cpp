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

// Function: entry_001602a0
// Address: 0x1602a0 - 0x1602d4
void entry_001602a0_0x1602a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001602a0_0x1602a0");
#endif

    switch (ctx->pc) {
        case 0x1602c4u: goto label_1602c4;
        default: break;
    }

    ctx->pc = 0x1602a0u;

label_1602a0:
    // 0x1602a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1602a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1602a4:
    // 0x1602a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1602a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1602a8:
    // 0x1602a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1602a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1602ac:
    // 0x1602ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1602acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1602b0:
    // 0x1602b0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1602b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1602b4:
    // 0x1602b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1602b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1602b8:
    // 0x1602b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1602b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1602bc:
    // 0x1602bc: 0x60f809  jalr        $v1
label_1602c0:
    if (ctx->pc == 0x1602C0u) {
        ctx->pc = 0x1602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602BCu;
        // 0x1602c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602C4u;
        goto label_1602c4;
    }
    ctx->pc = 0x1602BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1602C4u);
        ctx->pc = 0x1602C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602BCu;
        // 0x1602c0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1602BCu, 0x1602C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1602C4u;
label_1602c4:
    // 0x1602c4: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1602c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_1602c8:
    // 0x1602c8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_1602cc:
    if (ctx->pc == 0x1602CCu) {
        ctx->pc = 0x1602CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602C8u;
        // 0x1602cc: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1602D0u;
        goto label_1602d0;
    }
    ctx->pc = 0x1602C8u;
    {
        const bool branch_taken_0x1602c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1602c8) {
            ctx->pc = 0x1602CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1602C8u;
            // 0x1602cc: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1602A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1602a0;
        }
    }
    ctx->pc = 0x1602D0u;
label_1602d0:
    // 0x1602d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1602d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1602d4u;
}
