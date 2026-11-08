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

// Function: entry_001cf8a4
// Address: 0x1cf8a4 - 0x1cf908
void entry_001cf8a4_0x1cf8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf8a4_0x1cf8a4");
#endif

    switch (ctx->pc) {
        case 0x1cf8acu: goto label_1cf8ac;
        default: break;
    }

    ctx->pc = 0x1cf8a4u;

    // 0x1cf8a4: 0xc074066  jal         func_1D0198
    ctx->pc = 0x1CF8A4u;
    SET_GPR_U32(ctx, 31, 0x1CF8ACu);
    ctx->pc = 0x1CF8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF8A4u;
    // 0x1cf8a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0198u, 0x1CF8A4u, 0x1CF8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF8ACu;
label_1cf8ac:
    // 0x1cf8ac: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x1cf8acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x1cf8b0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CF8B0u;
    {
        const bool branch_taken_0x1cf8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8B0u;
        // 0x1cf8b4: 0x111a42  srl         $v1, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8b0) {
            ctx->pc = 0x1CF910u;
            return;
        }
    }
    ctx->pc = 0x1CF8B8u;
    // 0x1cf8b8: 0x3c0f0025  lui         $t7, 0x25
    ctx->pc = 0x1cf8b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)37 << 16));
    // 0x1cf8bc: 0x25e2e1c0  addiu       $v0, $t7, -0x1E40
    ctx->pc = 0x1cf8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294959552));
    // 0x1cf8c0: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1cf8c4: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1cf8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cf8c8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1cf8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf8cc: 0x1204000e  beq         $s0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CF8CCu;
    {
        const bool branch_taken_0x1cf8cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8CCu;
        // 0x1cf8d0: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8cc) {
            ctx->pc = 0x1CF908u;
            return;
        }
    }
    ctx->pc = 0x1CF8D4u;
    // 0x1cf8d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1cf8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cf8d8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1cf8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1cf8dc: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1cf8dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf8e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cf8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8e4: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x1cf8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1cf8e8: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cf8ec: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x1cf8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1cf8f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cf8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cf8f4: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x1cf8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
    // 0x1cf8f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1cf8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1cf8fc: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x1cf8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
    // 0x1cf900: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x1CF900u;
    {
        const bool branch_taken_0x1cf900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF900u;
        // 0x1cf904: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf900) {
            ctx->pc = 0x1CFF64u;
            return;
        }
    }
    ctx->pc = 0x1CF908u;
}
