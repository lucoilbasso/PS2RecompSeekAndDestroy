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

// Function: Cmd_NODE_BORDER_SET_Entry__FP15BsSCDEntControl
// Address: 0x1388e8 - 0x13897c
void Cmd_NODE_BORDER_SET_Entry__FP15BsSCDEntControl_0x1388e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_NODE_BORDER_SET_Entry__FP15BsSCDEntControl_0x1388e8");
#endif

    switch (ctx->pc) {
        case 0x138910u: goto label_138910;
        case 0x138930u: goto label_138930;
        case 0x138948u: goto label_138948;
        default: break;
    }

    ctx->pc = 0x1388e8u;

    // 0x1388e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1388e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1388ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1388ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1388f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1388f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1388f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1388f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1388f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1388f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1388fc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1388fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x138900: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x138900u;
    {
        const bool branch_taken_0x138900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x138904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138900u;
        // 0x138904: 0x2470b840  addiu       $s0, $v1, -0x47C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138900) {
            ctx->pc = 0x138938u;
            goto label_138938;
        }
    }
    ctx->pc = 0x138908u;
    // 0x138908: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x138908u;
    SET_GPR_U32(ctx, 31, 0x138910u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x138908u, 0x138910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138910u;
label_138910:
    // 0x138910: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138910u;
    {
        const bool branch_taken_0x138910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138910u;
        // 0x138914: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138910) {
            ctx->pc = 0x138920u;
            goto label_138920;
        }
    }
    ctx->pc = 0x138918u;
    // 0x138918: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x138918u;
    {
        const bool branch_taken_0x138918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138918u;
        // 0x13891c: 0xae000400  sw          $zero, 0x400($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138918) {
            ctx->pc = 0x13896Cu;
            goto label_13896c;
        }
    }
    ctx->pc = 0x138920u;
label_138920:
    // 0x138920: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x138920u;
    {
        const bool branch_taken_0x138920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x138920) {
            ctx->pc = 0x138924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138920u;
            // 0x138924: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138970u;
            goto label_138970;
        }
    }
    ctx->pc = 0x138928u;
    // 0x138928: 0xc04e1a6  jal         func_138698
    ctx->pc = 0x138928u;
    SET_GPR_U32(ctx, 31, 0x138930u);
    ctx->pc = 0x13892Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138928u;
    // 0x13892c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138698u, 0x138928u, 0x138930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138930u;
label_138930:
    // 0x138930: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138930u;
    {
        const bool branch_taken_0x138930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138930u;
        // 0x138934: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138930) {
            ctx->pc = 0x138970u;
            goto label_138970;
        }
    }
    ctx->pc = 0x138938u;
label_138938:
    // 0x138938: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x138938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13893c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x13893cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x138940: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x138940u;
    SET_GPR_U32(ctx, 31, 0x138948u);
    ctx->pc = 0x138944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138940u;
    // 0x138944: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x138940u, 0x138948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138948u;
label_138948:
    // 0x138948: 0x8e030400  lw          $v1, 0x400($s0)
    ctx->pc = 0x138948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
    // 0x13894c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x13894cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x138950: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x138950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x138954: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x138954u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138958: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x138958u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13895c: 0x26040400  addiu       $a0, $s0, 0x400
    ctx->pc = 0x13895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x138960: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x138960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x138964: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x138964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x138968: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x138968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_13896c:
    // 0x13896c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13896cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_138970:
    // 0x138970: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x138970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138974: 0x3e00008  jr          $ra
    ctx->pc = 0x138974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138974u;
        // 0x138978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13897Cu;
}
