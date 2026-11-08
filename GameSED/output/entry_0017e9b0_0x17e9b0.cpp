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

// Function: entry_0017e9b0
// Address: 0x17e9b0 - 0x17e9e4
void entry_0017e9b0_0x17e9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e9b0_0x17e9b0");
#endif

    switch (ctx->pc) {
        case 0x17e9d4u: goto label_17e9d4;
        default: break;
    }

    ctx->pc = 0x17e9b0u;

    // 0x17e9b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17e9b4: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x17e9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x17e9b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17e9c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17E9C0u;
    {
        const bool branch_taken_0x17e9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E9C0u;
        // 0x17e9c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9c0) {
            ctx->pc = 0x17E9F0u;
            return;
        }
    }
    ctx->pc = 0x17E9C8u;
    // 0x17e9c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9cc: 0xc067210  jal         func_19C840
    ctx->pc = 0x17E9CCu;
    SET_GPR_U32(ctx, 31, 0x17E9D4u);
    ctx->pc = 0x17E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E9CCu;
    // 0x17e9d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C840u, 0x17E9CCu, 0x17E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E9D4u;
label_17e9d4:
    // 0x17e9d4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E9D4u;
    {
        const bool branch_taken_0x17e9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e9d4) {
            ctx->pc = 0x17E9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E9D4u;
            // 0x17e9d8: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E9F4u;
            return;
        }
    }
    ctx->pc = 0x17E9DCu;
    // 0x17e9dc: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17E9DCu;
    {
        const bool branch_taken_0x17e9dc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e9dc) {
            ctx->pc = 0x17E9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E9DCu;
            // 0x17e9e0: 0xaeb10000  sw          $s1, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E9E4u;
            return;
        }
    }
    ctx->pc = 0x17E9E4u;
}
