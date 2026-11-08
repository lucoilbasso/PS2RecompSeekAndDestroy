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

// Function: entry_001d0fd0
// Address: 0x1d0fd0 - 0x1d1018
void entry_001d0fd0_0x1d0fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0fd0_0x1d0fd0");
#endif

    switch (ctx->pc) {
        case 0x1d0ff4u: goto label_1d0ff4;
        case 0x1d1008u: goto label_1d1008;
        default: break;
    }

    ctx->pc = 0x1d0fd0u;

    // 0x1d0fd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0fd4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1d0fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1d0fd8: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x1d0fd8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d0fdc: 0x14a43c  dsll32      $s4, $s4, 16
    ctx->pc = 0x1d0fdcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
    // 0x1d0fe0: 0x57a00a  movz        $s4, $v0, $s7
    ctx->pc = 0x1d0fe0u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x1d0fe4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1d0fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fec: 0xc072536  jal         func_1C94D8
    ctx->pc = 0x1D0FECu;
    SET_GPR_U32(ctx, 31, 0x1D0FF4u);
    ctx->pc = 0x1D0FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FECu;
    // 0x1d0ff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C94D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C94D8u, 0x1D0FECu, 0x1D0FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FF4u;
label_1d0ff4:
    // 0x1d0ff4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ff8: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x1d0ff8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d0ffc: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x1d0ffcu;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x1d1000: 0xc0723d6  jal         func_1C8F58
    ctx->pc = 0x1D1000u;
    SET_GPR_U32(ctx, 31, 0x1D1008u);
    ctx->pc = 0x1D1004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1000u;
    // 0x1d1004: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8F58u, 0x1D1000u, 0x1D1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1008u;
label_1d1008:
    // 0x1d1008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d100c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d100cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1010: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D1010u;
    {
        const bool branch_taken_0x1d1010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1010u;
        // 0x1d1014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1010) {
            ctx->pc = 0x1D1068u;
            return;
        }
    }
    ctx->pc = 0x1D1018u;
}
