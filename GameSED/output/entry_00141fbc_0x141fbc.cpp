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

// Function: entry_00141fbc
// Address: 0x141fbc - 0x141ff4
void entry_00141fbc_0x141fbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141fbc_0x141fbc");
#endif

    switch (ctx->pc) {
        case 0x141fd4u: goto label_141fd4;
        default: break;
    }

    ctx->pc = 0x141fbcu;

    // 0x141fbc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141fc0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x141fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x141fc4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x141fc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x141fc8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x141fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x141fcc: 0xc061a46  jal         func_186918
    ctx->pc = 0x141FCCu;
    SET_GPR_U32(ctx, 31, 0x141FD4u);
    ctx->pc = 0x141FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141FCCu;
    // 0x141fd0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x141FCCu, 0x141FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141FD4u;
label_141fd4:
    // 0x141fd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x141fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141fd8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x141FD8u;
    {
        const bool branch_taken_0x141fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x141FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141FD8u;
        // 0x141fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141fd8) {
            ctx->pc = 0x141FF4u;
            return;
        }
    }
    ctx->pc = 0x141FE0u;
    // 0x141fe0: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x141fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x141fe4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x141fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x141fe8: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x141fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x141fec: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x141FECu;
    {
        const bool branch_taken_0x141fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141fec) {
            ctx->pc = 0x141FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141FECu;
            // 0x141ff0: 0x8c85001c  lw          $a1, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141FF4u;
            return;
        }
    }
    ctx->pc = 0x141FF4u;
}
