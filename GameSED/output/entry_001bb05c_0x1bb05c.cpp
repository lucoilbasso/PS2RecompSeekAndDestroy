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

// Function: entry_001bb05c
// Address: 0x1bb05c - 0x1bb0d0
void entry_001bb05c_0x1bb05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb05c_0x1bb05c");
#endif

    switch (ctx->pc) {
        case 0x1bb064u: goto label_1bb064;
        default: break;
    }

    ctx->pc = 0x1bb05cu;

    // 0x1bb05c: 0xc06e976  jal         func_1BA5D8
    ctx->pc = 0x1BB05Cu;
    SET_GPR_U32(ctx, 31, 0x1BB064u);
    ctx->pc = 0x1BB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB05Cu;
    // 0x1bb060: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA5D8u, 0x1BB05Cu, 0x1BB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB064u;
label_1bb064:
    // 0x1bb064: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1BB064u;
    {
        const bool branch_taken_0x1bb064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB064u;
        // 0x1bb068: 0x3c080025  lui         $t0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb064) {
            ctx->pc = 0x1BB19Cu;
            return;
        }
    }
    ctx->pc = 0x1BB06Cu;
    // 0x1bb06c: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x1bb06cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x1bb070: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1bb070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1bb074: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x1bb074u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    // 0x1bb078: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x1bb078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x1bb07c: 0x2664d180  addiu       $a0, $s3, -0x2E80
    ctx->pc = 0x1bb07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294955392));
    // 0x1bb080: 0x2505d240  addiu       $a1, $t0, -0x2DC0
    ctx->pc = 0x1bb080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955584));
    // 0x1bb084: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bb084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb088: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1bb088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb08c: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x1bb08cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bb090: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1bb090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1bb094: 0xa243000d  sb          $v1, 0xD($s2)
    ctx->pc = 0x1bb094u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb098: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x1bb098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1bb09c: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x1bb09cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x1bb0a0: 0xa242000e  sb          $v0, 0xE($s2)
    ctx->pc = 0x1bb0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bb0a4: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x1bb0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
    // 0x1bb0a8: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x1bb0a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1bb0ac: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB0ACu;
    {
        const bool branch_taken_0x1bb0ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1BB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0ACu;
        // 0x1bb0b0: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0ac) {
            ctx->pc = 0x1BB0D0u;
            return;
        }
    }
    ctx->pc = 0x1BB0B4u;
    // 0x1bb0b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BB0B4u;
    {
        const bool branch_taken_0x1bb0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0B4u;
        // 0x1bb0b8: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0b4) {
            ctx->pc = 0x1BB0E0u;
            return;
        }
    }
    ctx->pc = 0x1BB0BCu;
    // 0x1bb0bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb0c0: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB0C0u;
    {
        const bool branch_taken_0x1bb0c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0C0u;
        // 0x1bb0c4: 0x24020924  addiu       $v0, $zero, 0x924 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0c0) {
            ctx->pc = 0x1BB0DCu;
            return;
        }
    }
    ctx->pc = 0x1BB0C8u;
    // 0x1bb0c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB0C8u;
    {
        const bool branch_taken_0x1bb0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb0c8) {
            ctx->pc = 0x1BB0E0u;
            return;
        }
    }
    ctx->pc = 0x1BB0D0u;
}
