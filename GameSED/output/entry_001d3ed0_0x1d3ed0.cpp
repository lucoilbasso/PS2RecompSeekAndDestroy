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

// Function: entry_001d3ed0
// Address: 0x1d3ed0 - 0x1d3f18
void entry_001d3ed0_0x1d3ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3ed0_0x1d3ed0");
#endif

    switch (ctx->pc) {
        case 0x1d3ee4u: goto label_1d3ee4;
        case 0x1d3f0cu: goto label_1d3f0c;
        default: break;
    }

    ctx->pc = 0x1d3ed0u;

    // 0x1d3ed0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3ed4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ed8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3edc: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3EDCu;
    SET_GPR_U32(ctx, 31, 0x1D3EE4u);
    ctx->pc = 0x1D3EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EDCu;
    // 0x1d3ee0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3EDCu, 0x1D3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EE4u;
label_1d3ee4:
    // 0x1d3ee4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1d3ee8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d3eec: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3ef0: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3EF0u;
    {
        const bool branch_taken_0x1d3ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EF0u;
        // 0x1d3ef4: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ef0) {
            ctx->pc = 0x1D3F18u;
            return;
        }
    }
    ctx->pc = 0x1D3EF8u;
    // 0x1d3ef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3efc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f00: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1d3f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3f04: 0xc0754fe  jal         func_1D53F8
    ctx->pc = 0x1D3F04u;
    SET_GPR_U32(ctx, 31, 0x1D3F0Cu);
    ctx->pc = 0x1D3F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F04u;
    // 0x1d3f08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53F8u, 0x1D3F04u, 0x1D3F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F0Cu;
label_1d3f0c:
    // 0x1d3f0c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1d3f10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D3F10u;
    {
        const bool branch_taken_0x1d3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F10u;
        // 0x1d3f14: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f10) {
            ctx->pc = 0x1D3F44u;
            return;
        }
    }
    ctx->pc = 0x1D3F18u;
}
