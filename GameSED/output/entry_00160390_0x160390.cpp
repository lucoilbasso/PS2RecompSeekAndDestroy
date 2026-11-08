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

// Function: entry_00160390
// Address: 0x160390 - 0x1603c8
void entry_00160390_0x160390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160390_0x160390");
#endif

    switch (ctx->pc) {
        case 0x1603b4u: goto label_1603b4;
        default: break;
    }

    ctx->pc = 0x160390u;

label_160390:
    // 0x160390: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x160390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_160394:
    // 0x160394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160398:
    // 0x160398: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_16039c:
    // 0x16039c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x16039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1603a0:
    // 0x1603a0: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1603a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_1603a4:
    // 0x1603a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1603a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1603a8:
    // 0x1603a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1603a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1603ac:
    // 0x1603ac: 0x60f809  jalr        $v1
label_1603b0:
    if (ctx->pc == 0x1603B0u) {
        ctx->pc = 0x1603B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603ACu;
        // 0x1603b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603B4u;
        goto label_1603b4;
    }
    ctx->pc = 0x1603ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1603B4u);
        ctx->pc = 0x1603B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603ACu;
        // 0x1603b0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1603ACu, 0x1603B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1603B4u;
label_1603b4:
    // 0x1603b4: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1603b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_1603b8:
    // 0x1603b8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
label_1603bc:
    if (ctx->pc == 0x1603BCu) {
        ctx->pc = 0x1603BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603B8u;
        // 0x1603bc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603C0u;
        goto label_1603c0;
    }
    ctx->pc = 0x1603B8u;
    {
        const bool branch_taken_0x1603b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1603b8) {
            ctx->pc = 0x1603BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1603B8u;
            // 0x1603bc: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160390;
        }
    }
    ctx->pc = 0x1603C0u;
label_1603c0:
    // 0x1603c0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1603c4:
    if (ctx->pc == 0x1603C4u) {
        ctx->pc = 0x1603C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603C0u;
        // 0x1603c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1603C8u;
        goto label_fallthrough_0x1603c0;
    }
    ctx->pc = 0x1603C0u;
    {
        const bool branch_taken_0x1603c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603C0u;
        // 0x1603c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603c0) {
            ctx->pc = 0x160438u;
            return;
        }
    }
label_fallthrough_0x1603c0:
    ctx->pc = 0x1603C8u;
}
