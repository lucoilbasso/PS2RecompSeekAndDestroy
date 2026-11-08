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

// Function: entry_0014e854
// Address: 0x14e854 - 0x14e8a0
void entry_0014e854_0x14e854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e854_0x14e854");
#endif

    switch (ctx->pc) {
        case 0x14e894u: goto label_14e894;
        default: break;
    }

    ctx->pc = 0x14e854u;

    // 0x14e854: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x14E854u;
    {
        const bool branch_taken_0x14e854 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E854u;
        // 0x14e858: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e854) {
            ctx->pc = 0x14E8A0u;
            return;
        }
    }
    ctx->pc = 0x14E85Cu;
    // 0x14e85c: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x14e85cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x14e860: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x14e860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14e864: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x14e864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x14e868: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x14e868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x14e86c: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x14e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x14e870: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x14e870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x14e874: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14e874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e878: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x14e878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
    // 0x14e87c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14e87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e880: 0xae800034  sw          $zero, 0x34($s4)
    ctx->pc = 0x14e880u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 0));
    // 0x14e884: 0xae800038  sw          $zero, 0x38($s4)
    ctx->pc = 0x14e884u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 0));
    // 0x14e888: 0xae80003c  sw          $zero, 0x3C($s4)
    ctx->pc = 0x14e888u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 0));
    // 0x14e88c: 0xc056d0c  jal         func_15B430
    ctx->pc = 0x14E88Cu;
    SET_GPR_U32(ctx, 31, 0x14E894u);
    ctx->pc = 0x14E890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E88Cu;
    // 0x14e890: 0x8e2401b0  lw          $a0, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B430u, 0x14E88Cu, 0x14E894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E894u;
label_14e894:
    // 0x14e894: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14E894u;
    {
        const bool branch_taken_0x14e894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e894) {
            ctx->pc = 0x14E8C0u;
            return;
        }
    }
    ctx->pc = 0x14E89Cu;
    // 0x14e89c: 0x0  nop
    ctx->pc = 0x14e89cu;
    // NOP
    ctx->pc = 0x14e8a0u;
}
