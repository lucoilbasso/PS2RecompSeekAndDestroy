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

// Function: entry_001d168c
// Address: 0x1d168c - 0x1d16d0
void entry_001d168c_0x1d168c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d168c_0x1d168c");
#endif

    switch (ctx->pc) {
        case 0x1d16a4u: goto label_1d16a4;
        case 0x1d16bcu: goto label_1d16bc;
        default: break;
    }

    ctx->pc = 0x1d168cu;

    // 0x1d168c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1d168cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1690: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1d1690u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1694: 0xffa201f8  sd          $v0, 0x1F8($sp)
    ctx->pc = 0x1d1694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 2));
    // 0x1d1698: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d1698u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d169c: 0xc0758ce  jal         func_1D6338
    ctx->pc = 0x1D169Cu;
    SET_GPR_U32(ctx, 31, 0x1D16A4u);
    ctx->pc = 0x1D16A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D169Cu;
    // 0x1d16a0: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6338u, 0x1D169Cu, 0x1D16A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16A4u;
label_1d16a4:
    // 0x1d16a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D16A4u;
    {
        const bool branch_taken_0x1d16a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d16a4) {
            ctx->pc = 0x1D16E0u;
            return;
        }
    }
    ctx->pc = 0x1D16ACu;
    // 0x1d16ac: 0xdfa401f8  ld          $a0, 0x1F8($sp)
    ctx->pc = 0x1d16acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1d16b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d16b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d16b4: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D16B4u;
    SET_GPR_U32(ctx, 31, 0x1D16BCu);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D16B4u, 0x1D16BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D16BCu;
label_1d16bc:
    // 0x1d16bc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D16BCu;
    {
        const bool branch_taken_0x1d16bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D16C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D16BCu;
        // 0x1d16c0: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d16bc) {
            ctx->pc = 0x1D16D0u;
            return;
        }
    }
    ctx->pc = 0x1D16C4u;
    // 0x1d16c4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d16c8: 0xa3a201d1  sb          $v0, 0x1D1($sp)
    ctx->pc = 0x1d16c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d16cc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    ctx->pc = 0x1d16d0u;
}
