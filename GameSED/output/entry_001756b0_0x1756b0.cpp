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

// Function: entry_001756b0
// Address: 0x1756b0 - 0x175720
void entry_001756b0_0x1756b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001756b0_0x1756b0");
#endif

    switch (ctx->pc) {
        case 0x1756d4u: goto label_1756d4;
        default: break;
    }

    ctx->pc = 0x1756b0u;

label_1756b0:
    // 0x1756b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1756b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1756b4: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1756b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1756b8: 0x0  nop
    ctx->pc = 0x1756b8u;
    // NOP
    // 0x1756bc: 0x0  nop
    ctx->pc = 0x1756bcu;
    // NOP
    // 0x1756c0: 0x0  nop
    ctx->pc = 0x1756c0u;
    // NOP
    // 0x1756c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1756C4u;
    {
        const bool branch_taken_0x1756c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1756c4) {
            ctx->pc = 0x1756B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1756b0;
        }
    }
    ctx->pc = 0x1756CCu;
    // 0x1756cc: 0xc05d40c  jal         func_175030
    ctx->pc = 0x1756CCu;
    SET_GPR_U32(ctx, 31, 0x1756D4u);
    ctx->pc = 0x1756D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756CCu;
    // 0x1756d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175030u, 0x1756CCu, 0x1756D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756D4u;
label_1756d4:
    // 0x1756d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1756d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1756d8: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x1756d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x1756dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1756dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1756e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1756e0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u));
    // 0x1756e4: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1756e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x1756e8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1756e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1756ec: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x1756ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x1756f0: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1756f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1756f4: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x1756f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x1756f8: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x1756f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8224);
    // 0x1756fc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1756fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x175700: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x175704: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x175704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x175708: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x175708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x17570c: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x17570cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x175710: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x175714: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x175714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x175718: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x175718u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x17571c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x17571cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    ctx->pc = 0x175720u;
}
