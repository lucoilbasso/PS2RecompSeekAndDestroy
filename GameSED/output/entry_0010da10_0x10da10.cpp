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

// Function: entry_0010da10
// Address: 0x10da10 - 0x10da58
void entry_0010da10_0x10da10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010da10_0x10da10");
#endif

    switch (ctx->pc) {
        case 0x10da1cu: goto label_10da1c;
        default: break;
    }

    ctx->pc = 0x10da10u;

    // 0x10da10: 0x266501dc  addiu       $a1, $s3, 0x1DC
    ctx->pc = 0x10da10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 476));
    // 0x10da14: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x10DA14u;
    SET_GPR_U32(ctx, 31, 0x10DA1Cu);
    ctx->pc = 0x10DA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA14u;
    // 0x10da18: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x10DA14u, 0x10DA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA1Cu;
label_10da1c:
    // 0x10da1c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x10da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x10da20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10da20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10da24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10da24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10da28: 0x14640018  bne         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10DA28u;
    {
        const bool branch_taken_0x10da28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA28u;
        // 0x10da2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da28) {
            ctx->pc = 0x10DA8Cu;
            return;
        }
    }
    ctx->pc = 0x10DA30u;
    // 0x10da30: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x10da30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x10da34: 0x24021116  addiu       $v0, $zero, 0x1116
    ctx->pc = 0x10da34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4374));
    // 0x10da38: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10DA38u;
    {
        const bool branch_taken_0x10da38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10da38) {
            ctx->pc = 0x10DA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DA38u;
            // 0x10da3c: 0x8e6301dc  lw          $v1, 0x1DC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DA80u;
            return;
        }
    }
    ctx->pc = 0x10DA40u;
    // 0x10da40: 0x8e6201e8  lw          $v0, 0x1E8($s3)
    ctx->pc = 0x10da40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 488)));
    // 0x10da44: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x10da44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da48: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10DA48u;
    {
        const bool branch_taken_0x10da48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA48u;
        // 0x10da4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da48) {
            ctx->pc = 0x10DA8Cu;
            return;
        }
    }
    ctx->pc = 0x10DA50u;
    // 0x10da50: 0x266501ec  addiu       $a1, $s3, 0x1EC
    ctx->pc = 0x10da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 492));
    // 0x10da54: 0x0  nop
    ctx->pc = 0x10da54u;
    // NOP
    ctx->pc = 0x10da58u;
}
