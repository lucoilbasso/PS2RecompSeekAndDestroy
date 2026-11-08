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

// Function: entry_001b8aa4
// Address: 0x1b8aa4 - 0x1b8b10
void entry_001b8aa4_0x1b8aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8aa4_0x1b8aa4");
#endif

    switch (ctx->pc) {
        case 0x1b8ab8u: goto label_1b8ab8;
        case 0x1b8accu: goto label_1b8acc;
        case 0x1b8af4u: goto label_1b8af4;
        default: break;
    }

    ctx->pc = 0x1b8aa4u;

    // 0x1b8aa4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1b8aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1b8aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8aac: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x1b8aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x1b8ab0: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1B8AB0u;
    SET_GPR_U32(ctx, 31, 0x1B8AB8u);
    ctx->pc = 0x1B8AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8AB0u;
    // 0x1b8ab4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1B8AB0u, 0x1B8AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AB8u;
label_1b8ab8:
    // 0x1b8ab8: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1b8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1b8abc: 0x1060fff0  beqz        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B8ABCu;
    {
        const bool branch_taken_0x1b8abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8ABCu;
        // 0x1b8ac0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8abc) {
            ctx->pc = 0x1B8A80u;
            return;
        }
    }
    ctx->pc = 0x1B8AC4u;
    // 0x1b8ac4: 0xc06e6ea  jal         func_1B9BA8
    ctx->pc = 0x1B8AC4u;
    SET_GPR_U32(ctx, 31, 0x1B8ACCu);
    ctx->pc = 0x1B9BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9BA8u, 0x1B8AC4u, 0x1B8ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8ACCu;
label_1b8acc:
    // 0x1b8acc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ad0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8ad4: 0x118203  sra         $s0, $s1, 8
    ctx->pc = 0x1b8ad4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 8));
    // 0x1b8ad8: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B8AD8u;
    {
        const bool branch_taken_0x1b8ad8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AD8u;
        // 0x1b8adc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ad8) {
            ctx->pc = 0x1B8B18u;
            return;
        }
    }
    ctx->pc = 0x1B8AE0u;
    // 0x1b8ae0: 0x8c43c024  lw          $v1, -0x3FDC($v0)
    ctx->pc = 0x1b8ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950948)));
    // 0x1b8ae4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B8AE4u;
    {
        const bool branch_taken_0x1b8ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8AE4u;
        // 0x1b8ae8: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ae4) {
            ctx->pc = 0x1B8B10u;
            return;
        }
    }
    ctx->pc = 0x1B8AECu;
    // 0x1b8aec: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1B8AECu;
    SET_GPR_U32(ctx, 31, 0x1B8AF4u);
    ctx->pc = 0x1B8AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8AECu;
    // 0x1b8af0: 0x2484adc8  addiu       $a0, $a0, -0x5238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1B8AECu, 0x1B8AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8AF4u;
label_1b8af4:
    // 0x1b8af4: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1b8af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1b8af8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b8af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8afc: 0x2484adf0  addiu       $a0, $a0, -0x5210
    ctx->pc = 0x1b8afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946288));
    // 0x1b8b00: 0x322800ff  andi        $t0, $s1, 0xFF
    ctx->pc = 0x1b8b00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1b8b04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b8b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8b08: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1B8B08u;
    SET_GPR_U32(ctx, 31, 0x1B8B10u);
    ctx->pc = 0x1B8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8B08u;
    // 0x1b8b0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1B8B08u, 0x1B8B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8B10u;
}
