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

// Function: entry_00141010
// Address: 0x141010 - 0x141048
void entry_00141010_0x141010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141010_0x141010");
#endif

    switch (ctx->pc) {
        case 0x141044u: goto label_141044;
        default: break;
    }

    ctx->pc = 0x141010u;

    // 0x141010: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x141010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x141014: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x141014u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141018: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x141018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14101c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x14101cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x141020: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x141020u;
    {
        const bool branch_taken_0x141020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x141024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141020u;
        // 0x141024: 0x263200d0  addiu       $s2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141020) {
            ctx->pc = 0x14105Cu;
            return;
        }
    }
    ctx->pc = 0x141028u;
    // 0x141028: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x141028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14102c: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x14102cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x141030: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x141030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x141034: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x141034u;
    {
        const bool branch_taken_0x141034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141034) {
            ctx->pc = 0x141038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141034u;
            // 0x141038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141048u;
            return;
        }
    }
    ctx->pc = 0x14103Cu;
    // 0x14103c: 0xc061920  jal         func_186480
    ctx->pc = 0x14103Cu;
    SET_GPR_U32(ctx, 31, 0x141044u);
    ctx->pc = 0x141040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14103Cu;
    // 0x141040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x14103Cu, 0x141044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141044u;
label_141044:
    // 0x141044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x141044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141048u;
}
