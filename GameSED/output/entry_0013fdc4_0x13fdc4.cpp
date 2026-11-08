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

// Function: entry_0013fdc4
// Address: 0x13fdc4 - 0x13fe00
void entry_0013fdc4_0x13fdc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fdc4_0x13fdc4");
#endif

    switch (ctx->pc) {
        case 0x13fdd8u: goto label_13fdd8;
        default: break;
    }

    ctx->pc = 0x13fdc4u;

    // 0x13fdc4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13fdc8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x13fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x13fdcc: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x13fdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x13fdd0: 0xc061a46  jal         func_186918
    ctx->pc = 0x13FDD0u;
    SET_GPR_U32(ctx, 31, 0x13FDD8u);
    ctx->pc = 0x13FDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FDD0u;
    // 0x13fdd4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x13FDD0u, 0x13FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FDD8u;
label_13fdd8:
    // 0x13fdd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fddc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FDDCu;
    {
        const bool branch_taken_0x13fddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDDCu;
        // 0x13fde0: 0x3c020014  lui         $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fddc) {
            ctx->pc = 0x13FE00u;
            return;
        }
    }
    ctx->pc = 0x13FDE4u;
    // 0x13fde4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x13fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13fde8: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x13fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x13fdec: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FDECu;
    {
        const bool branch_taken_0x13fdec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fdec) {
            ctx->pc = 0x13FDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FDECu;
            // 0x13fdf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FE04u;
            return;
        }
    }
    ctx->pc = 0x13FDF4u;
    // 0x13fdf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FDF4u;
    {
        const bool branch_taken_0x13fdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FDF4u;
        // 0x13fdf8: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdf4) {
            ctx->pc = 0x13FE04u;
            return;
        }
    }
    ctx->pc = 0x13FDFCu;
    // 0x13fdfc: 0x0  nop
    ctx->pc = 0x13fdfcu;
    // NOP
    ctx->pc = 0x13fe00u;
}
