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

// Function: entry_0017d39c
// Address: 0x17d39c - 0x17d3e8
void entry_0017d39c_0x17d39c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d39c_0x17d39c");
#endif

    switch (ctx->pc) {
        case 0x17d3c8u: goto label_17d3c8;
        case 0x17d3d4u: goto label_17d3d4;
        default: break;
    }

    ctx->pc = 0x17d39cu;

    // 0x17d39c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x17d39cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d3a0: 0x3c090018  lui         $t1, 0x18
    ctx->pc = 0x17d3a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24 << 16));
    // 0x17d3a4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17d3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d3a8: 0x128043  sra         $s0, $s2, 1
    ctx->pc = 0x17d3a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 1));
    // 0x17d3ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17d3b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3b8: 0x2529d548  addiu       $t1, $t1, -0x2AB8
    ctx->pc = 0x17d3b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956360));
    // 0x17d3bc: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x17d3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x17d3c0: 0xc05e31a  jal         func_178C68
    ctx->pc = 0x17D3C0u;
    SET_GPR_U32(ctx, 31, 0x17D3C8u);
    ctx->pc = 0x17D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3C0u;
    // 0x17d3c4: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C68u, 0x17D3C0u, 0x17D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3C8u;
label_17d3c8:
    // 0x17d3c8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17d3cc: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17D3CCu;
    SET_GPR_U32(ctx, 31, 0x17D3D4u);
    ctx->pc = 0x17D3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3CCu;
    // 0x17d3d0: 0x24847c08  addiu       $a0, $a0, 0x7C08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17D3CCu, 0x17D3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3D4u;
label_17d3d4:
    // 0x17d3d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17d3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17d3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d3e0: 0xc05f3d8  jal         func_17CF60
    ctx->pc = 0x17D3E0u;
    SET_GPR_U32(ctx, 31, 0x17D3E8u);
    ctx->pc = 0x17D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D3E0u;
    // 0x17d3e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF60u, 0x17D3E0u, 0x17D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D3E8u;
}
