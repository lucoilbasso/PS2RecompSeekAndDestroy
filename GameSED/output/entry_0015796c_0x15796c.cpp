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

// Function: entry_0015796c
// Address: 0x15796c - 0x1579a4
void entry_0015796c_0x15796c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015796c_0x15796c");
#endif

    switch (ctx->pc) {
        case 0x157978u: goto label_157978;
        case 0x15798cu: goto label_15798c;
        default: break;
    }

    ctx->pc = 0x15796cu;

    // 0x15796c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15796cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157970: 0xc0605e6  jal         func_181798
    ctx->pc = 0x157970u;
    SET_GPR_U32(ctx, 31, 0x157978u);
    ctx->pc = 0x157974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157970u;
    // 0x157974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181798u, 0x157970u, 0x157978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157978u;
label_157978:
    // 0x157978: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x157978u;
    {
        const bool branch_taken_0x157978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157978u;
        // 0x15797c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157978) {
            ctx->pc = 0x1579B8u;
            return;
        }
    }
    ctx->pc = 0x157980u;
    // 0x157980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157984: 0xc055dd8  jal         func_157760
    ctx->pc = 0x157984u;
    SET_GPR_U32(ctx, 31, 0x15798Cu);
    ctx->pc = 0x157988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157984u;
    // 0x157988: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157760u, 0x157984u, 0x15798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15798Cu;
label_15798c:
    // 0x15798c: 0x8e040160  lw          $a0, 0x160($s0)
    ctx->pc = 0x15798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x157990: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157994: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x157994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157998: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x157998u;
    {
        const bool branch_taken_0x157998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x157998) {
            ctx->pc = 0x15799Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157998u;
            // 0x15799c: 0x26020150  addiu       $v0, $s0, 0x150 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1579A4u;
            return;
        }
    }
    ctx->pc = 0x1579A0u;
    // 0x1579a0: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x1579a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->pc = 0x1579a4u;
}
