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

// Function: entry_00140a58
// Address: 0x140a58 - 0x140ad8
void entry_00140a58_0x140a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140a58_0x140a58");
#endif

    switch (ctx->pc) {
        case 0x140a74u: goto label_140a74;
        default: break;
    }

    ctx->pc = 0x140a58u;

    // 0x140a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x140a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x140a60: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x140a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x140a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x140a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x140a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x140a6c: 0xc04fbc0  jal         func_13EF00
    ctx->pc = 0x140A6Cu;
    SET_GPR_U32(ctx, 31, 0x140A74u);
    ctx->pc = 0x140A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A6Cu;
    // 0x140a70: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF00u, 0x140A6Cu, 0x140A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A74u;
label_140a74:
    // 0x140a74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x140a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a78: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x140a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x140a7c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x140a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x140a80: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x140a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x140a84: 0x24632738  addiu       $v1, $v1, 0x2738
    ctx->pc = 0x140a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10040));
    // 0x140a88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x140a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x140a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x140a90: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x140a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x140a94: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x140a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x140a98: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x140a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140a9c: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x140a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x140aa0: 0x24081118  addiu       $t0, $zero, 0x1118
    ctx->pc = 0x140aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x140aa4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x140aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x140aa8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x140AA8u;
    {
        const bool branch_taken_0x140aa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x140AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AA8u;
        // 0x140aac: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140aa8) {
            ctx->pc = 0x140B00u;
            return;
        }
    }
    ctx->pc = 0x140AB0u;
    // 0x140ab0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x140ab0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x140ab4: 0x14480012  bne         $v0, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x140AB4u;
    {
        const bool branch_taken_0x140ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x140ab4) {
            ctx->pc = 0x140B00u;
            return;
        }
    }
    ctx->pc = 0x140ABCu;
    // 0x140abc: 0x8e450690  lw          $a1, 0x690($s2)
    ctx->pc = 0x140abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x140ac0: 0x8ca20c0c  lw          $v0, 0xC0C($a1)
    ctx->pc = 0x140ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3084)));
    // 0x140ac4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x140AC4u;
    {
        const bool branch_taken_0x140ac4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x140AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AC4u;
        // 0x140ac8: 0x23180  sll         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ac4) {
            ctx->pc = 0x140AD8u;
            return;
        }
    }
    ctx->pc = 0x140ACCu;
    // 0x140acc: 0x8ca201b4  lw          $v0, 0x1B4($a1)
    ctx->pc = 0x140accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 436)));
    // 0x140ad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x140AD0u;
    {
        const bool branch_taken_0x140ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AD0u;
        // 0x140ad4: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140ad0) {
            ctx->pc = 0x140ADCu;
            return;
        }
    }
    ctx->pc = 0x140AD8u;
}
