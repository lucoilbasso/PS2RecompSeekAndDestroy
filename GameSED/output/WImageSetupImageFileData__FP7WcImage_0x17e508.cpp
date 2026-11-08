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

// Function: WImageSetupImageFileData__FP7WcImage
// Address: 0x17e508 - 0x17e5a4
void WImageSetupImageFileData__FP7WcImage_0x17e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WImageSetupImageFileData__FP7WcImage_0x17e508");
#endif

    switch (ctx->pc) {
        case 0x17e534u: goto label_17e534;
        case 0x17e564u: goto label_17e564;
        case 0x17e590u: goto label_17e590;
        default: break;
    }

    ctx->pc = 0x17e508u;

    // 0x17e508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e51c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x17e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x17e520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e524: 0x24847c40  addiu       $a0, $a0, 0x7C40
    ctx->pc = 0x17e524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31808));
    // 0x17e528: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x17e528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x17e52c: 0xc0686ba  jal         func_1A1AE8
    ctx->pc = 0x17E52Cu;
    SET_GPR_U32(ctx, 31, 0x17E534u);
    ctx->pc = 0x17E530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E52Cu;
    // 0x17e530: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1AE8u, 0x17E52Cu, 0x17E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E534u;
label_17e534:
    // 0x17e534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e538: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17e538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x17e53c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x17e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e540: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17e544: 0x34425041  ori         $v0, $v0, 0x5041
    ctx->pc = 0x17e544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20545);
    // 0x17e548: 0x24a57c60  addiu       $a1, $a1, 0x7C60
    ctx->pc = 0x17e548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31840));
    // 0x17e54c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17E54Cu;
    {
        const bool branch_taken_0x17e54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E54Cu;
        // 0x17e550: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e54c) {
            ctx->pc = 0x17E588u;
            goto label_17e588;
        }
    }
    ctx->pc = 0x17E554u;
    // 0x17e554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e558: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x17e558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17e55c: 0xc05f58c  jal         func_17D630
    ctx->pc = 0x17E55Cu;
    SET_GPR_U32(ctx, 31, 0x17E564u);
    ctx->pc = 0x17E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E55Cu;
    // 0x17e560: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D630u, 0x17E55Cu, 0x17E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E564u;
label_17e564:
    // 0x17e564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17e568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e570: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x17e570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17e574: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17e574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e57c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e580: 0x805f5e6  j           func_17D798
    ctx->pc = 0x17E580u;
    ctx->pc = 0x17E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E580u;
    // 0x17e584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D798u;
    WImageGetAptInfo__FP7WcImageP7AptHeadP13WImagePackagei_0x17d798(rdram, ctx, runtime); return;
    ctx->pc = 0x17E588u;
label_17e588:
    // 0x17e588: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17E588u;
    SET_GPR_U32(ctx, 31, 0x17E590u);
    ctx->pc = 0x17E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E588u;
    // 0x17e58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17E588u, 0x17E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E590u;
label_17e590:
    // 0x17e590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e59c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E59Cu;
        // 0x17e5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E5A4u;
}
