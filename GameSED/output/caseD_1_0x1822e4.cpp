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

// Function: caseD_1
// Address: 0x1822e4 - 0x182350
void caseD_1_0x1822e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1822e4");
#endif

    switch (ctx->pc) {
        case 0x182344u: goto label_182344;
        default: break;
    }

    ctx->pc = 0x1822e4u;

    // 0x1822e4: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x1822e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1822e8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1822e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822ec: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1822ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822f0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1822F0u;
    {
        const bool branch_taken_0x1822f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822F0u;
        // 0x1822f4: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822f0) {
            ctx->pc = 0x182380u;
            return;
        }
    }
    ctx->pc = 0x1822F8u;
    // 0x1822f8: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1822F8u;
    {
        const bool branch_taken_0x1822f8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1822FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822F8u;
        // 0x1822fc: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822f8) {
            ctx->pc = 0x182380u;
            return;
        }
    }
    ctx->pc = 0x182300u;
    // 0x182300: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x182300u;
    {
        const bool branch_taken_0x182300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182300u;
        // 0x182304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182300) {
            ctx->pc = 0x182384u;
            return;
        }
    }
    ctx->pc = 0x182308u;
    // 0x182308: 0x1211c0  sll         $v0, $s2, 7
    ctx->pc = 0x182308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x18230c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18230cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x182310: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x182310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x182314: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x182314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x182318: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x182318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18231c: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x18231cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x182320: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x182320u;
    {
        const bool branch_taken_0x182320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182320u;
        // 0x182324: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182320) {
            ctx->pc = 0x182384u;
            return;
        }
    }
    ctx->pc = 0x182328u;
    // 0x182328: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x182328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18232c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x182330: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182330u;
    {
        const bool branch_taken_0x182330 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x182334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182330u;
        // 0x182334: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182330) {
            ctx->pc = 0x182350u;
            return;
        }
    }
    ctx->pc = 0x182338u;
    // 0x182338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18233c: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x18233Cu;
    SET_GPR_U32(ctx, 31, 0x182344u);
    ctx->pc = 0x182340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18233Cu;
    // 0x182340: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x18233Cu, 0x182344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182344u;
label_182344:
    // 0x182344: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x182344u;
    {
        const bool branch_taken_0x182344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182344) {
            ctx->pc = 0x18235Cu;
            return;
        }
    }
    ctx->pc = 0x18234Cu;
    // 0x18234c: 0x0  nop
    ctx->pc = 0x18234cu;
    // NOP
    ctx->pc = 0x182350u;
}
