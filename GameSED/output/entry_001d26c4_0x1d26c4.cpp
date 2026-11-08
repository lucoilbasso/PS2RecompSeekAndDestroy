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

// Function: entry_001d26c4
// Address: 0x1d26c4 - 0x1d2710
void entry_001d26c4_0x1d26c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d26c4_0x1d26c4");
#endif

    switch (ctx->pc) {
        case 0x1d26fcu: goto label_1d26fc;
        default: break;
    }

    ctx->pc = 0x1d26c4u;

    // 0x1d26c4: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d26c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d26c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d26cc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d26ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d26d0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d26d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d26d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d26dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d26e0: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d26e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d26e4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d26e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d26e8: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D26E8u;
    {
        const bool branch_taken_0x1d26e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26E8u;
        // 0x1d26ec: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26e8) {
            ctx->pc = 0x1D2758u;
            return;
        }
    }
    ctx->pc = 0x1D26F0u;
    // 0x1d26f0: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d26f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d26f4: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D26F4u;
    SET_GPR_U32(ctx, 31, 0x1D26FCu);
    ctx->pc = 0x1D26F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26F4u;
    // 0x1d26f8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D26F4u, 0x1D26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D26FCu;
label_1d26fc:
    // 0x1d26fc: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1D26FCu;
    {
        const bool branch_taken_0x1d26fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26FCu;
        // 0x1d2700: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26fc) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D2704u;
    // 0x1d2704: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d2704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2708: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D2708u;
    {
        const bool branch_taken_0x1d2708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2708u;
        // 0x1d270c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2708) {
            ctx->pc = 0x1D2758u;
            return;
        }
    }
    ctx->pc = 0x1D2710u;
}
