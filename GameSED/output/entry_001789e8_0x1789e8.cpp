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

// Function: entry_001789e8
// Address: 0x1789e8 - 0x178a30
void entry_001789e8_0x1789e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001789e8_0x1789e8");
#endif

    switch (ctx->pc) {
        case 0x1789f8u: goto label_1789f8;
        default: break;
    }

    ctx->pc = 0x1789e8u;

    // 0x1789e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1789e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1789ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1789ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1789f0: 0xc06ecac  jal         func_1BB2B0
    ctx->pc = 0x1789F0u;
    SET_GPR_U32(ctx, 31, 0x1789F8u);
    ctx->pc = 0x1789F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789F0u;
    // 0x1789f4: 0x8c500024  lw          $s0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB2B0u, 0x1789F0u, 0x1789F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789F8u;
label_1789f8:
    // 0x1789f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1789f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1789fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x178a00: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x178A00u;
    {
        const bool branch_taken_0x178a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x178A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A00u;
        // 0x178a04: 0x28620031  slti        $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a00) {
            ctx->pc = 0x178A78u;
            return;
        }
    }
    ctx->pc = 0x178A08u;
    // 0x178a08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x178A08u;
    {
        const bool branch_taken_0x178a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A08u;
        // 0x178a0c: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a08) {
            ctx->pc = 0x178A30u;
            return;
        }
    }
    ctx->pc = 0x178A10u;
    // 0x178a10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178a14: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x178A14u;
    {
        const bool branch_taken_0x178a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x178a14) {
            ctx->pc = 0x178A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A14u;
            // 0x178a18: 0x8e021040  lw          $v0, 0x1040($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A7Cu;
            return;
        }
    }
    ctx->pc = 0x178A1Cu;
    // 0x178a1c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x178A1Cu;
    {
        const bool branch_taken_0x178a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178a1c) {
            ctx->pc = 0x178A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178A1Cu;
            // 0x178a20: 0x8e031040  lw          $v1, 0x1040($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178A40u;
            return;
        }
    }
    ctx->pc = 0x178A24u;
    // 0x178a24: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x178A24u;
    {
        const bool branch_taken_0x178a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A24u;
        // 0x178a28: 0x8e021040  lw          $v0, 0x1040($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a24) {
            ctx->pc = 0x178A7Cu;
            return;
        }
    }
    ctx->pc = 0x178A2Cu;
    // 0x178a2c: 0x0  nop
    ctx->pc = 0x178a2cu;
    // NOP
    ctx->pc = 0x178a30u;
}
