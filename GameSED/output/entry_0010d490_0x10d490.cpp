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

// Function: entry_0010d490
// Address: 0x10d490 - 0x10d4f0
void entry_0010d490_0x10d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d490_0x10d490");
#endif

    switch (ctx->pc) {
        case 0x10d498u: goto label_10d498;
        case 0x10d4b0u: goto label_10d4b0;
        default: break;
    }

    ctx->pc = 0x10d490u;

    // 0x10d490: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10D490u;
    SET_GPR_U32(ctx, 31, 0x10D498u);
    ctx->pc = 0x10D494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D490u;
    // 0x10d494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10D490u, 0x10D498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D498u;
label_10d498:
    // 0x10d498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10d498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d49c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10d49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10d4a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d4a8: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x10D4A8u;
    SET_GPR_U32(ctx, 31, 0x10D4B0u);
    ctx->pc = 0x10D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D4A8u;
    // 0x10d4ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x10D4A8u, 0x10D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D4B0u;
label_10d4b0:
    // 0x10d4b0: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x10d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10d4b4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x10d4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x10d4b8: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x10d4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x10d4bc: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x10d4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x10d4c0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x10d4c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d4c4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x10d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x10d4c8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x10d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10d4cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10d4d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10d4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d4d4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10d4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d4d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10d4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10d4dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d4dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d4e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x10d4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d4e4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x10d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x10d4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4E8u;
        // 0x10d4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D4F0u;
}
