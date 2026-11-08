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

// Function: entry_001a35c8
// Address: 0x1a35c8 - 0x1a3630
void entry_001a35c8_0x1a35c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a35c8_0x1a35c8");
#endif

    switch (ctx->pc) {
        case 0x1a35dcu: goto label_1a35dc;
        default: break;
    }

    ctx->pc = 0x1a35c8u;

    // 0x1a35c8: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x1A35C8u;
    {
        const bool branch_taken_0x1a35c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35C8u;
        // 0x1a35cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35c8) {
            ctx->pc = 0x1A3808u;
            return;
        }
    }
    ctx->pc = 0x1A35D0u;
    // 0x1a35d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a35d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a35d4: 0xc0688f4  jal         func_1A23D0
    ctx->pc = 0x1A35D4u;
    SET_GPR_U32(ctx, 31, 0x1A35DCu);
    ctx->pc = 0x1A35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A35D4u;
    // 0x1a35d8: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A23D0u, 0x1A35D4u, 0x1A35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A35DCu;
label_1a35dc:
    // 0x1a35dc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a35dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a35e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a35e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a35e4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1a35e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a35e8: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x1A35E8u;
    {
        const bool branch_taken_0x1a35e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A35ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A35E8u;
        // 0x1a35ec: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a35e8) {
            ctx->pc = 0x1A3810u;
            return;
        }
    }
    ctx->pc = 0x1A35F0u;
    // 0x1a35f0: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x1a35f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1a35f4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1a35f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a35f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a35fc: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x1a35fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a3600: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a3600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3604: 0x4610038  bgez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A3604u;
    {
        const bool branch_taken_0x1a3604 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3604u;
        // 0x1a3608: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3604) {
            ctx->pc = 0x1A36E8u;
            return;
        }
    }
    ctx->pc = 0x1A360Cu;
    // 0x1a360c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a3610: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1A3610u;
    {
        const bool branch_taken_0x1a3610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A3614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3610u;
        // 0x1a3614: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3610) {
            ctx->pc = 0x1A3704u;
            return;
        }
    }
    ctx->pc = 0x1A3618u;
    // 0x1a3618: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a3618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a361c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A361Cu;
    {
        const bool branch_taken_0x1a361c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A3620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A361Cu;
        // 0x1a3620: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a361c) {
            ctx->pc = 0x1A3630u;
            return;
        }
    }
    ctx->pc = 0x1A3624u;
    // 0x1a3624: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1A3624u;
    {
        const bool branch_taken_0x1a3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3624u;
        // 0x1a3628: 0xa600000a  sh          $zero, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3624) {
            ctx->pc = 0x1A36E8u;
            return;
        }
    }
    ctx->pc = 0x1A362Cu;
    // 0x1a362c: 0x0  nop
    ctx->pc = 0x1a362cu;
    // NOP
    ctx->pc = 0x1a3630u;
}
