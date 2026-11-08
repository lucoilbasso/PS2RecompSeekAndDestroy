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

// Function: SetDebugHandler
// Address: 0x1b80b0 - 0x1b8134
void SetDebugHandler_0x1b80b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDebugHandler_0x1b80b0");
#endif

    switch (ctx->pc) {
        case 0x1b8108u: goto label_1b8108;
        case 0x1b8120u: goto label_1b8120;
        default: break;
    }

    ctx->pc = 0x1b80b0u;

    // 0x1b80b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b80b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b80b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b80b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b80b8: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1b80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b80bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b80bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b80c0: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x1b80c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x1b80c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B80C4u;
    {
        const bool branch_taken_0x1b80c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80C4u;
        // 0x1b80c8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80c4) {
            ctx->pc = 0x1B80D8u;
            goto label_1b80d8;
        }
    }
    ctx->pc = 0x1B80CCu;
    // 0x1b80cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b80ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b80d0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B80D0u;
    {
        const bool branch_taken_0x1b80d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80D0u;
        // 0x1b80d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80d0) {
            ctx->pc = 0x1B8124u;
            goto label_1b8124;
        }
    }
    ctx->pc = 0x1B80D8u;
label_1b80d8:
    // 0x1b80d8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1b80d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1b80dc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1b80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b80e0: 0x2442bcf8  addiu       $v0, $v0, -0x4308
    ctx->pc = 0x1b80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950136));
    // 0x1b80e4: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x1b80e4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b80e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b80e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b80ec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1b80ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b80f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B80F0u;
    {
        const bool branch_taken_0x1b80f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B80F0u;
        // 0x1b80f4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b80f0) {
            ctx->pc = 0x1B8110u;
            goto label_1b8110;
        }
    }
    ctx->pc = 0x1B80F8u;
    // 0x1b80f8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b80f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b80fc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b80fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8100: 0xc06bc44  jal         func_1AF110
    ctx->pc = 0x1B8100u;
    SET_GPR_U32(ctx, 31, 0x1B8108u);
    ctx->pc = 0x1B8104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8100u;
    // 0x1b8104: 0x24a587c0  addiu       $a1, $a1, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF110u, 0x1B8100u, 0x1B8108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8108u;
label_1b8108:
    // 0x1b8108: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B8108u;
    {
        const bool branch_taken_0x1b8108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8108u;
        // 0x1b810c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8108) {
            ctx->pc = 0x1B8124u;
            goto label_1b8124;
        }
    }
    ctx->pc = 0x1B8110u;
label_1b8110:
    // 0x1b8110: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b8110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b8114: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b8114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8118: 0xc06bc48  jal         func_1AF120
    ctx->pc = 0x1B8118u;
    SET_GPR_U32(ctx, 31, 0x1B8120u);
    ctx->pc = 0x1B811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8118u;
    // 0x1b811c: 0x24a587c0  addiu       $a1, $a1, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF120u, 0x1B8118u, 0x1B8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8120u;
label_1b8120:
    // 0x1b8120: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8124:
    // 0x1b8124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b812c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B812Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B812Cu;
        // 0x1b8130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B812Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8134u;
}
