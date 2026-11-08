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

// Function: entry_0012f9a4
// Address: 0x12f9a4 - 0x12f9f0
void entry_0012f9a4_0x12f9a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f9a4_0x12f9a4");
#endif

    switch (ctx->pc) {
        case 0x12f9c0u: goto label_12f9c0;
        default: break;
    }

    ctx->pc = 0x12f9a4u;

    // 0x12f9a4: 0x8e65007c  lw          $a1, 0x7C($s3)
    ctx->pc = 0x12f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x12f9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9ac: 0x96670066  lhu         $a3, 0x66($s3)
    ctx->pc = 0x12f9acu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 102)));
    // 0x12f9b0: 0x2666006c  addiu       $a2, $s3, 0x6C
    ctx->pc = 0x12f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x12f9b4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x12f9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f9b8: 0xc04afb0  jal         func_12BEC0
    ctx->pc = 0x12F9B8u;
    SET_GPR_U32(ctx, 31, 0x12F9C0u);
    ctx->pc = 0x12F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9B8u;
    // 0x12f9bc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BEC0u, 0x12F9B8u, 0x12F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9C0u;
label_12f9c0:
    // 0x12f9c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f9c4: 0x506000cf  beql        $v1, $zero, . + 4 + (0xCF << 2)
    ctx->pc = 0x12F9C4u;
    {
        const bool branch_taken_0x12f9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9c4) {
            ctx->pc = 0x12F9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F9C4u;
            // 0x12f9c8: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            return;
        }
    }
    ctx->pc = 0x12F9CCu;
    // 0x12f9cc: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x12f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x12f9d0: 0x504000cc  beql        $v0, $zero, . + 4 + (0xCC << 2)
    ctx->pc = 0x12F9D0u;
    {
        const bool branch_taken_0x12f9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9d0) {
            ctx->pc = 0x12F9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F9D0u;
            // 0x12f9d4: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FD04u;
            return;
        }
    }
    ctx->pc = 0x12F9D8u;
    // 0x12f9d8: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x12F9D8u;
    {
        const bool branch_taken_0x12f9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9D8u;
        // 0x12f9dc: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9d8) {
            ctx->pc = 0x12FD00u;
            return;
        }
    }
    ctx->pc = 0x12F9E0u;
    // 0x12f9e0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x12f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x12f9e4: 0x245e0790  addiu       $fp, $v0, 0x790
    ctx->pc = 0x12f9e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
    // 0x12f9e8: 0x8e7100c8  lw          $s1, 0xC8($s3)
    ctx->pc = 0x12f9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x12f9ec: 0x0  nop
    ctx->pc = 0x12f9ecu;
    // NOP
    ctx->pc = 0x12f9f0u;
}
