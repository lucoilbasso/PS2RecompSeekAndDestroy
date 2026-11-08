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

// Function: entry_0010b1b0
// Address: 0x10b1b0 - 0x10b210
void entry_0010b1b0_0x10b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b1b0_0x10b1b0");
#endif

    switch (ctx->pc) {
        case 0x10b1c8u: goto label_10b1c8;
        case 0x10b1d8u: goto label_10b1d8;
        case 0x10b1ecu: goto label_10b1ec;
        case 0x10b204u: goto label_10b204;
        default: break;
    }

    ctx->pc = 0x10b1b0u;

    // 0x10b1b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x10b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b1b4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10B1B4u;
    {
        const bool branch_taken_0x10b1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1B4u;
        // 0x10b1b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b1b4) {
            ctx->pc = 0x10B210u;
            return;
        }
    }
    ctx->pc = 0x10B1BCu;
    // 0x10b1bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1c0: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x10B1C0u;
    SET_GPR_U32(ctx, 31, 0x10B1C8u);
    ctx->pc = 0x10B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1C0u;
    // 0x10b1c4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x10B1C0u, 0x10B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1C8u;
label_10b1c8:
    // 0x10b1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1cc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x10b1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x10b1d0: 0xc0637e6  jal         func_18DF98
    ctx->pc = 0x10B1D0u;
    SET_GPR_U32(ctx, 31, 0x10B1D8u);
    ctx->pc = 0x10B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1D0u;
    // 0x10b1d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF98u, 0x10B1D0u, 0x10B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1D8u;
label_10b1d8:
    // 0x10b1d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1dc: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x10b1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b1e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10b1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1e4: 0xc063b02  jal         func_18EC08
    ctx->pc = 0x10B1E4u;
    SET_GPR_U32(ctx, 31, 0x10B1ECu);
    ctx->pc = 0x10B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1E4u;
    // 0x10b1e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC08u, 0x10B1E4u, 0x10B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B1ECu;
label_10b1ec:
    // 0x10b1ec: 0x8e250208  lw          $a1, 0x208($s1)
    ctx->pc = 0x10b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x10b1f0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x10b1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10b1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x10b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x10b1fc: 0xc063b02  jal         func_18EC08
    ctx->pc = 0x10B1FCu;
    SET_GPR_U32(ctx, 31, 0x10B204u);
    ctx->pc = 0x10B200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B1FCu;
    // 0x10b200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EC08u, 0x10B1FCu, 0x10B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B204u;
label_10b204:
    // 0x10b204: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10B204u;
    {
        const bool branch_taken_0x10b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B204u;
        // 0x10b208: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b204) {
            ctx->pc = 0x10B254u;
            return;
        }
    }
    ctx->pc = 0x10B20Cu;
    // 0x10b20c: 0x0  nop
    ctx->pc = 0x10b20cu;
    // NOP
    ctx->pc = 0x10b210u;
}
