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

// Function: entry_00116220
// Address: 0x116220 - 0x116248
void entry_00116220_0x116220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116220_0x116220");
#endif

    switch (ctx->pc) {
        case 0x116234u: goto label_116234;
        case 0x116244u: goto label_116244;
        default: break;
    }

    ctx->pc = 0x116220u;

    // 0x116220: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x116220u;
    {
        const bool branch_taken_0x116220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x116224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116220u;
        // 0x116224: 0x3c03001f  lui         $v1, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116220) {
            ctx->pc = 0x116248u;
            return;
        }
    }
    ctx->pc = 0x116228u;
    // 0x116228: 0x26e44308  addiu       $a0, $s7, 0x4308
    ctx->pc = 0x116228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 17160));
    // 0x11622c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x11622Cu;
    SET_GPR_U32(ctx, 31, 0x116234u);
    ctx->pc = 0x116230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11622Cu;
    // 0x116230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x11622Cu, 0x116234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116234u;
label_116234:
    // 0x116234: 0x2664f1d0  addiu       $a0, $s3, -0xE30
    ctx->pc = 0x116234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963664));
    // 0x116238: 0x26c54318  addiu       $a1, $s6, 0x4318
    ctx->pc = 0x116238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 17176));
    // 0x11623c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x11623Cu;
    SET_GPR_U32(ctx, 31, 0x116244u);
    ctx->pc = 0x116240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11623Cu;
    // 0x116240: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x11623Cu, 0x116244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116244u;
label_116244:
    // 0x116244: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x116244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    ctx->pc = 0x116248u;
}
