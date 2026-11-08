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

// Function: entry_00177af0
// Address: 0x177af0 - 0x177b18
void entry_00177af0_0x177af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177af0_0x177af0");
#endif

    switch (ctx->pc) {
        case 0x177b00u: goto label_177b00;
        default: break;
    }

    ctx->pc = 0x177af0u;

    // 0x177af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177af8: 0xc06e316  jal         func_1B8C58
    ctx->pc = 0x177AF8u;
    SET_GPR_U32(ctx, 31, 0x177B00u);
    ctx->pc = 0x177AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177AF8u;
    // 0x177afc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8C58u, 0x177AF8u, 0x177B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B00u;
label_177b00:
    // 0x177b00: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x177b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177b04: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x177b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x177b08: 0x10510003  beq         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177B08u;
    {
        const bool branch_taken_0x177b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x177B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B08u;
        // 0x177b0c: 0x24847918  addiu       $a0, $a0, 0x7918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177b08) {
            ctx->pc = 0x177B18u;
            return;
        }
    }
    ctx->pc = 0x177B10u;
    // 0x177b10: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x177B10u;
    SET_GPR_U32(ctx, 31, 0x177B18u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x177B10u, 0x177B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B18u;
}
