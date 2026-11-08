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

// Function: entry_0010ba8c
// Address: 0x10ba8c - 0x10bab0
void entry_0010ba8c_0x10ba8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ba8c_0x10ba8c");
#endif

    switch (ctx->pc) {
        case 0x10ba94u: goto label_10ba94;
        default: break;
    }

    ctx->pc = 0x10ba8cu;

    // 0x10ba8c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10BA8Cu;
    SET_GPR_U32(ctx, 31, 0x10BA94u);
    ctx->pc = 0x10BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BA8Cu;
    // 0x10ba90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10BA8Cu, 0x10BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BA94u;
label_10ba94:
    // 0x10ba94: 0x8e070210  lw          $a3, 0x210($s0)
    ctx->pc = 0x10ba94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x10ba98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ba98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ba9c: 0x18e0000c  blez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x10BA9Cu;
    {
        const bool branch_taken_0x10ba9c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x10BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA9Cu;
        // 0x10baa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba9c) {
            ctx->pc = 0x10BAD0u;
            return;
        }
    }
    ctx->pc = 0x10BAA4u;
    // 0x10baa4: 0x8e09021c  lw          $t1, 0x21C($s0)
    ctx->pc = 0x10baa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x10baa8: 0x8e080214  lw          $t0, 0x214($s0)
    ctx->pc = 0x10baa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x10baac: 0x0  nop
    ctx->pc = 0x10baacu;
    // NOP
    ctx->pc = 0x10bab0u;
}
