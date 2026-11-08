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

// Function: entry_0016faf8
// Address: 0x16faf8 - 0x16fb44
void entry_0016faf8_0x16faf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016faf8_0x16faf8");
#endif

    ctx->pc = 0x16faf8u;

    // 0x16faf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fafc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16fafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16fb00: 0x8f828b70  lw          $v0, -0x7490($gp)
    ctx->pc = 0x16fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937456)));
    // 0x16fb04: 0x8c900020  lw          $s0, 0x20($a0)
    ctx->pc = 0x16fb04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x16fb08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16FB08u;
    {
        const bool branch_taken_0x16fb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB08u;
        // 0x16fb0c: 0x8c830154  lw          $v1, 0x154($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb08) {
            ctx->pc = 0x16FB50u;
            return;
        }
    }
    ctx->pc = 0x16FB10u;
    // 0x16fb10: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x16FB10u;
    {
        const bool branch_taken_0x16fb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB10u;
        // 0x16fb14: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb10) {
            ctx->pc = 0x16FB50u;
            return;
        }
    }
    ctx->pc = 0x16FB18u;
    // 0x16fb18: 0x94620012  lhu         $v0, 0x12($v1)
    ctx->pc = 0x16fb18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x16fb1c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x16fb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x16fb20: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x16FB20u;
    {
        const bool branch_taken_0x16fb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb20) {
            ctx->pc = 0x16FB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FB20u;
            // 0x16fb24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FB54u;
            return;
        }
    }
    ctx->pc = 0x16FB28u;
    // 0x16fb28: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x16fb28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16fb2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x16fb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x16fb30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16FB30u;
    {
        const bool branch_taken_0x16fb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb30) {
            ctx->pc = 0x16FB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FB30u;
            // 0x16fb34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FB54u;
            return;
        }
    }
    ctx->pc = 0x16FB38u;
    // 0x16fb38: 0x8c840390  lw          $a0, 0x390($a0)
    ctx->pc = 0x16fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 912)));
    // 0x16fb3c: 0xc060e88  jal         func_183A20
    ctx->pc = 0x16FB3Cu;
    SET_GPR_U32(ctx, 31, 0x16FB44u);
    ctx->pc = 0x16FB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB3Cu;
    // 0x16fb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x16FB3Cu, 0x16FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB44u;
}
