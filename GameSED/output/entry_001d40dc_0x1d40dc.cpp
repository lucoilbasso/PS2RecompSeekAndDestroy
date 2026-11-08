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

// Function: entry_001d40dc
// Address: 0x1d40dc - 0x1d4118
void entry_001d40dc_0x1d40dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d40dc_0x1d40dc");
#endif

    switch (ctx->pc) {
        case 0x1d40e8u: goto label_1d40e8;
        case 0x1d40f8u: goto label_1d40f8;
        default: break;
    }

    ctx->pc = 0x1d40dcu;

    // 0x1d40dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d40dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d40e0: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D40E0u;
    SET_GPR_U32(ctx, 31, 0x1D40E8u);
    ctx->pc = 0x1D40E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40E0u;
    // 0x1d40e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D40E0u, 0x1D40E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40E8u;
label_1d40e8:
    // 0x1d40e8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d40e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d40ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d40ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40f0: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D40F0u;
    SET_GPR_U32(ctx, 31, 0x1D40F8u);
    ctx->pc = 0x1D40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40F0u;
    // 0x1d40f4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D40F0u, 0x1D40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40F8u;
label_1d40f8:
    // 0x1d40f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d40f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d40fc: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D40FCu;
    {
        const bool branch_taken_0x1d40fc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1d40fc) {
            ctx->pc = 0x1D4100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D40FCu;
            // 0x1d4100: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D411Cu;
            return;
        }
    }
    ctx->pc = 0x1D4104u;
    // 0x1d4104: 0x1600001a  bnez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D4104u;
    {
        const bool branch_taken_0x1d4104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4104u;
        // 0x1d4108: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4104) {
            ctx->pc = 0x1D4170u;
            return;
        }
    }
    ctx->pc = 0x1D410Cu;
    // 0x1d410c: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x1d410cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x1d4110: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D4110u;
    {
        const bool branch_taken_0x1d4110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4110) {
            ctx->pc = 0x1D4114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4110u;
            // 0x1d4114: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4174u;
            return;
        }
    }
    ctx->pc = 0x1D4118u;
}
