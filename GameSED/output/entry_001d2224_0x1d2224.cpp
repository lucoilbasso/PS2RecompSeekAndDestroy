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

// Function: entry_001d2224
// Address: 0x1d2224 - 0x1d226c
void entry_001d2224_0x1d2224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2224_0x1d2224");
#endif

    switch (ctx->pc) {
        case 0x1d225cu: goto label_1d225c;
        default: break;
    }

    ctx->pc = 0x1d2224u;

    // 0x1d2224: 0x24e2c3d0  addiu       $v0, $a3, -0x3C30
    ctx->pc = 0x1d2224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951888));
    // 0x1d2228: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d2228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d222c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1d222cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1d2230: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d2230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d2234: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1d2234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d2238: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d223c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d2240: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1d2240u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d2244: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1d2244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1d2248: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2248u;
    {
        const bool branch_taken_0x1d2248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2248u;
        // 0x1d224c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2248) {
            ctx->pc = 0x1D226Cu;
            return;
        }
    }
    ctx->pc = 0x1D2250u;
    // 0x1d2250: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1d2250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1d2254: 0xc074454  jal         func_1D1150
    ctx->pc = 0x1D2254u;
    SET_GPR_U32(ctx, 31, 0x1D225Cu);
    ctx->pc = 0x1D2258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2254u;
    // 0x1d2258: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1150u, 0x1D2254u, 0x1D225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D225Cu;
label_1d225c:
    // 0x1d225c: 0x144001a5  bnez        $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x1D225Cu;
    {
        const bool branch_taken_0x1d225c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D225Cu;
        // 0x1d2260: 0x8fa201e8  lw          $v0, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d225c) {
            ctx->pc = 0x1D28F4u;
            return;
        }
    }
    ctx->pc = 0x1D2264u;
    // 0x1d2264: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1d2264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d2268: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d2268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d226cu;
}
