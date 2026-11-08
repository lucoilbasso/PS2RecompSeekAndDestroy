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

// Function: entry_001c0f50
// Address: 0x1c0f50 - 0x1c0f94
void entry_001c0f50_0x1c0f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0f50_0x1c0f50");
#endif

    switch (ctx->pc) {
        case 0x1c0f58u: goto label_1c0f58;
        case 0x1c0f60u: goto label_1c0f60;
        case 0x1c0f6cu: goto label_1c0f6c;
        case 0x1c0f8cu: goto label_1c0f8c;
        default: break;
    }

    ctx->pc = 0x1c0f50u;

    // 0x1c0f50: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C0F50u;
    SET_GPR_U32(ctx, 31, 0x1C0F58u);
    ctx->pc = 0x1C0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F50u;
    // 0x1c0f54: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C0F50u, 0x1C0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F58u;
label_1c0f58:
    // 0x1c0f58: 0xc07086a  jal         func_1C21A8
    ctx->pc = 0x1C0F58u;
    SET_GPR_U32(ctx, 31, 0x1C0F60u);
    ctx->pc = 0x1C0F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F58u;
    // 0x1c0f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C21A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C21A8u, 0x1C0F58u, 0x1C0F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F60u;
label_1c0f60:
    // 0x1c0f60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c0f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f64: 0xc070332  jal         func_1C0CC8
    ctx->pc = 0x1C0F64u;
    SET_GPR_U32(ctx, 31, 0x1C0F6Cu);
    ctx->pc = 0x1C0F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F64u;
    // 0x1c0f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0CC8u, 0x1C0F64u, 0x1C0F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F6Cu;
label_1c0f6c:
    // 0x1c0f6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c0f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f70: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x1c0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x1c0f74: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1c0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1c0f78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0F78u;
    {
        const bool branch_taken_0x1c0f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F78u;
        // 0x1c0f7c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f78) {
            ctx->pc = 0x1C0F94u;
            return;
        }
    }
    ctx->pc = 0x1C0F80u;
    // 0x1c0f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f84: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C0F84u;
    SET_GPR_U32(ctx, 31, 0x1C0F8Cu);
    ctx->pc = 0x1C0F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F84u;
    // 0x1c0f88: 0x24a5b590  addiu       $a1, $a1, -0x4A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C0F84u, 0x1C0F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F8Cu;
label_1c0f8c:
    // 0x1c0f8c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C0F8Cu;
    {
        const bool branch_taken_0x1c0f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F8Cu;
        // 0x1c0f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f8c) {
            ctx->pc = 0x1C0FE8u;
            return;
        }
    }
    ctx->pc = 0x1C0F94u;
}
