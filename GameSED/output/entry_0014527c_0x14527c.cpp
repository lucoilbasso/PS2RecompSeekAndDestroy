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

// Function: entry_0014527c
// Address: 0x14527c - 0x1452a8
void entry_0014527c_0x14527c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014527c_0x14527c");
#endif

    switch (ctx->pc) {
        case 0x14529cu: goto label_14529c;
        default: break;
    }

    ctx->pc = 0x14527cu;

    // 0x14527c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x14527cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145280: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x145280u;
    {
        const bool branch_taken_0x145280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x145280) {
            ctx->pc = 0x145284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145280u;
            // 0x145284: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1452A8u;
            return;
        }
    }
    ctx->pc = 0x145288u;
    // 0x145288: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x145288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14528c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145290: 0x24a56a80  addiu       $a1, $a1, 0x6A80
    ctx->pc = 0x145290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27264));
    // 0x145294: 0xc068186  jal         func_1A0618
    ctx->pc = 0x145294u;
    SET_GPR_U32(ctx, 31, 0x14529Cu);
    ctx->pc = 0x145298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145294u;
    // 0x145298: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x145294u, 0x14529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14529Cu;
label_14529c:
    // 0x14529c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14529Cu;
    {
        const bool branch_taken_0x14529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1452A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14529Cu;
        // 0x1452a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14529c) {
            ctx->pc = 0x1452C8u;
            return;
        }
    }
    ctx->pc = 0x1452A4u;
    // 0x1452a4: 0x0  nop
    ctx->pc = 0x1452a4u;
    // NOP
    ctx->pc = 0x1452a8u;
}
