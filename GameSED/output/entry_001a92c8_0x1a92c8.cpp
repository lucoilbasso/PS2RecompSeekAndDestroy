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

// Function: entry_001a92c8
// Address: 0x1a92c8 - 0x1a9318
void entry_001a92c8_0x1a92c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a92c8_0x1a92c8");
#endif

    switch (ctx->pc) {
        case 0x1a92e0u: goto label_1a92e0;
        case 0x1a9314u: goto label_1a9314;
        default: break;
    }

    ctx->pc = 0x1a92c8u;

    // 0x1a92c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a92c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a92cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a92ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a92d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a92d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a92d4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a92d8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A92D8u;
    SET_GPR_U32(ctx, 31, 0x1A92E0u);
    ctx->pc = 0x1A92DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A92D8u;
    // 0x1a92dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A92D8u, 0x1A92E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A92E0u;
label_1a92e0:
    // 0x1a92e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a92e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a92e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a92ec: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a92f0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a92f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a92f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a92f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a92f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a92fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a92fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a9300: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a9300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a9304: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9304u;
    {
        const bool branch_taken_0x1a9304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9304u;
        // 0x1a9308: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9304) {
            ctx->pc = 0x1A9318u;
            return;
        }
    }
    ctx->pc = 0x1A930Cu;
    // 0x1a930c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A930Cu;
    SET_GPR_U32(ctx, 31, 0x1A9314u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A930Cu, 0x1A9314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9314u;
label_1a9314:
    // 0x1a9314: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a9314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a9318u;
}
