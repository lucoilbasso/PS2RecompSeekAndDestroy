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

// Function: entry_001d29ac
// Address: 0x1d29ac - 0x1d29d8
void entry_001d29ac_0x1d29ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d29ac_0x1d29ac");
#endif

    switch (ctx->pc) {
        case 0x1d29ccu: goto label_1d29cc;
        default: break;
    }

    ctx->pc = 0x1d29acu;

    // 0x1d29ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1d29acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d29b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1d29b4: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D29B4u;
    {
        const bool branch_taken_0x1d29b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d29b4) {
            ctx->pc = 0x1D29B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D29B4u;
            // 0x1d29b8: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D29D8u;
            return;
        }
    }
    ctx->pc = 0x1D29BCu;
    // 0x1d29bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d29bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d29c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29c4: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D29C4u;
    SET_GPR_U32(ctx, 31, 0x1D29CCu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D29C4u, 0x1D29CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29CCu;
label_1d29cc:
    // 0x1d29cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d29ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29d0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d29d4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1d29d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d29d8u;
}
