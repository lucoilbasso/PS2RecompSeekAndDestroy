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

// Function: entry_0016b370
// Address: 0x16b370 - 0x16b41c
void entry_0016b370_0x16b370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b370_0x16b370");
#endif

    switch (ctx->pc) {
        case 0x16b390u: goto label_16b390;
        case 0x16b3acu: goto label_16b3ac;
        case 0x16b3bcu: goto label_16b3bc;
        case 0x16b3ccu: goto label_16b3cc;
        case 0x16b3dcu: goto label_16b3dc;
        case 0x16b3ecu: goto label_16b3ec;
        case 0x16b400u: goto label_16b400;
        default: break;
    }

    ctx->pc = 0x16b370u;

label_16b370:
    // 0x16b370: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x16b370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x16b374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16b374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16b378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b37c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16b37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16b384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b388: 0xc05129a  jal         func_144A68
    ctx->pc = 0x16B388u;
    SET_GPR_U32(ctx, 31, 0x16B390u);
    ctx->pc = 0x16B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B388u;
    // 0x16b38c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A68u, 0x16B388u, 0x16B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B390u;
label_16b390:
    // 0x16b390: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x16b390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x16b394: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x16B394u;
    {
        const bool branch_taken_0x16b394 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x16B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B394u;
        // 0x16b398: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b394) {
            ctx->pc = 0x16B370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b370;
        }
    }
    ctx->pc = 0x16B39Cu;
    // 0x16b39c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x16b39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16b3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3a4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3A4u;
    SET_GPR_U32(ctx, 31, 0x16B3ACu);
    ctx->pc = 0x16B3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3A4u;
    // 0x16b3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3A4u, 0x16B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3ACu;
label_16b3ac:
    // 0x16b3ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x16b3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3b4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3B4u;
    SET_GPR_U32(ctx, 31, 0x16B3BCu);
    ctx->pc = 0x16B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3B4u;
    // 0x16b3b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3B4u, 0x16B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3BCu;
label_16b3bc:
    // 0x16b3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3c0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x16b3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16b3c4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3C4u;
    SET_GPR_U32(ctx, 31, 0x16B3CCu);
    ctx->pc = 0x16B3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3C4u;
    // 0x16b3c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3C4u, 0x16B3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3CCu;
label_16b3cc:
    // 0x16b3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16b3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16b3d4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3D4u;
    SET_GPR_U32(ctx, 31, 0x16B3DCu);
    ctx->pc = 0x16B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3D4u;
    // 0x16b3d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3D4u, 0x16B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3DCu;
label_16b3dc:
    // 0x16b3dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3e0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x16b3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16b3e4: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3E4u;
    SET_GPR_U32(ctx, 31, 0x16B3ECu);
    ctx->pc = 0x16B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3E4u;
    // 0x16b3e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3E4u, 0x16B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3ECu;
label_16b3ec:
    // 0x16b3ec: 0x8e2601c8  lw          $a2, 0x1C8($s1)
    ctx->pc = 0x16b3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x16b3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16b3f8: 0xc0640ca  jal         func_190328
    ctx->pc = 0x16B3F8u;
    SET_GPR_U32(ctx, 31, 0x16B400u);
    ctx->pc = 0x16B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B3F8u;
    // 0x16b3fc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190328u, 0x16B3F8u, 0x16B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B400u;
label_16b400:
    // 0x16b400: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x16b400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b404: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x16b404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x16b408: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x16b408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16b40c: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x16b40cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16b410: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b414: 0x3e00008  jr          $ra
    ctx->pc = 0x16B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B414u;
        // 0x16b418: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B41Cu;
}
