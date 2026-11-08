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

// Function: entry_001534c4
// Address: 0x1534c4 - 0x153520
void entry_001534c4_0x1534c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001534c4_0x1534c4");
#endif

    switch (ctx->pc) {
        case 0x1534f0u: goto label_1534f0;
        default: break;
    }

    ctx->pc = 0x1534c4u;

    // 0x1534c4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x1534c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1534c8: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1534C8u;
    {
        const bool branch_taken_0x1534c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1534CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534C8u;
        // 0x1534cc: 0x262506dc  addiu       $a1, $s1, 0x6DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534c8) {
            ctx->pc = 0x153524u;
            return;
        }
    }
    ctx->pc = 0x1534D0u;
    // 0x1534d0: 0x8e2401ac  lw          $a0, 0x1AC($s1)
    ctx->pc = 0x1534d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x1534d4: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1534D4u;
    {
        const bool branch_taken_0x1534d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1534d4) {
            ctx->pc = 0x1534D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1534D4u;
            // 0x1534d8: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153528u;
            return;
        }
    }
    ctx->pc = 0x1534DCu;
    // 0x1534dc: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1534dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1534e0: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1534E0u;
    {
        const bool branch_taken_0x1534e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1534e0) {
            ctx->pc = 0x1534E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1534E0u;
            // 0x1534e4: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153528u;
            return;
        }
    }
    ctx->pc = 0x1534E8u;
    // 0x1534e8: 0xc0506dc  jal         func_141B70
    ctx->pc = 0x1534E8u;
    SET_GPR_U32(ctx, 31, 0x1534F0u);
    ctx->pc = 0x141B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141B70u, 0x1534E8u, 0x1534F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1534F0u;
label_1534f0:
    // 0x1534f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1534F0u;
    {
        const bool branch_taken_0x1534f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534F0u;
        // 0x1534f4: 0x32e20001  andi        $v0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534f0) {
            ctx->pc = 0x153520u;
            return;
        }
    }
    ctx->pc = 0x1534F8u;
    // 0x1534f8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1534F8u;
    {
        const bool branch_taken_0x1534f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1534FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1534F8u;
        // 0x1534fc: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1534f8) {
            ctx->pc = 0x1535DCu;
            return;
        }
    }
    ctx->pc = 0x153500u;
    // 0x153500: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x153500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x153504: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x153504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x153508: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x153508u;
    {
        const bool branch_taken_0x153508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x153508) {
            ctx->pc = 0x15350Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153508u;
            // 0x15350c: 0x262506dc  addiu       $a1, $s1, 0x6DC (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1756));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153524u;
            return;
        }
    }
    ctx->pc = 0x153510u;
    // 0x153510: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x153510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x153514: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x153514u;
    {
        const bool branch_taken_0x153514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153514u;
        // 0x153518: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153514) {
            ctx->pc = 0x1535DCu;
            return;
        }
    }
    ctx->pc = 0x15351Cu;
    // 0x15351c: 0x0  nop
    ctx->pc = 0x15351cu;
    // NOP
    ctx->pc = 0x153520u;
}
