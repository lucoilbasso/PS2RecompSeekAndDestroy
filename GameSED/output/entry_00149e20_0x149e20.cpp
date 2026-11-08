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

// Function: entry_00149e20
// Address: 0x149e20 - 0x149e60
void entry_00149e20_0x149e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149e20_0x149e20");
#endif

    switch (ctx->pc) {
        case 0x149e38u: goto label_149e38;
        default: break;
    }

    ctx->pc = 0x149e20u;

    // 0x149e20: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x149e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149e24: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x149e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x149e28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x149e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149e2c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x149e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x149e30: 0xc05250a  jal         func_149428
    ctx->pc = 0x149E30u;
    SET_GPR_U32(ctx, 31, 0x149E38u);
    ctx->pc = 0x149E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E30u;
    // 0x149e34: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149E30u, 0x149E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E38u;
label_149e38:
    // 0x149e38: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x149e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x149e3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x149E3Cu;
    {
        const bool branch_taken_0x149e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E3Cu;
        // 0x149e40: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e3c) {
            ctx->pc = 0x149E60u;
            return;
        }
    }
    ctx->pc = 0x149E44u;
    // 0x149e44: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x149e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x149e48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149E48u;
    {
        const bool branch_taken_0x149e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E48u;
        // 0x149e4c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e48) {
            ctx->pc = 0x149E60u;
            return;
        }
    }
    ctx->pc = 0x149E50u;
    // 0x149e50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x149e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149e54: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x149e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x149e58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149e5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x149e60u;
}
