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

// Function: Cmd_TANK_PARTS_BACKUP_CHECK_Entry__FP15BsSCDEntControl
// Address: 0x119c90 - 0x119d6c
void Cmd_TANK_PARTS_BACKUP_CHECK_Entry__FP15BsSCDEntControl_0x119c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_PARTS_BACKUP_CHECK_Entry__FP15BsSCDEntControl_0x119c90");
#endif

    switch (ctx->pc) {
        case 0x119ca8u: goto label_119ca8;
        case 0x119cb4u: goto label_119cb4;
        case 0x119d08u: goto label_119d08;
        default: break;
    }

    ctx->pc = 0x119c90u;

    // 0x119c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119c94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119c98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119c9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119ca0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119CA0u;
    SET_GPR_U32(ctx, 31, 0x119CA8u);
    ctx->pc = 0x119CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CA0u;
    // 0x119ca4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119CA0u, 0x119CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CA8u;
label_119ca8:
    // 0x119ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cac: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x119CACu;
    SET_GPR_U32(ctx, 31, 0x119CB4u);
    ctx->pc = 0x119CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119CACu;
    // 0x119cb0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x119CACu, 0x119CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119CB4u;
label_119cb4:
    // 0x119cb4: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x119cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x119cb8: 0x24031268  addiu       $v1, $zero, 0x1268
    ctx->pc = 0x119cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x119cbc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x119cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cc0: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x119cc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x119cc4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x119cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x119cc8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x119cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x119ccc: 0x2484fcb0  addiu       $a0, $a0, -0x350
    ctx->pc = 0x119cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966448));
    // 0x119cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119cd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x119cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119cd8: 0xac800400  sw          $zero, 0x400($a0)
    ctx->pc = 0x119cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 0));
    // 0x119cdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119ce0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x119ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x119ce4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119cec: 0x8463d700  lh          $v1, -0x2900($v1)
    ctx->pc = 0x119cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294956800)));
    // 0x119cf0: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x119CF0u;
    {
        const bool branch_taken_0x119cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x119CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CF0u;
        // 0x119cf4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cf0) {
            ctx->pc = 0x119D08u;
            goto label_119d08;
        }
    }
    ctx->pc = 0x119CF8u;
    // 0x119cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119cfc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x119CFCu;
    {
        const bool branch_taken_0x119cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119CFCu;
        // 0x119d00: 0xac820400  sw          $v0, 0x400($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119cfc) {
            ctx->pc = 0x119D58u;
            goto label_119d58;
        }
    }
    ctx->pc = 0x119D04u;
    // 0x119d04: 0x0  nop
    ctx->pc = 0x119d04u;
    // NOP
label_119d08:
    // 0x119d08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x119d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x119d0c: 0x28c2000c  slti        $v0, $a2, 0xC
    ctx->pc = 0x119d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x119d10: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x119D10u;
    {
        const bool branch_taken_0x119d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D10u;
        // 0x119d14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d10) {
            ctx->pc = 0x119D5Cu;
            goto label_119d5c;
        }
    }
    ctx->pc = 0x119D18u;
    // 0x119d18: 0x24031268  addiu       $v1, $zero, 0x1268
    ctx->pc = 0x119d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x119d1c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x119d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x119d20: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x119d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x119d24: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x119d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x119d28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x119d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x119d2c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x119d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119d34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x119d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x119d38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x119d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x119d3c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x119d40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x119d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x119d44: 0x8463d700  lh          $v1, -0x2900($v1)
    ctx->pc = 0x119d44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294956800)));
    // 0x119d48: 0x1064ffef  beq         $v1, $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x119D48u;
    {
        const bool branch_taken_0x119d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x119D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D48u;
        // 0x119d4c: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d48) {
            ctx->pc = 0x119D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119d08;
        }
    }
    ctx->pc = 0x119D50u;
    // 0x119d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119d54: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x119d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
label_119d58:
    // 0x119d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_119d5c:
    // 0x119d5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119d64: 0x3e00008  jr          $ra
    ctx->pc = 0x119D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D64u;
        // 0x119d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119D6Cu;
}
