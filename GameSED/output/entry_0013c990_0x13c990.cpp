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

// Function: entry_0013c990
// Address: 0x13c990 - 0x13c9c0
void entry_0013c990_0x13c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c990_0x13c990");
#endif

    switch (ctx->pc) {
        case 0x13c9b0u: goto label_13c9b0;
        default: break;
    }

    ctx->pc = 0x13c990u;

    // 0x13c990: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x13C990u;
    {
        const bool branch_taken_0x13c990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C990u;
        // 0x13c994: 0x26910170  addiu       $s1, $s4, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c990) {
            ctx->pc = 0x13CB10u;
            return;
        }
    }
    ctx->pc = 0x13C998u;
    // 0x13c998: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13c998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13c99c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x13C99Cu;
    {
        const bool branch_taken_0x13c99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C99Cu;
        // 0x13c9a0: 0x8e530150  lw          $s3, 0x150($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c99c) {
            ctx->pc = 0x13CA10u;
            return;
        }
    }
    ctx->pc = 0x13C9A4u;
    // 0x13c9a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13c9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9a8: 0xc05dd18  jal         func_177460
    ctx->pc = 0x13C9A8u;
    SET_GPR_U32(ctx, 31, 0x13C9B0u);
    ctx->pc = 0x13C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C9A8u;
    // 0x13c9ac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13C9A8u, 0x13C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9B0u;
label_13c9b0:
    // 0x13c9b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13c9b4: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13C9B4u;
    {
        const bool branch_taken_0x13c9b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13c9b4) {
            ctx->pc = 0x13CA08u;
            return;
        }
    }
    ctx->pc = 0x13C9BCu;
    // 0x13c9bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->pc = 0x13c9c0u;
}
