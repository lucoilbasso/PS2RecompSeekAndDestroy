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

// Function: entry_001d50a8
// Address: 0x1d50a8 - 0x1d50e0
void entry_001d50a8_0x1d50a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d50a8_0x1d50a8");
#endif

    switch (ctx->pc) {
        case 0x1d50d8u: goto label_1d50d8;
        default: break;
    }

    ctx->pc = 0x1d50a8u;

    // 0x1d50a8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d50ac: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d50acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d50b0: 0x24634518  addiu       $v1, $v1, 0x4518
    ctx->pc = 0x1d50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17688));
    // 0x1d50b4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1d50b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1d50b8: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1d50b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x1d50bc: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1d50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x1d50c0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d50c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d50c4: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x1d50c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x1d50c8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D50C8u;
    {
        const bool branch_taken_0x1d50c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50C8u;
        // 0x1d50cc: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50c8) {
            ctx->pc = 0x1D50ECu;
            return;
        }
    }
    ctx->pc = 0x1D50D0u;
    // 0x1d50d0: 0xc06bf04  jal         func_1AFC10
    ctx->pc = 0x1D50D0u;
    SET_GPR_U32(ctx, 31, 0x1D50D8u);
    ctx->pc = 0x1D50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D50D0u;
    // 0x1d50d4: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC10u, 0x1D50D0u, 0x1D50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50D8u;
label_1d50d8:
    // 0x1d50d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D50D8u;
    {
        const bool branch_taken_0x1d50d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d50d8) {
            ctx->pc = 0x1D50DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D50D8u;
            // 0x1d50dc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D50F0u;
            return;
        }
    }
    ctx->pc = 0x1D50E0u;
}
