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

// Function: entry_001b80d8
// Address: 0x1b80d8 - 0x1b8110
void entry_001b80d8_0x1b80d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b80d8_0x1b80d8");
#endif

    switch (ctx->pc) {
        case 0x1b8108u: goto label_1b8108;
        default: break;
    }

    ctx->pc = 0x1b80d8u;

    // 0x1b80d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b80dc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1b80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b80e0: 0x2442bcf8  addiu       $v0, $v0, -0x4308
    ctx->pc = 0x1b80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950136));
    // 0x1b80e4: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x1b80e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b80e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b80e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b80ec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1b80ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b80f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B80F0u;
    {
        const bool branch_taken_0x1b80f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80F0u;
        // 0x1b80f4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80f0) {
            ctx->pc = 0x1B8110u;
            return;
        }
    }
    ctx->pc = 0x1B80F8u;
    // 0x1b80f8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b80f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b80fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b80fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8100: 0xc06bc44  jal         func_1AF110
    ctx->pc = 0x1B8100u;
    SET_GPR_U32(ctx, 31, 0x1B8108u);
    ctx->pc = 0x1B8104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8100u;
    // 0x1b8104: 0x24a587c0  addiu       $a1, $a1, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF110u, 0x1B8100u, 0x1B8108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8108u;
label_1b8108:
    // 0x1b8108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8108u;
    {
        const bool branch_taken_0x1b8108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8108u;
        // 0x1b810c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8108) {
            ctx->pc = 0x1B8124u;
            return;
        }
    }
    ctx->pc = 0x1B8110u;
}
