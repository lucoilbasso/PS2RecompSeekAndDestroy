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

// Function: entry_00114ddc
// Address: 0x114ddc - 0x114e14
void entry_00114ddc_0x114ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114ddc_0x114ddc");
#endif

    switch (ctx->pc) {
        case 0x114df8u: goto label_114df8;
        case 0x114e10u: goto label_114e10;
        default: break;
    }

    ctx->pc = 0x114ddcu;

    // 0x114ddc: 0x1e00000d  bgtz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x114DDCu;
    {
        const bool branch_taken_0x114ddc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x114DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DDCu;
        // 0x114de0: 0x2a02000c  slti        $v0, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ddc) {
            ctx->pc = 0x114E14u;
            return;
        }
    }
    ctx->pc = 0x114DE4u;
    // 0x114de4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x114de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x114de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114dec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x114decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114df0: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x114DF0u;
    SET_GPR_U32(ctx, 31, 0x114DF8u);
    ctx->pc = 0x114DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114DF0u;
    // 0x114df4: 0x24844348  addiu       $a0, $a0, 0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x114DF0u, 0x114DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114DF8u;
label_114df8:
    // 0x114df8: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x114df8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x114dfc: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x114dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x114e00: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x114e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x114e04: 0x24a54370  addiu       $a1, $a1, 0x4370
    ctx->pc = 0x114e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17264));
    // 0x114e08: 0xc068186  jal         func_1A0618
    ctx->pc = 0x114E08u;
    SET_GPR_U32(ctx, 31, 0x114E10u);
    ctx->pc = 0x114E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114E08u;
    // 0x114e0c: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x114E08u, 0x114E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114E10u;
label_114e10:
    // 0x114e10: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x114e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    ctx->pc = 0x114e14u;
}
