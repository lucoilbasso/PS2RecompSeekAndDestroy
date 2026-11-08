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

// Function: ApItemTankGetOffset__FP15BsSCDEntControlPiT1
// Address: 0x119580 - 0x1195e4
void ApItemTankGetOffset__FP15BsSCDEntControlPiT1_0x119580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApItemTankGetOffset__FP15BsSCDEntControlPiT1_0x119580");
#endif

    switch (ctx->pc) {
        case 0x1195a4u: goto label_1195a4;
        case 0x1195c8u: goto label_1195c8;
        default: break;
    }

    ctx->pc = 0x119580u;

    // 0x119580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119588: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x119588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11958c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x119590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119594: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x119598: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x119598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11959c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11959Cu;
    SET_GPR_U32(ctx, 31, 0x1195A4u);
    ctx->pc = 0x1195A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11959Cu;
    // 0x1195a0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11959Cu, 0x1195A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195A4u;
label_1195a4:
    // 0x1195a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1195a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1195a8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1195a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1195ac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1195acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1195b0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1195b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1195b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1195b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1195b8: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1195B8u;
    {
        const bool branch_taken_0x1195b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1195BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195B8u;
        // 0x1195bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195b8) {
            ctx->pc = 0x1195CCu;
            goto label_1195cc;
        }
    }
    ctx->pc = 0x1195C0u;
    // 0x1195c0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1195C0u;
    SET_GPR_U32(ctx, 31, 0x1195C8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1195C0u, 0x1195C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195C8u;
label_1195c8:
    // 0x1195c8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1195c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1195cc:
    // 0x1195cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1195ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1195d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1195d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1195d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1195d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1195d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1195d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1195dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1195DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1195E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195DCu;
        // 0x1195e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1195DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1195E4u;
}
