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

// Function: entry_001197a4
// Address: 0x1197a4 - 0x1197dc
void entry_001197a4_0x1197a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001197a4_0x1197a4");
#endif

    switch (ctx->pc) {
        case 0x1197b4u: goto label_1197b4;
        case 0x1197d8u: goto label_1197d8;
        default: break;
    }

    ctx->pc = 0x1197a4u;

    // 0x1197a4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1197a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1197a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1197a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1197ac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1197ACu;
    SET_GPR_U32(ctx, 31, 0x1197B4u);
    ctx->pc = 0x1197B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1197ACu;
    // 0x1197b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1197ACu, 0x1197B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197B4u;
label_1197b4:
    // 0x1197b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1197b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1197b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1197b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1197bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1197bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1197c0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1197c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1197c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1197c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1197c8: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1197C8u;
    {
        const bool branch_taken_0x1197c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1197CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197C8u;
        // 0x1197cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197c8) {
            ctx->pc = 0x1197DCu;
            return;
        }
    }
    ctx->pc = 0x1197D0u;
    // 0x1197d0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1197D0u;
    SET_GPR_U32(ctx, 31, 0x1197D8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1197D0u, 0x1197D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197D8u;
label_1197d8:
    // 0x1197d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1197d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1197dcu;
}
