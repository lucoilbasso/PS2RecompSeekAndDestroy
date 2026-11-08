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

// Function: entry_00154c68
// Address: 0x154c68 - 0x154ca8
void entry_00154c68_0x154c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154c68_0x154c68");
#endif

    switch (ctx->pc) {
        case 0x154c9cu: goto label_154c9c;
        default: break;
    }

    ctx->pc = 0x154c68u;

    // 0x154c68: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x154C68u;
    {
        const bool branch_taken_0x154c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x154C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C68u;
        // 0x154c6c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c68) {
            ctx->pc = 0x154CB8u;
            return;
        }
    }
    ctx->pc = 0x154C70u;
    // 0x154c70: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x154c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x154c74: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x154c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x154c78: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x154c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x154c7c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x154c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x154c80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x154c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x154c84: 0xae030264  sw          $v1, 0x264($s0)
    ctx->pc = 0x154c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 3));
    // 0x154c88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x154c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154c8c: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x154C8Cu;
    {
        const bool branch_taken_0x154c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x154c8c) {
            ctx->pc = 0x154C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154C8Cu;
            // 0x154c90: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154CA8u;
            return;
        }
    }
    ctx->pc = 0x154C94u;
    // 0x154c94: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x154C94u;
    SET_GPR_U32(ctx, 31, 0x154C9Cu);
    ctx->pc = 0x154C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154C94u;
    // 0x154c98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x154C94u, 0x154C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154C9Cu;
label_154c9c:
    // 0x154c9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x154C9Cu;
    {
        const bool branch_taken_0x154c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C9Cu;
        // 0x154ca0: 0xae020680  sw          $v0, 0x680($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c9c) {
            ctx->pc = 0x154CACu;
            return;
        }
    }
    ctx->pc = 0x154CA4u;
    // 0x154ca4: 0x0  nop
    ctx->pc = 0x154ca4u;
    // NOP
    ctx->pc = 0x154ca8u;
}
