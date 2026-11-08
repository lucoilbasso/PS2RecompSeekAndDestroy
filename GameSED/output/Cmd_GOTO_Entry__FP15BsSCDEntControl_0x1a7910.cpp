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

// Function: Cmd_GOTO_Entry__FP15BsSCDEntControl
// Address: 0x1a7910 - 0x1a79cc
void Cmd_GOTO_Entry__FP15BsSCDEntControl_0x1a7910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GOTO_Entry__FP15BsSCDEntControl_0x1a7910");
#endif

    switch (ctx->pc) {
        case 0x1a7958u: goto label_1a7958;
        case 0x1a79a0u: goto label_1a79a0;
        default: break;
    }

    ctx->pc = 0x1a7910u;

    // 0x1a7910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7914: 0x3c027ffe  lui         $v0, 0x7FFE
    ctx->pc = 0x1a7914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32766 << 16));
    // 0x1a7918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a791c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a791cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7924: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x1a7924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x1a7928: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a792c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a7930: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a7930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a7934: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a7934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a7938: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1a7938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a793c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1a793cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1a7940: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a7940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a7944: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1a7944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a7948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7948u;
    {
        const bool branch_taken_0x1a7948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7948u;
        // 0x1a794c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7948) {
            ctx->pc = 0x1A7960u;
            goto label_1a7960;
        }
    }
    ctx->pc = 0x1A7950u;
    // 0x1a7950: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A7950u;
    SET_GPR_U32(ctx, 31, 0x1A7958u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A7950u, 0x1A7958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7958u;
label_1a7958:
    // 0x1a7958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A7958u;
    {
        const bool branch_taken_0x1a7958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7958u;
        // 0x1a795c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7958) {
            ctx->pc = 0x1A7964u;
            goto label_1a7964;
        }
    }
    ctx->pc = 0x1A7960u;
label_1a7960:
    // 0x1a7960: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a7960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a7964:
    // 0x1a7964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7968: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7968u;
    {
        const bool branch_taken_0x1a7968 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7968) {
            ctx->pc = 0x1A796Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7968u;
            // 0x1a796c: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7980u;
            goto label_1a7980;
        }
    }
    ctx->pc = 0x1A7970u;
    // 0x1a7970: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a7970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a7974: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7978: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A7978u;
    {
        const bool branch_taken_0x1a7978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7978u;
        // 0x1a797c: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7978) {
            ctx->pc = 0x1A79B4u;
            goto label_1a79b4;
        }
    }
    ctx->pc = 0x1A7980u;
label_1a7980:
    // 0x1a7980: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a7984: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a7984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7988: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7988u;
    {
        const bool branch_taken_0x1a7988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7988u;
        // 0x1a798c: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7988) {
            ctx->pc = 0x1A79A0u;
            goto label_1a79a0;
        }
    }
    ctx->pc = 0x1A7990u;
    // 0x1a7990: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7994: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7998: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7998u;
    SET_GPR_U32(ctx, 31, 0x1A79A0u);
    ctx->pc = 0x1A799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7998u;
    // 0x1a799c: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7998u, 0x1A79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79A0u;
label_1a79a0:
    // 0x1a79a0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a79a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1a79a8: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1a79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1a79ac: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1a79acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a79b0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1a79b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_1a79b4:
    // 0x1a79b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a79b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a79b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a79b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a79bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a79bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a79c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a79c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a79c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A79C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A79C4u;
        // 0x1a79c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A79C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A79CCu;
}
