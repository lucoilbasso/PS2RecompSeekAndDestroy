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

// Function: caseD_5
// Address: 0x135008 - 0x135034
void caseD_5_0x135008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x135008");
#endif

    switch (ctx->pc) {
        case 0x135010u: goto label_135010;
        case 0x135030u: goto label_135030;
        default: break;
    }

    ctx->pc = 0x135008u;

    // 0x135008: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x135008u;
    SET_GPR_U32(ctx, 31, 0x135010u);
    ctx->pc = 0x13500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135008u;
    // 0x13500c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135008u, 0x135010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135010u;
label_135010:
    // 0x135010: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x135010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x135014: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x135014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135018: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13501c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135020: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x135020u;
    {
        const bool branch_taken_0x135020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x135024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135020u;
        // 0x135024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135020) {
            ctx->pc = 0x135034u;
            return;
        }
    }
    ctx->pc = 0x135028u;
    // 0x135028: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x135028u;
    SET_GPR_U32(ctx, 31, 0x135030u);
    ctx->pc = 0x13502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135028u;
    // 0x13502c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x135028u, 0x135030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135030u;
label_135030:
    // 0x135030: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x135030u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x135034u;
}
