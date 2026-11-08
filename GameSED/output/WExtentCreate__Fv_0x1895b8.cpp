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

// Function: WExtentCreate__Fv
// Address: 0x1895b8 - 0x18960c
void WExtentCreate__Fv_0x1895b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WExtentCreate__Fv_0x1895b8");
#endif

    switch (ctx->pc) {
        case 0x1895ccu: goto label_1895cc;
        case 0x1895d4u: goto label_1895d4;
        case 0x1895ecu: goto label_1895ec;
        case 0x1895f8u: goto label_1895f8;
        default: break;
    }

    ctx->pc = 0x1895b8u;

    // 0x1895b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1895b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1895bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1895bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1895c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1895c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1895c4: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x1895C4u;
    SET_GPR_U32(ctx, 31, 0x1895CCu);
    ctx->pc = 0x1895C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895C4u;
    // 0x1895c8: 0x24040096  addiu       $a0, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x1895C4u, 0x1895CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895CCu;
label_1895cc:
    // 0x1895cc: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x1895CCu;
    SET_GPR_U32(ctx, 31, 0x1895D4u);
    ctx->pc = 0x1895D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895CCu;
    // 0x1895d0: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x1895CCu, 0x1895D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895D4u;
label_1895d4:
    // 0x1895d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1895d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1895d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1895d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1895dc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1895dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1895e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1895e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1895e4: 0xc062584  jal         func_189610
    ctx->pc = 0x1895E4u;
    SET_GPR_U32(ctx, 31, 0x1895ECu);
    ctx->pc = 0x1895E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895E4u;
    // 0x1895e8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189610u, 0x1895E4u, 0x1895ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895ECu;
label_1895ec:
    // 0x1895ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1895ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1895f0: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x1895F0u;
    SET_GPR_U32(ctx, 31, 0x1895F8u);
    ctx->pc = 0x1895F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1895F0u;
    // 0x1895f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1895F0u, 0x1895F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1895F8u;
label_1895f8:
    // 0x1895f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1895f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1895fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1895fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x189600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x189600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189604: 0x3e00008  jr          $ra
    ctx->pc = 0x189604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189604u;
        // 0x189608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18960Cu;
}
