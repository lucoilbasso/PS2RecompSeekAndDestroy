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

// Function: caseD_4
// Address: 0x1334a0 - 0x1334c8
void caseD_4_0x1334a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1334a0");
#endif

    switch (ctx->pc) {
        case 0x1334b8u: goto label_1334b8;
        default: break;
    }

    ctx->pc = 0x1334a0u;

    // 0x1334a0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1334a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1334a4: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x1334a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x1334a8: 0x546202ff  bnel        $v1, $v0, . + 4 + (0x2FF << 2)
    ctx->pc = 0x1334A8u;
    {
        const bool branch_taken_0x1334a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1334a8) {
            ctx->pc = 0x1334ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1334A8u;
            // 0x1334ac: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1340A8u;
            return;
        }
    }
    ctx->pc = 0x1334B0u;
    // 0x1334b0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1334B0u;
    SET_GPR_U32(ctx, 31, 0x1334B8u);
    ctx->pc = 0x1334B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1334B0u;
    // 0x1334b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1334B0u, 0x1334B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1334B8u;
label_1334b8:
    // 0x1334b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1334b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1334bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1334bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1334c0: 0x100002f8  b           . + 4 + (0x2F8 << 2)
    ctx->pc = 0x1334C0u;
    {
        const bool branch_taken_0x1334c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334C0u;
        // 0x1334c4: 0x8c5006a8  lw          $s0, 0x6A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334c0) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x1334C8u;
}
