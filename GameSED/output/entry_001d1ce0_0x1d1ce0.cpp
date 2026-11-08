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

// Function: entry_001d1ce0
// Address: 0x1d1ce0 - 0x1d1d44
void entry_001d1ce0_0x1d1ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1ce0_0x1d1ce0");
#endif

    switch (ctx->pc) {
        case 0x1d1d34u: goto label_1d1d34;
        default: break;
    }

    ctx->pc = 0x1d1ce0u;

    // 0x1d1ce0: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x1d1ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
    // 0x1d1ce4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D1CE4u;
    {
        const bool branch_taken_0x1d1ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CE4u;
        // 0x1d1ce8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ce4) {
            ctx->pc = 0x1D1D44u;
            return;
        }
    }
    ctx->pc = 0x1D1CECu;
    // 0x1d1cec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1cf0: 0xa3a201c0  sb          $v0, 0x1C0($sp)
    ctx->pc = 0x1d1cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 448), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1cf4: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x1d1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1d1cf8: 0xa3b101c1  sb          $s1, 0x1C1($sp)
    ctx->pc = 0x1d1cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 449), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d1cfc: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x1d1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x1d1d00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1d1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1d1d04: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1d04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1d08: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1d0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1d10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1d14: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d1d18: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1d18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1d1c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1d20: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1D20u;
    {
        const bool branch_taken_0x1d1d20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D20u;
        // 0x1d1d24: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d20) {
            ctx->pc = 0x1D1D44u;
            return;
        }
    }
    ctx->pc = 0x1D1D28u;
    // 0x1d1d28: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1d2c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D1D34u);
    ctx->pc = 0x1D1D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D2Cu;
    // 0x1d1d30: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1D2Cu, 0x1D1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D34u;
label_1d1d34:
    // 0x1d1d34: 0x144002ef  bnez        $v0, . + 4 + (0x2EF << 2)
    ctx->pc = 0x1D1D34u;
    {
        const bool branch_taken_0x1d1d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D34u;
        // 0x1d1d38: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d34) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D1D3Cu;
    // 0x1d1d3c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d1d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1d40: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d1d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d1d44u;
}
