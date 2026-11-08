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

// Function: _fs_version
// Address: 0x1b27c0 - 0x1b284c
void _fs_version_0x1b27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fs_version_0x1b27c0");
#endif

    switch (ctx->pc) {
        case 0x1b27fcu: goto label_1b27fc;
        case 0x1b2814u: goto label_1b2814;
        case 0x1b2828u: goto label_1b2828;
        default: break;
    }

    ctx->pc = 0x1b27c0u;

    // 0x1b27c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b27c4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b27c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b27c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1b27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1b27cc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b27ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b27d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1b27d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1b27d4: 0x2453a964  addiu       $s3, $v0, -0x569C
    ctx->pc = 0x1b27d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945124));
    // 0x1b27d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b27d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b27dc: 0x2471b1a8  addiu       $s1, $v1, -0x4E58
    ctx->pc = 0x1b27dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947240));
    // 0x1b27e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b27e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b27e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b27e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b27e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b27ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b27ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b27f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27f4: 0xc073fe4  jal         func_1CFF90
    ctx->pc = 0x1B27F4u;
    SET_GPR_U32(ctx, 31, 0x1B27FCu);
    ctx->pc = 0x1B27F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B27F4u;
    // 0x1b27f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF90u, 0x1B27F4u, 0x1B27FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B27FCu;
label_1b27fc:
    // 0x1b27fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B27FCu;
    {
        const bool branch_taken_0x1b27fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27FCu;
        // 0x1b2800: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27fc) {
            ctx->pc = 0x1B282Cu;
            goto label_1b282c;
        }
    }
    ctx->pc = 0x1B2804u;
    // 0x1b2804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2808: 0x8e05aa18  lw          $a1, -0x55E8($s0)
    ctx->pc = 0x1b2808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945304)));
    // 0x1b280c: 0xc073fe4  jal         func_1CFF90
    ctx->pc = 0x1B280Cu;
    SET_GPR_U32(ctx, 31, 0x1B2814u);
    ctx->pc = 0x1B2810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B280Cu;
    // 0x1b2810: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF90u, 0x1B280Cu, 0x1B2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2814u;
label_1b2814:
    // 0x1b2814: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2814u;
    {
        const bool branch_taken_0x1b2814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2814u;
        // 0x1b2818: 0x8e05aa18  lw          $a1, -0x55E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2814) {
            ctx->pc = 0x1B282Cu;
            goto label_1b282c;
        }
    }
    ctx->pc = 0x1B281Cu;
    // 0x1b281c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b281cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2820: 0xc073fe4  jal         func_1CFF90
    ctx->pc = 0x1B2820u;
    SET_GPR_U32(ctx, 31, 0x1B2828u);
    ctx->pc = 0x1B2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2820u;
    // 0x1b2824: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF90u, 0x1B2820u, 0x1B2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2828u;
label_1b2828:
    // 0x1b2828: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x1b2828u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b282c:
    // 0x1b282c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b282cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2830: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2834: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1b2834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2838: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b2838u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b283c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1b283cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2844: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2844u;
        // 0x1b2848: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B284Cu;
}
