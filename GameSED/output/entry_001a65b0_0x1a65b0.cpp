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

// Function: entry_001a65b0
// Address: 0x1a65b0 - 0x1a6604
void entry_001a65b0_0x1a65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a65b0_0x1a65b0");
#endif

    switch (ctx->pc) {
        case 0x1a65ccu: goto label_1a65cc;
        case 0x1a6600u: goto label_1a6600;
        default: break;
    }

    ctx->pc = 0x1a65b0u;

    // 0x1a65b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a65b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a65b4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a65b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a65b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a65bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a65bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a65c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a65c4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A65C4u;
    SET_GPR_U32(ctx, 31, 0x1A65CCu);
    ctx->pc = 0x1A65C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A65C4u;
    // 0x1a65c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A65C4u, 0x1A65CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A65CCu;
label_1a65cc:
    // 0x1a65cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a65ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a65d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a65d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a65d8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a65dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a65dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a65e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a65e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a65e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a65e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a65ec: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a65ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a65f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A65F0u;
    {
        const bool branch_taken_0x1a65f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A65F0u;
        // 0x1a65f4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a65f0) {
            ctx->pc = 0x1A6604u;
            return;
        }
    }
    ctx->pc = 0x1A65F8u;
    // 0x1a65f8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A65F8u;
    SET_GPR_U32(ctx, 31, 0x1A6600u);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A65F8u, 0x1A6600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6600u;
label_1a6600:
    // 0x1a6600: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1a6604u;
}
