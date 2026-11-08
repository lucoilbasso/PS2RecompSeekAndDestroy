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

// Function: ApRsc3DSoundPlay__FP8ApcRsc3DUiP9FVector32fi
// Address: 0x146168 - 0x1461c4
void ApRsc3DSoundPlay__FP8ApcRsc3DUiP9FVector32fi_0x146168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApRsc3DSoundPlay__FP8ApcRsc3DUiP9FVector32fi_0x146168");
#endif

    switch (ctx->pc) {
        case 0x14618cu: goto label_14618c;
        case 0x1461acu: goto label_1461ac;
        default: break;
    }

    ctx->pc = 0x146168u;

    // 0x146168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14616c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146170: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x146170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146174: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x146174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146178: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x146178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14617c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14617cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x146180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x146184: 0xc0514c2  jal         func_145308
    ctx->pc = 0x146184u;
    SET_GPR_U32(ctx, 31, 0x14618Cu);
    ctx->pc = 0x146188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146184u;
    // 0x146188: 0x3c110024  lui         $s1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145308u, 0x146184u, 0x14618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14618Cu;
label_14618c:
    // 0x14618c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x14618cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x146190: 0x2631fcb0  addiu       $s1, $s1, -0x350
    ctx->pc = 0x146190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966448));
    // 0x146194: 0x8e260414  lw          $a2, 0x414($s1)
    ctx->pc = 0x146194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1044)));
    // 0x146198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x146198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14619c: 0x8e270418  lw          $a3, 0x418($s1)
    ctx->pc = 0x14619cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1048)));
    // 0x1461a0: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1461a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1461a4: 0xc0477ba  jal         func_11DEE8
    ctx->pc = 0x1461A4u;
    SET_GPR_U32(ctx, 31, 0x1461ACu);
    ctx->pc = 0x1461A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461A4u;
    // 0x1461a8: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEE8u, 0x1461A4u, 0x1461ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461ACu;
label_1461ac:
    // 0x1461ac: 0xae220410  sw          $v0, 0x410($s1)
    ctx->pc = 0x1461acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1040), GPR_U32(ctx, 2));
    // 0x1461b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1461b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1461b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1461b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1461b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1461b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1461bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1461BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1461C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461BCu;
        // 0x1461c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1461BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1461C4u;
}
