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

// Function: entry_00187ca8
// Address: 0x187ca8 - 0x187ce0
void entry_00187ca8_0x187ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ca8_0x187ca8");
#endif

    switch (ctx->pc) {
        case 0x187cb0u: goto label_187cb0;
        default: break;
    }

    ctx->pc = 0x187ca8u;

label_187ca8:
    // 0x187ca8: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x187CA8u;
    SET_GPR_U32(ctx, 31, 0x187CB0u);
    ctx->pc = 0x187CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187CA8u;
    // 0x187cac: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x187CA8u, 0x187CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187CB0u;
label_187cb0:
    // 0x187cb0: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x187cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x187cb4: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x187CB4u;
    {
        const bool branch_taken_0x187cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x187CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CB4u;
        // 0x187cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cb4) {
            ctx->pc = 0x187CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187ca8;
        }
    }
    ctx->pc = 0x187CBCu;
    // 0x187cbc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x187cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x187cc0: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x187CC0u;
    {
        const bool branch_taken_0x187cc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x187CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CC0u;
        // 0x187cc4: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cc0) {
            ctx->pc = 0x187CE0u;
            return;
        }
    }
    ctx->pc = 0x187CC8u;
    // 0x187cc8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x187cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x187ccc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x187cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x187cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187cd4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x187cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x187cd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x187CD8u;
    {
        const bool branch_taken_0x187cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187CD8u;
        // 0x187cdc: 0x438025  or          $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187cd8) {
            ctx->pc = 0x187CE8u;
            return;
        }
    }
    ctx->pc = 0x187CE0u;
}
