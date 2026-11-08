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

// Function: Cmd_USE_RSCGENERATOR_Entry__FP15BsSCDEntControl
// Address: 0x1324d8 - 0x132590
void Cmd_USE_RSCGENERATOR_Entry__FP15BsSCDEntControl_0x1324d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USE_RSCGENERATOR_Entry__FP15BsSCDEntControl_0x1324d8");
#endif

    switch (ctx->pc) {
        case 0x132508u: goto label_132508;
        case 0x132514u: goto label_132514;
        case 0x132520u: goto label_132520;
        case 0x13252cu: goto label_13252c;
        case 0x132554u: goto label_132554;
        case 0x132568u: goto label_132568;
        default: break;
    }

    ctx->pc = 0x1324d8u;

    // 0x1324d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1324d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1324dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1324dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1324e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1324e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1324e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1324e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1324e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1324e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1324ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1324ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1324f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1324f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1324f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1324f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1324f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1324f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1324fc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1324fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x132500: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x132500u;
    SET_GPR_U32(ctx, 31, 0x132508u);
    ctx->pc = 0x132504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132500u;
    // 0x132504: 0x8c510048  lw          $s1, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132500u, 0x132508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132508u;
label_132508:
    // 0x132508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13250c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13250Cu;
    SET_GPR_U32(ctx, 31, 0x132514u);
    ctx->pc = 0x132510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13250Cu;
    // 0x132510: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13250Cu, 0x132514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132514u;
label_132514:
    // 0x132514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132518: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x132518u;
    SET_GPR_U32(ctx, 31, 0x132520u);
    ctx->pc = 0x13251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132518u;
    // 0x13251c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132518u, 0x132520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132520u;
label_132520:
    // 0x132520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132524: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x132524u;
    SET_GPR_U32(ctx, 31, 0x13252Cu);
    ctx->pc = 0x132528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132524u;
    // 0x132528: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x132524u, 0x13252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13252Cu;
label_13252c:
    // 0x13252c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x13252cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x132530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x132530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132534: 0x8e2202f8  lw          $v0, 0x2F8($s1)
    ctx->pc = 0x132534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x132538: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x132538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13253c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13253cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132540: 0x24a56200  addiu       $a1, $a1, 0x6200
    ctx->pc = 0x132540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25088));
    // 0x132544: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132544u;
    {
        const bool branch_taken_0x132544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132544u;
        // 0x132548: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132544) {
            ctx->pc = 0x132554u;
            goto label_132554;
        }
    }
    ctx->pc = 0x13254Cu;
    // 0x13254c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13254Cu;
    SET_GPR_U32(ctx, 31, 0x132554u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13254Cu, 0x132554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132554u;
label_132554:
    // 0x132554: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x132554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132558: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x132558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13255c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13255cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132560: 0xc04ba16  jal         func_12E858
    ctx->pc = 0x132560u;
    SET_GPR_U32(ctx, 31, 0x132568u);
    ctx->pc = 0x132564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132560u;
    // 0x132564: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E858u, 0x132560u, 0x132568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132568u;
label_132568:
    // 0x132568: 0xae4202f8  sw          $v0, 0x2F8($s2)
    ctx->pc = 0x132568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 760), GPR_U32(ctx, 2));
    // 0x13256c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13256cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132574: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132578: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x132578u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13257c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13257cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132580: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x132580u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x132584: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x132584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132588: 0x3e00008  jr          $ra
    ctx->pc = 0x132588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132588u;
        // 0x13258c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132590u;
}
