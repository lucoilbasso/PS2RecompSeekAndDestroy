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

// Function: entry_001bb2d4
// Address: 0x1bb2d4 - 0x1bb320
void entry_001bb2d4_0x1bb2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb2d4_0x1bb2d4");
#endif

    switch (ctx->pc) {
        case 0x1bb304u: goto label_1bb304;
        case 0x1bb318u: goto label_1bb318;
        default: break;
    }

    ctx->pc = 0x1bb2d4u;

    // 0x1bb2d4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1bb2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1bb2d8: 0x2450d280  addiu       $s0, $v0, -0x2D80
    ctx->pc = 0x1bb2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955648));
    // 0x1bb2dc: 0x2484dac8  addiu       $a0, $a0, -0x2538
    ctx->pc = 0x1bb2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957768));
    // 0x1bb2e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1bb2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1bb2e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bb2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb2e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bb2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb2ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bb2f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2f4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1bb2f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb2f8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1bb2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb2fc: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1BB2FCu;
    SET_GPR_U32(ctx, 31, 0x1BB304u);
    ctx->pc = 0x1BB300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2FCu;
    // 0x1bb300: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1BB2FCu, 0x1BB304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB304u;
label_1bb304:
    // 0x1bb304: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB304u;
    {
        const bool branch_taken_0x1bb304 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB304u;
        // 0x1bb308: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb304) {
            ctx->pc = 0x1BB320u;
            return;
        }
    }
    ctx->pc = 0x1BB30Cu;
    // 0x1bb30c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bb310: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BB310u;
    SET_GPR_U32(ctx, 31, 0x1BB318u);
    ctx->pc = 0x1BB314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB310u;
    // 0x1bb314: 0x8c44c0ac  lw          $a0, -0x3F54($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BB310u, 0x1BB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB318u;
label_1bb318:
    // 0x1bb318: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB318u;
    {
        const bool branch_taken_0x1bb318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB318u;
        // 0x1bb31c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb318) {
            ctx->pc = 0x1BB338u;
            return;
        }
    }
    ctx->pc = 0x1BB320u;
}
