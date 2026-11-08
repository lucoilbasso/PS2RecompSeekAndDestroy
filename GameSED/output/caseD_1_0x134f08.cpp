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

// Function: caseD_1
// Address: 0x134f08 - 0x134f40
void caseD_1_0x134f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x134f08");
#endif

    switch (ctx->pc) {
        case 0x134f14u: goto label_134f14;
        default: break;
    }

    ctx->pc = 0x134f08u;

    // 0x134f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f0c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x134F0Cu;
    SET_GPR_U32(ctx, 31, 0x134F14u);
    ctx->pc = 0x134F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F0Cu;
    // 0x134f10: 0x26110370  addiu       $s1, $s0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134F0Cu, 0x134F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F14u;
label_134f14:
    // 0x134f14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x134F14u;
    {
        const bool branch_taken_0x134f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F14u;
        // 0x134f18: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f14) {
            ctx->pc = 0x134F40u;
            return;
        }
    }
    ctx->pc = 0x134F1Cu;
    // 0x134f1c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x134f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x134f20: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x134f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x134f24: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x134f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x134f28: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x134f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x134f2c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134f30: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x134f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x134f34: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x134f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x134f38: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x134F38u;
    {
        const bool branch_taken_0x134f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F38u;
        // 0x134f3c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f38) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x134F40u;
}
