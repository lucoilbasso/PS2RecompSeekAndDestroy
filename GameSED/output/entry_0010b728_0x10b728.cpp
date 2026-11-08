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

// Function: entry_0010b728
// Address: 0x10b728 - 0x10b75c
void entry_0010b728_0x10b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b728_0x10b728");
#endif

    switch (ctx->pc) {
        case 0x10b73cu: goto label_10b73c;
        default: break;
    }

    ctx->pc = 0x10b728u;

    // 0x10b728: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b72c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10b72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10b730: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10b734: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B734u;
    SET_GPR_U32(ctx, 31, 0x10B73Cu);
    ctx->pc = 0x10B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B734u;
    // 0x10b738: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B734u, 0x10B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B73Cu;
label_10b73c:
    // 0x10b73c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b740: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10b740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b744: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B744u;
    {
        const bool branch_taken_0x10b744 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B744u;
        // 0x10b748: 0x24030166  addiu       $v1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b744) {
            ctx->pc = 0x10B75Cu;
            return;
        }
    }
    ctx->pc = 0x10B74Cu;
    // 0x10b74c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x10b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10b750: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b754: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B754u;
    {
        const bool branch_taken_0x10b754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B754u;
        // 0x10b758: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b754) {
            ctx->pc = 0x10B760u;
            return;
        }
    }
    ctx->pc = 0x10B75Cu;
}
