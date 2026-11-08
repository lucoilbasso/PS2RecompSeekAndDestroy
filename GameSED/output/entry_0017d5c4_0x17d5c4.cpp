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

// Function: entry_0017d5c4
// Address: 0x17d5c4 - 0x17d62c
void entry_0017d5c4_0x17d5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d5c4_0x17d5c4");
#endif

    switch (ctx->pc) {
        case 0x17d5f0u: goto label_17d5f0;
        case 0x17d5fcu: goto label_17d5fc;
        case 0x17d610u: goto label_17d610;
        default: break;
    }

    ctx->pc = 0x17d5c4u;

    // 0x17d5c4: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x17d5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d5c8: 0x3c090018  lui         $t1, 0x18
    ctx->pc = 0x17d5c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24 << 16));
    // 0x17d5cc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x17d5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17d5d0: 0x128043  sra         $s0, $s2, 1
    ctx->pc = 0x17d5d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 1));
    // 0x17d5d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17d5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5d8: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x17d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x17d5dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17d5dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x17d5e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5e4: 0x2529d548  addiu       $t1, $t1, -0x2AB8
    ctx->pc = 0x17d5e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956360));
    // 0x17d5e8: 0xc05e31a  jal         func_178C68
    ctx->pc = 0x17D5E8u;
    SET_GPR_U32(ctx, 31, 0x17D5F0u);
    ctx->pc = 0x17D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5E8u;
    // 0x17d5ec: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C68u, 0x17D5E8u, 0x17D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5F0u;
label_17d5f0:
    // 0x17d5f0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17d5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17d5f4: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17D5F4u;
    SET_GPR_U32(ctx, 31, 0x17D5FCu);
    ctx->pc = 0x17D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5F4u;
    // 0x17d5f8: 0x24847c08  addiu       $a0, $a0, 0x7C08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17D5F4u, 0x17D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5FCu;
label_17d5fc:
    // 0x17d5fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17d5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d600: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17d600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d604: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17d604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d608: 0xc05f3d8  jal         func_17CF60
    ctx->pc = 0x17D608u;
    SET_GPR_U32(ctx, 31, 0x17D610u);
    ctx->pc = 0x17D60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D608u;
    // 0x17d60c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF60u, 0x17D608u, 0x17D610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D610u;
label_17d610:
    // 0x17d610: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x17d610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17d614: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x17d614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17d618: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x17d618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17d61c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x17d61cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x17d620: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x17d620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17d624: 0x3e00008  jr          $ra
    ctx->pc = 0x17D624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D624u;
        // 0x17d628: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D62Cu;
}
