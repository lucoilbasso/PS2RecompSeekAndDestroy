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

// Function: entry_0014d038
// Address: 0x14d038 - 0x14d06c
void entry_0014d038_0x14d038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d038_0x14d038");
#endif

    ctx->pc = 0x14d038u;

label_14d038:
    // 0x14d038: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_14d03c:
    if (ctx->pc == 0x14D03Cu) {
        ctx->pc = 0x14D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D038u;
        // 0x14d03c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D040u;
        goto label_14d040;
    }
    ctx->pc = 0x14D038u;
    {
        const bool branch_taken_0x14d038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D038u;
        // 0x14d03c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d038) {
            ctx->pc = 0x14D070u;
            return;
        }
    }
    ctx->pc = 0x14D040u;
label_14d040:
    // 0x14d040: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_14d044:
    if (ctx->pc == 0x14D044u) {
        ctx->pc = 0x14D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D040u;
        // 0x14d044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D048u;
        goto label_14d048;
    }
    ctx->pc = 0x14D040u;
    {
        const bool branch_taken_0x14d040 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D040u;
        // 0x14d044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d040) {
            ctx->pc = 0x14D070u;
            return;
        }
    }
    ctx->pc = 0x14D048u;
label_14d048:
    // 0x14d048: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
label_14d04c:
    if (ctx->pc == 0x14D04Cu) {
        ctx->pc = 0x14D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D048u;
        // 0x14d04c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D050u;
        goto label_14d050;
    }
    ctx->pc = 0x14D048u;
    {
        const bool branch_taken_0x14d048 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D048u;
        // 0x14d04c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d048) {
            ctx->pc = 0x14D070u;
            return;
        }
    }
    ctx->pc = 0x14D050u;
label_14d050:
    // 0x14d050: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x14d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_14d054:
    // 0x14d054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14d054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d058:
    // 0x14d058: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x14d058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_14d05c:
    // 0x14d05c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14d05cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14d060:
    // 0x14d060: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_14d064:
    // 0x14d064: 0x60f809  jalr        $v1
label_14d068:
    if (ctx->pc == 0x14D068u) {
        ctx->pc = 0x14D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D064u;
        // 0x14d068: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14D06Cu;
        goto label_fallthrough_0x14d064;
    }
    ctx->pc = 0x14D064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14D06Cu);
        ctx->pc = 0x14D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D064u;
        // 0x14d068: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D064u, 0x14D06Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x14d064:
    ctx->pc = 0x14D06Cu;
}
