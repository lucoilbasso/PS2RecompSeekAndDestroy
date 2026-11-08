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

// Function: entry_00143888
// Address: 0x143888 - 0x1438c4
void entry_00143888_0x143888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143888_0x143888");
#endif

    switch (ctx->pc) {
        case 0x1438a8u: goto label_1438a8;
        default: break;
    }

    ctx->pc = 0x143888u;

label_143888:
    // 0x143888: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
label_14388c:
    if (ctx->pc == 0x14388Cu) {
        ctx->pc = 0x14388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143888u;
        // 0x14388c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143890u;
        goto label_143890;
    }
    ctx->pc = 0x143888u;
    {
        const bool branch_taken_0x143888 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143888u;
        // 0x14388c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143888) {
            ctx->pc = 0x1438C4u;
            return;
        }
    }
    ctx->pc = 0x143890u;
label_143890:
    // 0x143890: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x143890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_143894:
    // 0x143894: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x143894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_143898:
    // 0x143898: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14389c:
    // 0x14389c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14389cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1438a0:
    // 0x1438a0: 0x60f809  jalr        $v1
label_1438a4:
    if (ctx->pc == 0x1438A4u) {
        ctx->pc = 0x1438A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438A0u;
        // 0x1438a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438A8u;
        goto label_1438a8;
    }
    ctx->pc = 0x1438A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1438A8u);
        ctx->pc = 0x1438A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438A0u;
        // 0x1438a4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1438A0u, 0x1438A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1438A8u;
label_1438a8:
    // 0x1438a8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1438a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1438ac:
    // 0x1438ac: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x1438acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1438b0:
    // 0x1438b0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1438b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1438b4:
    // 0x1438b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1438b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1438b8:
    // 0x1438b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1438b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1438bc:
    // 0x1438bc: 0x60f809  jalr        $v1
label_1438c0:
    if (ctx->pc == 0x1438C0u) {
        ctx->pc = 0x1438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438BCu;
        // 0x1438c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438C4u;
        goto label_fallthrough_0x1438bc;
    }
    ctx->pc = 0x1438BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1438C4u);
        ctx->pc = 0x1438C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438BCu;
        // 0x1438c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1438BCu, 0x1438C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1438bc:
    ctx->pc = 0x1438C4u;
}
