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

// Function: entry_00195dfc
// Address: 0x195dfc - 0x195e38
void entry_00195dfc_0x195dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195dfc_0x195dfc");
#endif

    switch (ctx->pc) {
        case 0x195e0cu: goto label_195e0c;
        default: break;
    }

    ctx->pc = 0x195dfcu;

    // 0x195dfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e04: 0xc066426  jal         func_199098
    ctx->pc = 0x195E04u;
    SET_GPR_U32(ctx, 31, 0x195E0Cu);
    ctx->pc = 0x195E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195E04u;
    // 0x195e08: 0xafa60068  sw          $a2, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199098u, 0x195E04u, 0x195E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195E0Cu;
label_195e0c:
    // 0x195e0c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x195e0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x195e10: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x195e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x195e14: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x195e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x195e18: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x195e18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195e1c: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x195e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x195e20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x195E20u;
    {
        const bool branch_taken_0x195e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x195E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E20u;
        // 0x195e24: 0x241e004d  addiu       $fp, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195e20) {
            ctx->pc = 0x195E38u;
            return;
        }
    }
    ctx->pc = 0x195E28u;
    // 0x195e28: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x195e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x195e2c: 0x241e006d  addiu       $fp, $zero, 0x6D
    ctx->pc = 0x195e2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x195e30: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x195e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    // 0x195e34: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x195e34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x195e38u;
}
