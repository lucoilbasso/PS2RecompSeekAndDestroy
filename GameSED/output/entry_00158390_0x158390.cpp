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

// Function: entry_00158390
// Address: 0x158390 - 0x1583f0
void entry_00158390_0x158390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158390_0x158390");
#endif

    switch (ctx->pc) {
        case 0x1583b0u: goto label_1583b0;
        case 0x1583ccu: goto label_1583cc;
        case 0x1583e8u: goto label_1583e8;
        default: break;
    }

    ctx->pc = 0x158390u;

    // 0x158390: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x158390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x158394: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x158394u;
    {
        const bool branch_taken_0x158394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158394u;
        // 0x158398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158394) {
            ctx->pc = 0x1583F0u;
            return;
        }
    }
    ctx->pc = 0x15839Cu;
    // 0x15839c: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x15839cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1583a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1583a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1583a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583a8: 0xc056112  jal         func_158448
    ctx->pc = 0x1583A8u;
    SET_GPR_U32(ctx, 31, 0x1583B0u);
    ctx->pc = 0x1583ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583A8u;
    // 0x1583ac: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158448u, 0x1583A8u, 0x1583B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583B0u;
label_1583b0:
    // 0x1583b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1583b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1583b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1583b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583bc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1583BCu;
    {
        const bool branch_taken_0x1583bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1583C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583BCu;
        // 0x1583c0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583bc) {
            ctx->pc = 0x15840Cu;
            return;
        }
    }
    ctx->pc = 0x1583C4u;
    // 0x1583c4: 0xc056112  jal         func_158448
    ctx->pc = 0x1583C4u;
    SET_GPR_U32(ctx, 31, 0x1583CCu);
    ctx->pc = 0x1583C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583C4u;
    // 0x1583c8: 0x8e250160  lw          $a1, 0x160($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158448u, 0x1583C4u, 0x1583CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583CCu;
label_1583cc:
    // 0x1583cc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1583CCu;
    {
        const bool branch_taken_0x1583cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1583D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583CCu;
        // 0x1583d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583cc) {
            ctx->pc = 0x15840Cu;
            return;
        }
    }
    ctx->pc = 0x1583D4u;
    // 0x1583d4: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x1583d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1583d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1583d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1583dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583e0: 0xc056192  jal         func_158648
    ctx->pc = 0x1583E0u;
    SET_GPR_U32(ctx, 31, 0x1583E8u);
    ctx->pc = 0x1583E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583E0u;
    // 0x1583e4: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158648u, 0x1583E0u, 0x1583E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583E8u;
label_1583e8:
    // 0x1583e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1583E8u;
    {
        const bool branch_taken_0x1583e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1583e8) {
            ctx->pc = 0x158404u;
            return;
        }
    }
    ctx->pc = 0x1583F0u;
}
