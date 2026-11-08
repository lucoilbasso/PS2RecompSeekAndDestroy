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

// Function: entry_0017e8d0
// Address: 0x17e8d0 - 0x17e904
void entry_0017e8d0_0x17e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e8d0_0x17e8d0");
#endif

    switch (ctx->pc) {
        case 0x17e8f4u: goto label_17e8f4;
        default: break;
    }

    ctx->pc = 0x17e8d0u;

    // 0x17e8d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x17e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17e8d4: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x17e8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x17e8d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17e8e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x17E8E0u;
    {
        const bool branch_taken_0x17e8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E8E0u;
        // 0x17e8e4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e8e0) {
            ctx->pc = 0x17E910u;
            return;
        }
    }
    ctx->pc = 0x17E8E8u;
    // 0x17e8e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e8ec: 0xc067210  jal         func_19C840
    ctx->pc = 0x17E8ECu;
    SET_GPR_U32(ctx, 31, 0x17E8F4u);
    ctx->pc = 0x17E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E8ECu;
    // 0x17e8f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C840u, 0x17E8ECu, 0x17E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E8F4u;
label_17e8f4:
    // 0x17e8f4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E8F4u;
    {
        const bool branch_taken_0x17e8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e8f4) {
            ctx->pc = 0x17E8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E8F4u;
            // 0x17e8f8: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E914u;
            return;
        }
    }
    ctx->pc = 0x17E8FCu;
    // 0x17e8fc: 0x56a00001  bnel        $s5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17E8FCu;
    {
        const bool branch_taken_0x17e8fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e8fc) {
            ctx->pc = 0x17E900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E8FCu;
            // 0x17e900: 0xaeb10000  sw          $s1, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E904u;
            return;
        }
    }
    ctx->pc = 0x17E904u;
}
