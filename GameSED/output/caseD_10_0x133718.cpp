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

// Function: caseD_10
// Address: 0x133718 - 0x133750
void caseD_10_0x133718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x133718");
#endif

    switch (ctx->pc) {
        case 0x133720u: goto label_133720;
        case 0x13372cu: goto label_13372c;
        case 0x13374cu: goto label_13374c;
        default: break;
    }

    ctx->pc = 0x133718u;

    // 0x133718: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133718u;
    SET_GPR_U32(ctx, 31, 0x133720u);
    ctx->pc = 0x13371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133718u;
    // 0x13371c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133718u, 0x133720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133720u;
label_133720:
    // 0x133720: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x133720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133724: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133724u;
    SET_GPR_U32(ctx, 31, 0x13372Cu);
    ctx->pc = 0x133728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133724u;
    // 0x133728: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133724u, 0x13372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13372Cu;
label_13372c:
    // 0x13372c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133730: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x133730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x133734: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x133734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x133738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13373c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13373Cu;
    {
        const bool branch_taken_0x13373c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x133740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13373Cu;
        // 0x133740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13373c) {
            ctx->pc = 0x133750u;
            return;
        }
    }
    ctx->pc = 0x133744u;
    // 0x133744: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x133744u;
    SET_GPR_U32(ctx, 31, 0x13374Cu);
    ctx->pc = 0x133748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133744u;
    // 0x133748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x133744u, 0x13374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13374Cu;
label_13374c:
    // 0x13374c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13374cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133750u;
}
