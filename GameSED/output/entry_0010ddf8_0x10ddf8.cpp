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

// Function: entry_0010ddf8
// Address: 0x10ddf8 - 0x10de48
void entry_0010ddf8_0x10ddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ddf8_0x10ddf8");
#endif

    switch (ctx->pc) {
        case 0x10de18u: goto label_10de18;
        default: break;
    }

    ctx->pc = 0x10ddf8u;

    // 0x10ddf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ddfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10ddfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10de00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10de00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10de08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10de08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de0c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10de10: 0xc04110c  jal         func_104430
    ctx->pc = 0x10DE10u;
    SET_GPR_U32(ctx, 31, 0x10DE18u);
    ctx->pc = 0x10DE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE10u;
    // 0x10de14: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10DE10u, 0x10DE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DE18u;
label_10de18:
    // 0x10de18: 0x24030946  addiu       $v1, $zero, 0x946
    ctx->pc = 0x10de18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2374));
    // 0x10de1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10de1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10de20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10de20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10de24: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10de24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10de28: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DE28u;
    {
        const bool branch_taken_0x10de28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE28u;
        // 0x10de2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de28) {
            ctx->pc = 0x10DE48u;
            return;
        }
    }
    ctx->pc = 0x10DE30u;
    // 0x10de30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10de30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10de34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10de34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10de38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10de38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10de3c: 0x804171a  j           func_105C68
    ctx->pc = 0x10DE3Cu;
    ctx->pc = 0x10DE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE3Cu;
    // 0x10de40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    ApSCDEntSetSystemStatus__Fi_0x105c68(rdram, ctx, runtime); return;
    ctx->pc = 0x10DE44u;
    // 0x10de44: 0x0  nop
    ctx->pc = 0x10de44u;
    // NOP
    ctx->pc = 0x10de48u;
}
