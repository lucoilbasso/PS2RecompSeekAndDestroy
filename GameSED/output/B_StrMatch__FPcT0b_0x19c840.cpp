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

// Function: B_StrMatch__FPcT0b
// Address: 0x19c840 - 0x19c8c4
void B_StrMatch__FPcT0b_0x19c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_StrMatch__FPcT0b_0x19c840");
#endif

    switch (ctx->pc) {
        case 0x19c848u: goto label_19c848;
        default: break;
    }

    ctx->pc = 0x19c840u;

    // 0x19c840: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19C840u;
    {
        const bool branch_taken_0x19c840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C840u;
        // 0x19c844: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c840) {
            ctx->pc = 0x19C8A0u;
            goto label_19c8a0;
        }
    }
    ctx->pc = 0x19C848u;
label_19c848:
    // 0x19c848: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x19c848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x19c84c: 0x80870000  lb          $a3, 0x0($a0)
    ctx->pc = 0x19c84cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c850: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x19C850u;
    {
        const bool branch_taken_0x19c850 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C850u;
        // 0x19c854: 0x21e03  sra         $v1, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c850) {
            ctx->pc = 0x19C88Cu;
            goto label_19c88c;
        }
    }
    ctx->pc = 0x19C858u;
    // 0x19c858: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x19c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x19c85c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19c85cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19c860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C860u;
    {
        const bool branch_taken_0x19c860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C860u;
        // 0x19c864: 0x24e2ff9f  addiu       $v0, $a3, -0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c860) {
            ctx->pc = 0x19C878u;
            goto label_19c878;
        }
    }
    ctx->pc = 0x19C868u;
    // 0x19c868: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x19c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x19c86c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19c870: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x19c870u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x19c874: 0x24e2ff9f  addiu       $v0, $a3, -0x61
    ctx->pc = 0x19c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
label_19c878:
    // 0x19c878: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x19c878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x19c87c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C87Cu;
    {
        const bool branch_taken_0x19c87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C87Cu;
        // 0x19c880: 0x24e2ffe0  addiu       $v0, $a3, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c87c) {
            ctx->pc = 0x19C88Cu;
            goto label_19c88c;
        }
    }
    ctx->pc = 0x19C884u;
    // 0x19c884: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x19c888: 0x23e03  sra         $a3, $v0, 24
    ctx->pc = 0x19c888u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
label_19c88c:
    // 0x19c88c: 0x54e30007  bnel        $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19C88Cu;
    {
        const bool branch_taken_0x19c88c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x19c88c) {
            ctx->pc = 0x19C890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C88Cu;
            // 0x19c890: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C8ACu;
            goto label_19c8ac;
        }
    }
    ctx->pc = 0x19C894u;
    // 0x19c894: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19c898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19c89c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c89cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19c8a0:
    // 0x19c8a0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19C8A0u;
    {
        const bool branch_taken_0x19c8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8A0u;
        // 0x19c8a4: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8a0) {
            ctx->pc = 0x19C848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c848;
        }
    }
    ctx->pc = 0x19C8A8u;
    // 0x19c8a8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x19c8a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19c8ac:
    // 0x19c8ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C8ACu;
    {
        const bool branch_taken_0x19c8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8ACu;
        // 0x19c8b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8ac) {
            ctx->pc = 0x19C8BCu;
            goto label_19c8bc;
        }
    }
    ctx->pc = 0x19C8B4u;
    // 0x19c8b4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x19c8b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19c8b8: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x19c8b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_19c8bc:
    // 0x19c8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8BCu;
        // 0x19c8c0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C8C4u;
}
