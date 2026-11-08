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

// Function: caseD_1d
// Address: 0x1090a0 - 0x1090dc
void caseD_1d_0x1090a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1d_0x1090a0");
#endif

    switch (ctx->pc) {
        case 0x1090a8u: goto label_1090a8;
        case 0x1090b4u: goto label_1090b4;
        case 0x1090d8u: goto label_1090d8;
        default: break;
    }

    ctx->pc = 0x1090a0u;

    // 0x1090a0: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1090A0u;
    SET_GPR_U32(ctx, 31, 0x1090A8u);
    ctx->pc = 0x1090A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090A0u;
    // 0x1090a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1090A0u, 0x1090A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090A8u;
label_1090a8:
    // 0x1090a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1090a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090ac: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x1090ACu;
    SET_GPR_U32(ctx, 31, 0x1090B4u);
    ctx->pc = 0x1090B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090ACu;
    // 0x1090b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x1090ACu, 0x1090B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090B4u;
label_1090b4:
    // 0x1090b4: 0xc7808030  lwc1        $f0, -0x7FD0($gp)
    ctx->pc = 0x1090b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1090b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1090b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090bc: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x1090bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1090c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1090c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1090c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1090c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1090c8: 0x50640004  beql        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1090C8u;
    {
        const bool branch_taken_0x1090c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1090c8) {
            ctx->pc = 0x1090CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1090C8u;
            // 0x1090cc: 0x96820008  lhu         $v0, 0x8($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1090DCu;
            return;
        }
    }
    ctx->pc = 0x1090D0u;
    // 0x1090d0: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x1090D0u;
    SET_GPR_U32(ctx, 31, 0x1090D8u);
    ctx->pc = 0x1090D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090D0u;
    // 0x1090d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x1090D0u, 0x1090D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090D8u;
label_1090d8:
    // 0x1090d8: 0x96820008  lhu         $v0, 0x8($s4)
    ctx->pc = 0x1090d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->pc = 0x1090dcu;
}
