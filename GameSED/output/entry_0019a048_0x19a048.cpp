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

// Function: entry_0019a048
// Address: 0x19a048 - 0x19a078
void entry_0019a048_0x19a048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a048_0x19a048");
#endif

    switch (ctx->pc) {
        case 0x19a074u: goto label_19a074;
        default: break;
    }

    ctx->pc = 0x19a048u;

    // 0x19a048: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19a048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a04c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19a050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a058: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x19a058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x19a05c: 0x50900015  beql        $a0, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19A05Cu;
    {
        const bool branch_taken_0x19a05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x19a05c) {
            ctx->pc = 0x19A060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A05Cu;
            // 0x19a060: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A0B4u;
            return;
        }
    }
    ctx->pc = 0x19A064u;
    // 0x19a064: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A064u;
    {
        const bool branch_taken_0x19a064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a064) {
            ctx->pc = 0x19A078u;
            return;
        }
    }
    ctx->pc = 0x19A06Cu;
    // 0x19a06c: 0xc066844  jal         func_19A110
    ctx->pc = 0x19A06Cu;
    SET_GPR_U32(ctx, 31, 0x19A074u);
    ctx->pc = 0x19A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A06Cu;
    // 0x19a070: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A110u, 0x19A06Cu, 0x19A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A074u;
label_19a074:
    // 0x19a074: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x19a074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    ctx->pc = 0x19a078u;
}
