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

// Function: entry_0014a9b4
// Address: 0x14a9b4 - 0x14a9e8
void entry_0014a9b4_0x14a9b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a9b4_0x14a9b4");
#endif

    ctx->pc = 0x14a9b4u;

    // 0x14a9b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x14a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14a9b8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14a9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x14a9bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14A9BCu;
    {
        const bool branch_taken_0x14a9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a9bc) {
            ctx->pc = 0x14A9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A9BCu;
            // 0x14a9c0: 0x8e2401ac  lw          $a0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A9ECu;
            return;
        }
    }
    ctx->pc = 0x14A9C4u;
    // 0x14a9c4: 0x8e450178  lw          $a1, 0x178($s2)
    ctx->pc = 0x14a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x14a9c8: 0x4a20008  bltzl       $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A9C8u;
    {
        const bool branch_taken_0x14a9c8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14a9c8) {
            ctx->pc = 0x14A9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A9C8u;
            // 0x14a9cc: 0x8e2401ac  lw          $a0, 0x1AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A9ECu;
            return;
        }
    }
    ctx->pc = 0x14A9D0u;
    // 0x14a9d0: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x14a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x14a9d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A9D4u;
    {
        const bool branch_taken_0x14a9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A9D4u;
        // 0x14a9d8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a9d4) {
            ctx->pc = 0x14A9E8u;
            return;
        }
    }
    ctx->pc = 0x14A9DCu;
    // 0x14a9dc: 0x8e4801b4  lw          $t0, 0x1B4($s2)
    ctx->pc = 0x14a9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 436)));
    // 0x14a9e0: 0xc041228  jal         func_1048A0
    ctx->pc = 0x14A9E0u;
    SET_GPR_U32(ctx, 31, 0x14A9E8u);
    ctx->pc = 0x14A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9E0u;
    // 0x14a9e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x14A9E0u, 0x14A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9E8u;
}
