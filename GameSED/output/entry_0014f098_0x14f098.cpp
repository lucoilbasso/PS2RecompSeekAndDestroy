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

// Function: entry_0014f098
// Address: 0x14f098 - 0x14f0b8
void entry_0014f098_0x14f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f098_0x14f098");
#endif

    switch (ctx->pc) {
        case 0x14f0b0u: goto label_14f0b0;
        default: break;
    }

    ctx->pc = 0x14f098u;

    // 0x14f098: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x14f09c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F09Cu;
    {
        const bool branch_taken_0x14f09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f09c) {
            ctx->pc = 0x14F0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F09Cu;
            // 0x14f0a0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F0B8u;
            return;
        }
    }
    ctx->pc = 0x14F0A4u;
    // 0x14f0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14f0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f0a8: 0xc053e6e  jal         func_14F9B8
    ctx->pc = 0x14F0A8u;
    SET_GPR_U32(ctx, 31, 0x14F0B0u);
    ctx->pc = 0x14F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F0A8u;
    // 0x14f0ac: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9B8u, 0x14F0A8u, 0x14F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F0B0u;
label_14f0b0:
    // 0x14f0b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14F0B0u;
    {
        const bool branch_taken_0x14f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F0B0u;
        // 0x14f0b4: 0x8e22017c  lw          $v0, 0x17C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0b0) {
            ctx->pc = 0x14F124u;
            return;
        }
    }
    ctx->pc = 0x14F0B8u;
}
