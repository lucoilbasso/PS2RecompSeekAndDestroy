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

// Function: entry_0017ca5c
// Address: 0x17ca5c - 0x17ca94
void entry_0017ca5c_0x17ca5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ca5c_0x17ca5c");
#endif

    switch (ctx->pc) {
        case 0x17ca90u: goto label_17ca90;
        default: break;
    }

    ctx->pc = 0x17ca5cu;

    // 0x17ca5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ca60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17ca64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ca64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17ca6c: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x17ca6cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x17ca70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x17ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x17ca74: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x17ca74u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
    // 0x17ca78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17ca7c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x17ca7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ca80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CA80u;
    {
        const bool branch_taken_0x17ca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA80u;
        // 0x17ca84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca80) {
            ctx->pc = 0x17CA94u;
            return;
        }
    }
    ctx->pc = 0x17CA88u;
    // 0x17ca88: 0xc05f2c8  jal         func_17CB20
    ctx->pc = 0x17CA88u;
    SET_GPR_U32(ctx, 31, 0x17CA90u);
    ctx->pc = 0x17CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CB20u, 0x17CA88u, 0x17CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CA90u;
label_17ca90:
    // 0x17ca90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x17ca90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ca94u;
}
