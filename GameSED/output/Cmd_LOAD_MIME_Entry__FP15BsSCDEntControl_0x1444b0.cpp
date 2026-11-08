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

// Function: Cmd_LOAD_MIME_Entry__FP15BsSCDEntControl
// Address: 0x1444b0 - 0x144570
void Cmd_LOAD_MIME_Entry__FP15BsSCDEntControl_0x1444b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_LOAD_MIME_Entry__FP15BsSCDEntControl_0x1444b0");
#endif

    switch (ctx->pc) {
        case 0x1444e8u: goto label_1444e8;
        case 0x1444f0u: goto label_1444f0;
        case 0x14450cu: goto label_14450c;
        case 0x144520u: goto label_144520;
        case 0x144528u: goto label_144528;
        case 0x144540u: goto label_144540;
        case 0x144548u: goto label_144548;
        case 0x144550u: goto label_144550;
        default: break;
    }

    ctx->pc = 0x1444b0u;

    // 0x1444b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1444b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1444b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1444b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444b8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1444b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1444bc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1444bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1444c0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1444c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1444c4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1444c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1444c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1444c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1444cc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1444ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1444d0: 0x8445000e  lh          $a1, 0xE($v0)
    ctx->pc = 0x1444d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1444d4: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1444D4u;
    {
        const bool branch_taken_0x1444d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1444D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444D4u;
        // 0x1444d8: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444d4) {
            ctx->pc = 0x144518u;
            goto label_144518;
        }
    }
    ctx->pc = 0x1444DCu;
    // 0x1444dc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1444dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1444e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1444E0u;
    SET_GPR_U32(ctx, 31, 0x1444E8u);
    ctx->pc = 0x1444E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444E0u;
    // 0x1444e4: 0x8c51037c  lw          $s1, 0x37C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1444E0u, 0x1444E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444E8u;
label_1444e8:
    // 0x1444e8: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x1444E8u;
    SET_GPR_U32(ctx, 31, 0x1444F0u);
    ctx->pc = 0x1444ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444E8u;
    // 0x1444ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x1444E8u, 0x1444F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1444F0u;
label_1444f0:
    // 0x1444f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1444f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444f4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1444f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1444f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1444f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444fc: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x1444fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x144500: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x144500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144504: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144504u;
    SET_GPR_U32(ctx, 31, 0x14450Cu);
    ctx->pc = 0x144508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144504u;
    // 0x144508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144504u, 0x14450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14450Cu;
label_14450c:
    // 0x14450c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14450Cu;
    {
        const bool branch_taken_0x14450c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14450c) {
            ctx->pc = 0x144540u;
            goto label_144540;
        }
    }
    ctx->pc = 0x144514u;
    // 0x144514: 0x0  nop
    ctx->pc = 0x144514u;
    // NOP
label_144518:
    // 0x144518: 0xc0416a6  jal         func_105A98
    ctx->pc = 0x144518u;
    SET_GPR_U32(ctx, 31, 0x144520u);
    ctx->pc = 0x14451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144518u;
    // 0x14451c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A98u, 0x144518u, 0x144520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144520u;
label_144520:
    // 0x144520: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144520u;
    SET_GPR_U32(ctx, 31, 0x144528u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144520u, 0x144528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144528u;
label_144528:
    // 0x144528: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x144528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14452c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14452cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x144534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144538: 0xc05f40e  jal         func_17D038
    ctx->pc = 0x144538u;
    SET_GPR_U32(ctx, 31, 0x144540u);
    ctx->pc = 0x14453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144538u;
    // 0x14453c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D038u, 0x144538u, 0x144540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144540u;
label_144540:
    // 0x144540: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x144540u;
    SET_GPR_U32(ctx, 31, 0x144548u);
    ctx->pc = 0x144544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144540u;
    // 0x144544: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x144540u, 0x144548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144548u;
label_144548:
    // 0x144548: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x144548u;
    SET_GPR_U32(ctx, 31, 0x144550u);
    ctx->pc = 0x14454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144548u;
    // 0x14454c: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x144548u, 0x144550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144550u;
label_144550:
    // 0x144550: 0xae720060  sw          $s2, 0x60($s3)
    ctx->pc = 0x144550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 18));
    // 0x144554: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x144554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144558: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x144558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14455c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x14455cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144560: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x144560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x144564: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x144564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144568: 0x3e00008  jr          $ra
    ctx->pc = 0x144568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144568u;
        // 0x14456c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144570u;
}
