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

// Function: Cmd_SET_ARENA_FLG_Entry__FP15BsSCDEntControl
// Address: 0x119f70 - 0x11a010
void Cmd_SET_ARENA_FLG_Entry__FP15BsSCDEntControl_0x119f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_ARENA_FLG_Entry__FP15BsSCDEntControl_0x119f70");
#endif

    switch (ctx->pc) {
        case 0x119f88u: goto label_119f88;
        case 0x119f94u: goto label_119f94;
        case 0x119fc4u: goto label_119fc4;
        case 0x119fdcu: goto label_119fdc;
        default: break;
    }

    ctx->pc = 0x119f70u;

    // 0x119f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119f74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119f78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119f7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119f80: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119F80u;
    SET_GPR_U32(ctx, 31, 0x119F88u);
    ctx->pc = 0x119F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F80u;
    // 0x119f84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119F80u, 0x119F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F88u;
label_119f88:
    // 0x119f88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119F8Cu;
    SET_GPR_U32(ctx, 31, 0x119F94u);
    ctx->pc = 0x119F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119F8Cu;
    // 0x119f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119F8Cu, 0x119F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119F94u;
label_119f94:
    // 0x119f94: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x119f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x119f98: 0x2e230008  sltiu       $v1, $s1, 0x8
    ctx->pc = 0x119f98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x119f9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fa0: 0x248442c0  addiu       $a0, $a0, 0x42C0
    ctx->pc = 0x119fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17088));
    // 0x119fa4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x119FA4u;
    {
        const bool branch_taken_0x119fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FA4u;
        // 0x119fa8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fa4) {
            ctx->pc = 0x119FBCu;
            goto label_119fbc;
        }
    }
    ctx->pc = 0x119FACu;
    // 0x119fac: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119FACu;
    {
        const bool branch_taken_0x119fac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x119FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FACu;
        // 0x119fb0: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fac) {
            ctx->pc = 0x119FBCu;
            goto label_119fbc;
        }
    }
    ctx->pc = 0x119FB4u;
    // 0x119fb4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119FB4u;
    {
        const bool branch_taken_0x119fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119FB4u;
        // 0x119fb8: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fb4) {
            ctx->pc = 0x119FE0u;
            goto label_119fe0;
        }
    }
    ctx->pc = 0x119FBCu;
label_119fbc:
    // 0x119fbc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x119FBCu;
    SET_GPR_U32(ctx, 31, 0x119FC4u);
    ctx->pc = 0x119FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FBCu;
    // 0x119fc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x119FBCu, 0x119FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FC4u;
label_119fc4:
    // 0x119fc4: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x119fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x119fc8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x119fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x119fcc: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x119fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x119fd0: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60
    ctx->pc = 0x119fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
    // 0x119fd4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x119FD4u;
    SET_GPR_U32(ctx, 31, 0x119FDCu);
    ctx->pc = 0x119FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119FD4u;
    // 0x119fd8: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x119FD4u, 0x119FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119FDCu;
label_119fdc:
    // 0x119fdc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x119fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_119fe0:
    // 0x119fe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119fe4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119fec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x119fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x119ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x119ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119ff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119ffc: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x119ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11a000: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x11a000u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x11a004: 0xac23e150  sw          $v1, -0x1EB0($at)
    ctx->pc = 0x11a004u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959440), GPR_U32(ctx, 3));
    // 0x11a008: 0x3e00008  jr          $ra
    ctx->pc = 0x11A008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A008u;
        // 0x11a00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A010u;
}
