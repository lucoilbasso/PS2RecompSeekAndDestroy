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

// Function: entry_0010dce0
// Address: 0x10dce0 - 0x10dd38
void entry_0010dce0_0x10dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dce0_0x10dce0");
#endif

    switch (ctx->pc) {
        case 0x10dcf8u: goto label_10dcf8;
        case 0x10dd08u: goto label_10dd08;
        case 0x10dd1cu: goto label_10dd1c;
        case 0x10dd30u: goto label_10dd30;
        default: break;
    }

    ctx->pc = 0x10dce0u;

    // 0x10dce0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10dce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10dce4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10dce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10dce8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x10dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x10dcec: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10dcf0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10DCF0u;
    SET_GPR_U32(ctx, 31, 0x10DCF8u);
    ctx->pc = 0x10DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCF0u;
    // 0x10dcf4: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10DCF0u, 0x10DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCF8u;
label_10dcf8:
    // 0x10dcf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10dcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dcfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10dcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd00: 0xc0436d2  jal         func_10DB48
    ctx->pc = 0x10DD00u;
    SET_GPR_U32(ctx, 31, 0x10DD08u);
    ctx->pc = 0x10DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD00u;
    // 0x10dd04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DB48u, 0x10DD00u, 0x10DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD08u;
label_10dd08:
    // 0x10dd08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd0c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x10DD0Cu;
    {
        const bool branch_taken_0x10dd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD0Cu;
        // 0x10dd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd0c) {
            ctx->pc = 0x10DD38u;
            return;
        }
    }
    ctx->pc = 0x10DD14u;
    // 0x10dd14: 0xc065448  jal         func_195120
    ctx->pc = 0x10DD14u;
    SET_GPR_U32(ctx, 31, 0x10DD1Cu);
    ctx->pc = 0x195120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195120u, 0x10DD14u, 0x10DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD1Cu;
label_10dd1c:
    // 0x10dd1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10dd20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd24: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dd28: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x10DD28u;
    SET_GPR_U32(ctx, 31, 0x10DD30u);
    ctx->pc = 0x10DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD28u;
    // 0x10dd2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x10DD28u, 0x10DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD30u;
label_10dd30:
    // 0x10dd30: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x10DD30u;
    {
        const bool branch_taken_0x10dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD30u;
        // 0x10dd34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd30) {
            ctx->pc = 0x10DDC0u;
            return;
        }
    }
    ctx->pc = 0x10DD38u;
}
