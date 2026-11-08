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

// Function: entry_0016bbe0
// Address: 0x16bbe0 - 0x16bc10
void entry_0016bbe0_0x16bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bbe0_0x16bbe0");
#endif

    switch (ctx->pc) {
        case 0x16bbe8u: goto label_16bbe8;
        default: break;
    }

    ctx->pc = 0x16bbe0u;

label_16bbe0:
    // 0x16bbe0: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x16BBE0u;
    SET_GPR_U32(ctx, 31, 0x16BBE8u);
    ctx->pc = 0x16BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBE0u;
    // 0x16bbe4: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x16BBE0u, 0x16BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBE8u;
label_16bbe8:
    // 0x16bbe8: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x16bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x16bbec: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x16BBECu;
    {
        const bool branch_taken_0x16bbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBECu;
        // 0x16bbf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbec) {
            ctx->pc = 0x16BBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bbe0;
        }
    }
    ctx->pc = 0x16BBF4u;
    // 0x16bbf4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x16bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x16bbf8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16bbf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16bbfc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BBFCu;
    {
        const bool branch_taken_0x16bbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBFCu;
        // 0x16bc00: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bbfc) {
            ctx->pc = 0x16BC10u;
            return;
        }
    }
    ctx->pc = 0x16BC04u;
    // 0x16bc04: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x16bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x16bc08: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x16BC08u;
    SET_GPR_U32(ctx, 31, 0x16BC10u);
    ctx->pc = 0x16BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC08u;
    // 0x16bc0c: 0xae300090  sw          $s0, 0x90($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x16BC08u, 0x16BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC10u;
}
