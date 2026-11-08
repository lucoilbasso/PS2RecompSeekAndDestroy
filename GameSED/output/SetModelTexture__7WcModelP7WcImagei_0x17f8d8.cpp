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

// Function: SetModelTexture__7WcModelP7WcImagei
// Address: 0x17f8d8 - 0x17f978
void SetModelTexture__7WcModelP7WcImagei_0x17f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetModelTexture__7WcModelP7WcImagei_0x17f8d8");
#endif

    switch (ctx->pc) {
        case 0x17f908u: goto label_17f908;
        case 0x17f910u: goto label_17f910;
        case 0x17f920u: goto label_17f920;
        case 0x17f928u: goto label_17f928;
        case 0x17f930u: goto label_17f930;
        case 0x17f94cu: goto label_17f94c;
        default: break;
    }

    ctx->pc = 0x17f8d8u;

    // 0x17f8d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f8dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f8e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f8e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17f8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f8f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17f8f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17f8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17f8f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17f8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17f8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17f900: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17F900u;
    SET_GPR_U32(ctx, 31, 0x17F908u);
    ctx->pc = 0x17F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F900u;
    // 0x17f904: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17F900u, 0x17F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F908u;
label_17f908:
    // 0x17f908: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17F908u;
    SET_GPR_U32(ctx, 31, 0x17F910u);
    ctx->pc = 0x17F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F908u;
    // 0x17f90c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17F908u, 0x17F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F910u;
label_17f910:
    // 0x17f910: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x17f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f914: 0x58600012  blezl       $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F914u;
    {
        const bool branch_taken_0x17f914 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17f914) {
            ctx->pc = 0x17F918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F914u;
            // 0x17f918: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F960u;
            goto label_17f960;
        }
    }
    ctx->pc = 0x17F91Cu;
    // 0x17f91c: 0x0  nop
    ctx->pc = 0x17f91cu;
    // NOP
label_17f920:
    // 0x17f920: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17F920u;
    SET_GPR_U32(ctx, 31, 0x17F928u);
    ctx->pc = 0x17F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F920u;
    // 0x17f924: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17F920u, 0x17F928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F928u;
label_17f928:
    // 0x17f928: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x17F928u;
    SET_GPR_U32(ctx, 31, 0x17F930u);
    ctx->pc = 0x17F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F928u;
    // 0x17f92c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x17F928u, 0x17F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F930u;
label_17f930:
    // 0x17f930: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x17f930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x17f934: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x17f934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17f938: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17f938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f93c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17f93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f940: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17f940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17f944: 0xc05fbfc  jal         func_17EFF0
    ctx->pc = 0x17F944u;
    SET_GPR_U32(ctx, 31, 0x17F94Cu);
    ctx->pc = 0x17F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F944u;
    // 0x17f948: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EFF0u, 0x17F944u, 0x17F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F94Cu;
label_17f94c:
    // 0x17f94c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x17f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17f950: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x17f950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17f954: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x17F954u;
    {
        const bool branch_taken_0x17f954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f954) {
            ctx->pc = 0x17F920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f920;
        }
    }
    ctx->pc = 0x17F95Cu;
    // 0x17f95c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f960:
    // 0x17f960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f968: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17f968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f96c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f970: 0x3e00008  jr          $ra
    ctx->pc = 0x17F970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F970u;
        // 0x17f974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F978u;
}
