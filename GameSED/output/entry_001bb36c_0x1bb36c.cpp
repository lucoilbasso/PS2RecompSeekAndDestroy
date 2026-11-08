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

// Function: entry_001bb36c
// Address: 0x1bb36c - 0x1bb3b8
void entry_001bb36c_0x1bb36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb36c_0x1bb36c");
#endif

    switch (ctx->pc) {
        case 0x1bb39cu: goto label_1bb39c;
        case 0x1bb3b0u: goto label_1bb3b0;
        default: break;
    }

    ctx->pc = 0x1bb36cu;

    // 0x1bb36c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bb36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bb370: 0x2450d280  addiu       $s0, $v0, -0x2D80
    ctx->pc = 0x1bb370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955648));
    // 0x1bb374: 0x2484dac8  addiu       $a0, $a0, -0x2538
    ctx->pc = 0x1bb374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957768));
    // 0x1bb378: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bb378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1bb37c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1bb37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bb380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb388: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb388u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb38c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1bb38cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb390: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1bb390u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb394: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BB394u;
    SET_GPR_U32(ctx, 31, 0x1BB39Cu);
    ctx->pc = 0x1BB398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB394u;
    // 0x1bb398: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BB394u, 0x1BB39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB39Cu;
label_1bb39c:
    // 0x1bb39c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB39Cu;
    {
        const bool branch_taken_0x1bb39c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB39Cu;
        // 0x1bb3a0: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb39c) {
            ctx->pc = 0x1BB3B8u;
            return;
        }
    }
    ctx->pc = 0x1BB3A4u;
    // 0x1bb3a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bb3a8: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BB3A8u;
    SET_GPR_U32(ctx, 31, 0x1BB3B0u);
    ctx->pc = 0x1BB3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3A8u;
    // 0x1bb3ac: 0x8c44c0ac  lw          $a0, -0x3F54($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BB3A8u, 0x1BB3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3B0u;
label_1bb3b0:
    // 0x1bb3b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BB3B0u;
    {
        const bool branch_taken_0x1bb3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3B0u;
        // 0x1bb3b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3b0) {
            ctx->pc = 0x1BB3F0u;
            return;
        }
    }
    ctx->pc = 0x1BB3B8u;
}
