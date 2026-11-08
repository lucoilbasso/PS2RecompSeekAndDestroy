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

// Function: entry_001d3f48
// Address: 0x1d3f48 - 0x1d3f98
void entry_001d3f48_0x1d3f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3f48_0x1d3f48");
#endif

    switch (ctx->pc) {
        case 0x1d3f54u: goto label_1d3f54;
        case 0x1d3f64u: goto label_1d3f64;
        case 0x1d3f78u: goto label_1d3f78;
        case 0x1d3f94u: goto label_1d3f94;
        default: break;
    }

    ctx->pc = 0x1d3f48u;

    // 0x1d3f48: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3f4c: 0xc074b66  jal         func_1D2D98
    ctx->pc = 0x1D3F4Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F54u);
    ctx->pc = 0x1D3F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F4Cu;
    // 0x1d3f50: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2D98u, 0x1D3F4Cu, 0x1D3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F54u;
label_1d3f54:
    // 0x1d3f54: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d3f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3f58: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d3f5c: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F64u);
    ctx->pc = 0x1D3F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F5Cu;
    // 0x1d3f60: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D3F5Cu, 0x1D3F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F64u;
label_1d3f64:
    // 0x1d3f64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f68: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1d3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f70: 0xc07571e  jal         func_1D5C78
    ctx->pc = 0x1D3F70u;
    SET_GPR_U32(ctx, 31, 0x1D3F78u);
    ctx->pc = 0x1D3F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F70u;
    // 0x1d3f74: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C78u, 0x1D3F70u, 0x1D3F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F78u;
label_1d3f78:
    // 0x1d3f78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d3f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f7c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1d3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d3f80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3F80u;
    {
        const bool branch_taken_0x1d3f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F80u;
        // 0x1d3f84: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f80) {
            ctx->pc = 0x1D3F98u;
            return;
        }
    }
    ctx->pc = 0x1D3F88u;
    // 0x1d3f88: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1d3f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3f8c: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D3F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F94u);
    ctx->pc = 0x1D3F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F8Cu;
    // 0x1d3f90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D3F8Cu, 0x1D3F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F94u;
label_1d3f94:
    // 0x1d3f94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d3f98u;
}
