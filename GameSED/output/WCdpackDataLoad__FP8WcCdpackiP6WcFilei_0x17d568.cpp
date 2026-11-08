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

// Function: WCdpackDataLoad__FP8WcCdpackiP6WcFilei
// Address: 0x17d568 - 0x17d62c
void WCdpackDataLoad__FP8WcCdpackiP6WcFilei_0x17d568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdpackDataLoad__FP8WcCdpackiP6WcFilei_0x17d568");
#endif

    switch (ctx->pc) {
        case 0x17d5b0u: goto label_17d5b0;
        case 0x17d5c4u: goto label_17d5c4;
        case 0x17d5f0u: goto label_17d5f0;
        case 0x17d5fcu: goto label_17d5fc;
        case 0x17d610u: goto label_17d610;
        default: break;
    }

    ctx->pc = 0x17d568u;

    // 0x17d568: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17d568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17d56c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x17d56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x17d570: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x17d570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x17d574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17d574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d578: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x17d578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x17d57c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17d57cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d580: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x17d580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x17d584: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17d584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d588: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x17d588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x17d58c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x17d58cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17d590: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x17d590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17d594: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x17d594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d598: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17d59c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D59Cu;
    {
        const bool branch_taken_0x17d59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D59Cu;
        // 0x17d5a0: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d59c) {
            ctx->pc = 0x17D5C4u;
            goto label_17d5c4;
        }
    }
    ctx->pc = 0x17D5A4u;
    // 0x17d5a4: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17d5a8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x17D5A8u;
    SET_GPR_U32(ctx, 31, 0x17D5B0u);
    ctx->pc = 0x17D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5A8u;
    // 0x17d5ac: 0x24847be8  addiu       $a0, $a0, 0x7BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x17D5A8u, 0x17D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5B0u;
label_17d5b0:
    // 0x17d5b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17d5b4: 0x24a57c08  addiu       $a1, $a1, 0x7C08
    ctx->pc = 0x17d5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31752));
    // 0x17d5b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5bc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17D5BCu;
    SET_GPR_U32(ctx, 31, 0x17D5C4u);
    ctx->pc = 0x17D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5BCu;
    // 0x17d5c0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17D5BCu, 0x17D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D5C4u;
label_17d5c4:
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
