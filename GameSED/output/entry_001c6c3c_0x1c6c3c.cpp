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

// Function: entry_001c6c3c
// Address: 0x1c6c3c - 0x1c6c98
void entry_001c6c3c_0x1c6c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6c3c_0x1c6c3c");
#endif

    switch (ctx->pc) {
        case 0x1c6c4cu: goto label_1c6c4c;
        case 0x1c6c70u: goto label_1c6c70;
        case 0x1c6c8cu: goto label_1c6c8c;
        default: break;
    }

    ctx->pc = 0x1c6c3cu;

    // 0x1c6c3c: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x1c6c3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c44: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1C6C44u;
    SET_GPR_U32(ctx, 31, 0x1C6C4Cu);
    ctx->pc = 0x1C6C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C44u;
    // 0x1c6c48: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1C6C44u, 0x1C6C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C4Cu;
label_1c6c4c:
    // 0x1c6c4c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C6C4Cu;
    {
        const bool branch_taken_0x1c6c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C4Cu;
        // 0x1c6c50: 0x3c090026  lui         $t1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c4c) {
            ctx->pc = 0x1C6C38u;
            return;
        }
    }
    ctx->pc = 0x1C6C54u;
    // 0x1c6c54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c6c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c58: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c6c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c5c: 0x2529b808  addiu       $t1, $t1, -0x47F8
    ctx->pc = 0x1c6c5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294948872));
    // 0x1c6c60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c6c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c68: 0xc071bec  jal         func_1C6FB0
    ctx->pc = 0x1C6C68u;
    SET_GPR_U32(ctx, 31, 0x1C6C70u);
    ctx->pc = 0x1C6C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C68u;
    // 0x1c6c6c: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6FB0u, 0x1C6C68u, 0x1C6C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C70u;
label_1c6c70:
    // 0x1c6c70: 0x7c1000d  bgez        $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6C70u;
    {
        const bool branch_taken_0x1c6c70 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x1C6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C70u;
        // 0x1c6c74: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c70) {
            ctx->pc = 0x1C6CA8u;
            return;
        }
    }
    ctx->pc = 0x1C6C78u;
    // 0x1c6c78: 0xde850000  ld          $a1, 0x0($s4)
    ctx->pc = 0x1c6c78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c6c7c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c6c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c84: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6C84u;
    SET_GPR_U32(ctx, 31, 0x1C6C8Cu);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6C84u, 0x1C6C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C8Cu;
label_1c6c8c:
    // 0x1c6c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c90: 0xde850008  ld          $a1, 0x8($s4)
    ctx->pc = 0x1c6c90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1c6c94: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1c6c94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x1c6c98u;
}
