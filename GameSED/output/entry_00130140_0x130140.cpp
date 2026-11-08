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

// Function: entry_00130140
// Address: 0x130140 - 0x130170
void entry_00130140_0x130140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130140_0x130140");
#endif

    switch (ctx->pc) {
        case 0x130158u: goto label_130158;
        default: break;
    }

    ctx->pc = 0x130140u;

    // 0x130140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130148: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x130148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13014c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x130150: 0xc04844a  jal         func_121128
    ctx->pc = 0x130150u;
    SET_GPR_U32(ctx, 31, 0x130158u);
    ctx->pc = 0x130154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130150u;
    // 0x130154: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x130150u, 0x130158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130158u;
label_130158:
    // 0x130158: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13015c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13015Cu;
    {
        const bool branch_taken_0x13015c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13015Cu;
        // 0x130160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13015c) {
            ctx->pc = 0x130170u;
            return;
        }
    }
    ctx->pc = 0x130164u;
    // 0x130164: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x130164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x130168: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x130168u;
    {
        const bool branch_taken_0x130168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130168u;
        // 0x13016c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130168) {
            ctx->pc = 0x1302DCu;
            return;
        }
    }
    ctx->pc = 0x130170u;
}
