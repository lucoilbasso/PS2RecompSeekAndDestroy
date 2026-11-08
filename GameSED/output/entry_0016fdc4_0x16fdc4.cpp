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

// Function: entry_0016fdc4
// Address: 0x16fdc4 - 0x16fdf0
void entry_0016fdc4_0x16fdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fdc4_0x16fdc4");
#endif

    switch (ctx->pc) {
        case 0x16fdd4u: goto label_16fdd4;
        case 0x16fde0u: goto label_16fde0;
        default: break;
    }

    ctx->pc = 0x16fdc4u;

    // 0x16fdc4: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x16FDC4u;
    {
        const bool branch_taken_0x16fdc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FDC4u;
        // 0x16fdc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdc4) {
            ctx->pc = 0x16FDFCu;
            return;
        }
    }
    ctx->pc = 0x16FDCCu;
    // 0x16fdcc: 0xc0671e8  jal         func_19C7A0
    ctx->pc = 0x16FDCCu;
    SET_GPR_U32(ctx, 31, 0x16FDD4u);
    ctx->pc = 0x19C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7A0u, 0x16FDCCu, 0x16FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDD4u;
label_16fdd4:
    // 0x16fdd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdd8: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x16FDD8u;
    SET_GPR_U32(ctx, 31, 0x16FDE0u);
    ctx->pc = 0x16FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDD8u;
    // 0x16fddc: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x16FDD8u, 0x16FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDE0u;
label_16fde0:
    // 0x16fde0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x16fde0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x16fde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16fde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fde8: 0xc0671f6  jal         func_19C7D8
    ctx->pc = 0x16FDE8u;
    SET_GPR_U32(ctx, 31, 0x16FDF0u);
    ctx->pc = 0x16FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FDE8u;
    // 0x16fdec: 0x24a5d438  addiu       $a1, $a1, -0x2BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C7D8u, 0x16FDE8u, 0x16FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDF0u;
}
