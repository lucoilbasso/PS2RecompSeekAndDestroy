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

// Function: entry_001d1c3c
// Address: 0x1d1c3c - 0x1d1c84
void entry_001d1c3c_0x1d1c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1c3c_0x1d1c3c");
#endif

    switch (ctx->pc) {
        case 0x1d1c74u: goto label_1d1c74;
        default: break;
    }

    ctx->pc = 0x1d1c3cu;

    // 0x1d1c3c: 0x24e2c3c0  addiu       $v0, $a3, -0x3C40
    ctx->pc = 0x1d1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951872));
    // 0x1d1c40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d1c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d1c44: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d1c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d1c48: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d1c4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1c50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1c54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d1c58: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d1c58u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d1c5c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d1c60: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1C60u;
    {
        const bool branch_taken_0x1d1c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C60u;
        // 0x1d1c64: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c60) {
            ctx->pc = 0x1D1C84u;
            return;
        }
    }
    ctx->pc = 0x1D1C68u;
    // 0x1d1c68: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d1c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d1c6c: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D1C6Cu;
    SET_GPR_U32(ctx, 31, 0x1D1C74u);
    ctx->pc = 0x1D1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C6Cu;
    // 0x1d1c70: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D1C6Cu, 0x1D1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C74u;
label_1d1c74:
    // 0x1d1c74: 0x1440031f  bnez        $v0, . + 4 + (0x31F << 2)
    ctx->pc = 0x1D1C74u;
    {
        const bool branch_taken_0x1d1c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C74u;
        // 0x1d1c78: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c74) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D1C7Cu;
    // 0x1d1c7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d1c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d1c80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d1c80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d1c84u;
}
