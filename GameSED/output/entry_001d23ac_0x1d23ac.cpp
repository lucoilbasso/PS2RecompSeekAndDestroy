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

// Function: entry_001d23ac
// Address: 0x1d23ac - 0x1d23f4
void entry_001d23ac_0x1d23ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d23ac_0x1d23ac");
#endif

    switch (ctx->pc) {
        case 0x1d23e4u: goto label_1d23e4;
        default: break;
    }

    ctx->pc = 0x1d23acu;

    // 0x1d23ac: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d23b0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d23b4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d23b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d23b8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d23b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d23bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d23c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d23c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d23c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d23c8: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d23c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d23cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d23ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d23d0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D23D0u;
    {
        const bool branch_taken_0x1d23d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23D0u;
        // 0x1d23d4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23d0) {
            ctx->pc = 0x1D23F4u;
            return;
        }
    }
    ctx->pc = 0x1D23D8u;
    // 0x1d23d8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d23dc: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D23DCu;
    SET_GPR_U32(ctx, 31, 0x1D23E4u);
    ctx->pc = 0x1D23E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23DCu;
    // 0x1d23e0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D23DCu, 0x1D23E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23E4u;
label_1d23e4:
    // 0x1d23e4: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x1D23E4u;
    {
        const bool branch_taken_0x1d23e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23E4u;
        // 0x1d23e8: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23e4) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D23ECu;
    // 0x1d23ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d23f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d23f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d23f4u;
}
