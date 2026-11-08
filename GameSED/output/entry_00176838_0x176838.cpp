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

// Function: entry_00176838
// Address: 0x176838 - 0x176878
void entry_00176838_0x176838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176838_0x176838");
#endif

    switch (ctx->pc) {
        case 0x176840u: goto label_176840;
        default: break;
    }

    ctx->pc = 0x176838u;

label_176838:
    // 0x176838: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x176838u;
    SET_GPR_U32(ctx, 31, 0x176840u);
    ctx->pc = 0x17683Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176838u;
    // 0x17683c: 0x8f848c6c  lw          $a0, -0x7394($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x176838u, 0x176840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176840u;
label_176840:
    // 0x176840: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x176840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
    // 0x176844: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x176844u;
    {
        const bool branch_taken_0x176844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x176848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176844u;
        // 0x176848: 0x8f868c54  lw          $a2, -0x73AC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176844) {
            ctx->pc = 0x176838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176838;
        }
    }
    ctx->pc = 0x17684Cu;
    // 0x17684c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17684cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176850: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x176850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x176854: 0xaf828c70  sw          $v0, -0x7390($gp)
    ctx->pc = 0x176854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 2));
    // 0x176858: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x176858u;
    {
        const bool branch_taken_0x176858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x17685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176858u;
        // 0x17685c: 0xacd10020  sw          $s1, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176858) {
            ctx->pc = 0x176878u;
            return;
        }
    }
    ctx->pc = 0x176860u;
    // 0x176860: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x176860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x176864: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x176864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x176868: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x176868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x17686c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x17686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x176870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176870u;
    {
        const bool branch_taken_0x176870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176870u;
        // 0x176874: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176870) {
            ctx->pc = 0x176884u;
            return;
        }
    }
    ctx->pc = 0x176878u;
}
