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

// Function: entry_001420ec
// Address: 0x1420ec - 0x14211c
void entry_001420ec_0x1420ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001420ec_0x1420ec");
#endif

    switch (ctx->pc) {
        case 0x142104u: goto label_142104;
        default: break;
    }

    ctx->pc = 0x1420ecu;

    // 0x1420ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1420ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1420f0: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1420f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x1420f4: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x1420f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x1420f8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1420f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1420fc: 0xc061a46  jal         func_186918
    ctx->pc = 0x1420FCu;
    SET_GPR_U32(ctx, 31, 0x142104u);
    ctx->pc = 0x142100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1420FCu;
    // 0x142100: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1420FCu, 0x142104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142104u;
label_142104:
    // 0x142104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142108: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142108u;
    {
        const bool branch_taken_0x142108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142108u;
        // 0x14210c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142108) {
            ctx->pc = 0x142124u;
            return;
        }
    }
    ctx->pc = 0x142110u;
    // 0x142110: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x142110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x142114: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x142114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x142118: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x142118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    ctx->pc = 0x14211cu;
}
