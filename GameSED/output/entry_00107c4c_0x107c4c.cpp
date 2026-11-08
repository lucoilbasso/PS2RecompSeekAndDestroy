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

// Function: entry_00107c4c
// Address: 0x107c4c - 0x107ce8
void entry_00107c4c_0x107c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107c4c_0x107c4c");
#endif

    switch (ctx->pc) {
        case 0x107c64u: goto label_107c64;
        case 0x107c80u: goto label_107c80;
        case 0x107ca8u: goto label_107ca8;
        case 0x107cccu: goto label_107ccc;
        default: break;
    }

    ctx->pc = 0x107c4cu;

    // 0x107c4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x107c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x107c50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x107c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x107c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x107c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x107c58: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x107c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x107c5c: 0xc04110c  jal         func_104430
    ctx->pc = 0x107C5Cu;
    SET_GPR_U32(ctx, 31, 0x107C64u);
    ctx->pc = 0x107C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C5Cu;
    // 0x107c60: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x107C5Cu, 0x107C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C64u;
label_107c64:
    // 0x107c64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x107c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c68: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x107c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107c6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107c70: 0x507500c5  beql        $v1, $s5, . + 4 + (0xC5 << 2)
    ctx->pc = 0x107C70u;
    {
        const bool branch_taken_0x107c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x107c70) {
            ctx->pc = 0x107C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107C70u;
            // 0x107c74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F88u;
            return;
        }
    }
    ctx->pc = 0x107C78u;
    // 0x107c78: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107C78u;
    SET_GPR_U32(ctx, 31, 0x107C80u);
    ctx->pc = 0x107C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C78u;
    // 0x107c7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107C78u, 0x107C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C80u;
label_107c80:
    // 0x107c80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x107c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c84: 0x1a200038  blez        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x107C84u;
    {
        const bool branch_taken_0x107c84 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x107C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C84u;
        // 0x107c88: 0x24021846  addiu       $v0, $zero, 0x1846 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6214));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c84) {
            ctx->pc = 0x107D68u;
            return;
        }
    }
    ctx->pc = 0x107C8Cu;
    // 0x107c8c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x107c8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107c90: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x107C90u;
    {
        const bool branch_taken_0x107c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C90u;
        // 0x107c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c90) {
            ctx->pc = 0x107D68u;
            return;
        }
    }
    ctx->pc = 0x107C98u;
    // 0x107c98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x107c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x107c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ca0: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x107CA0u;
    SET_GPR_U32(ctx, 31, 0x107CA8u);
    ctx->pc = 0x107CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CA0u;
    // 0x107ca4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x107CA0u, 0x107CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CA8u;
label_107ca8:
    // 0x107ca8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x107ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cac: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x107CACu;
    {
        const bool branch_taken_0x107cac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CACu;
        // 0x107cb0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cac) {
            ctx->pc = 0x107D18u;
            return;
        }
    }
    ctx->pc = 0x107CB4u;
    // 0x107cb4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x107cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107cb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x107cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107cbc: 0x10550014  beq         $v0, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x107CBCu;
    {
        const bool branch_taken_0x107cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x107CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CBCu;
        // 0x107cc0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cbc) {
            ctx->pc = 0x107D10u;
            return;
        }
    }
    ctx->pc = 0x107CC4u;
    // 0x107cc4: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x107CC4u;
    SET_GPR_U32(ctx, 31, 0x107CCCu);
    ctx->pc = 0x107CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107CC4u;
    // 0x107cc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x107CC4u, 0x107CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107CCCu;
label_107ccc:
    // 0x107ccc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107cccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107cd0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107cd4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x107cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x107cd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x107CD8u;
    {
        const bool branch_taken_0x107cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CD8u;
        // 0x107cdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cd8) {
            ctx->pc = 0x107D08u;
            return;
        }
    }
    ctx->pc = 0x107CE0u;
    // 0x107ce0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x107CE0u;
    {
        const bool branch_taken_0x107ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CE0u;
        // 0x107ce4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ce0) {
            ctx->pc = 0x107D04u;
            return;
        }
    }
    ctx->pc = 0x107CE8u;
}
