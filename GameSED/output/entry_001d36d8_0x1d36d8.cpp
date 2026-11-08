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

// Function: entry_001d36d8
// Address: 0x1d36d8 - 0x1d3718
void entry_001d36d8_0x1d36d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d36d8_0x1d36d8");
#endif

    switch (ctx->pc) {
        case 0x1d3700u: goto label_1d3700;
        case 0x1d3710u: goto label_1d3710;
        default: break;
    }

    ctx->pc = 0x1d36d8u;

    // 0x1d36d8: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1D36D8u;
    {
        const bool branch_taken_0x1d36d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36D8u;
        // 0x1d36dc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36d8) {
            ctx->pc = 0x1D37D8u;
            return;
        }
    }
    ctx->pc = 0x1D36E0u;
    // 0x1d36e0: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x1d36e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x1d36e4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1d36e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1d36e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d36ec: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1d36ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1d36f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d36f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d36f4: 0xdca5c678  ld          $a1, -0x3988($a1)
    ctx->pc = 0x1d36f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294952568)));
    // 0x1d36f8: 0xc0728b2  jal         func_1CA2C8
    ctx->pc = 0x1D36F8u;
    SET_GPR_U32(ctx, 31, 0x1D3700u);
    ctx->pc = 0x1D36FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D36F8u;
    // 0x1d36fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2C8u, 0x1D36F8u, 0x1D3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3700u;
label_1d3700:
    // 0x1d3700: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d3700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3708: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1D3708u;
    SET_GPR_U32(ctx, 31, 0x1D3710u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1D3708u, 0x1D3710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3710u;
label_1d3710:
    // 0x1d3710: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D3710u;
    {
        const bool branch_taken_0x1d3710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3710u;
        // 0x1d3714: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3710) {
            ctx->pc = 0x1D3744u;
            return;
        }
    }
    ctx->pc = 0x1D3718u;
}
