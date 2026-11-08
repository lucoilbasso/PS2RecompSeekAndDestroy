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

// Function: entry_001bab28
// Address: 0x1bab28 - 0x1bab5c
void entry_001bab28_0x1bab28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bab28_0x1bab28");
#endif

    switch (ctx->pc) {
        case 0x1bab3cu: goto label_1bab3c;
        default: break;
    }

    ctx->pc = 0x1bab28u;

    // 0x1bab28: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1bab28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1bab2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab30: 0x34a50592  ori         $a1, $a1, 0x592
    ctx->pc = 0x1bab30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1426);
    // 0x1bab34: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1BAB34u;
    SET_GPR_U32(ctx, 31, 0x1BAB3Cu);
    ctx->pc = 0x1BAB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB34u;
    // 0x1bab38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1BAB34u, 0x1BAB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB3Cu;
label_1bab3c:
    // 0x1bab3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bab3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bab40: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BAB40u;
    {
        const bool branch_taken_0x1bab40 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1bab40) {
            ctx->pc = 0x1BAB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAB40u;
            // 0x1bab44: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAB8Cu;
            return;
        }
    }
    ctx->pc = 0x1BAB48u;
    // 0x1bab48: 0x8ee2c090  lw          $v0, -0x3F70($s7)
    ctx->pc = 0x1bab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294951056)));
    // 0x1bab4c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAB4Cu;
    {
        const bool branch_taken_0x1bab4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB4Cu;
        // 0x1bab50: 0x8ea6c0d0  lw          $a2, -0x3F30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab4c) {
            ctx->pc = 0x1BAB5Cu;
            return;
        }
    }
    ctx->pc = 0x1BAB54u;
    // 0x1bab54: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1BAB54u;
    SET_GPR_U32(ctx, 31, 0x1BAB5Cu);
    ctx->pc = 0x1BAB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB54u;
    // 0x1bab58: 0x26c4b010  addiu       $a0, $s6, -0x4FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1BAB54u, 0x1BAB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB5Cu;
}
