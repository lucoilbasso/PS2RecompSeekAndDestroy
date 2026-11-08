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

// Function: caseD_1
// Address: 0x1333f8 - 0x133438
void caseD_1_0x1333f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1333f8");
#endif

    switch (ctx->pc) {
        case 0x133414u: goto label_133414;
        default: break;
    }

    ctx->pc = 0x1333f8u;

    // 0x1333f8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1333f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1333fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1333fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x133400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133404: 0x10640018  beq         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x133404u;
    {
        const bool branch_taken_0x133404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x133404) {
            ctx->pc = 0x133468u;
            return;
        }
    }
    ctx->pc = 0x13340Cu;
    // 0x13340c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13340Cu;
    SET_GPR_U32(ctx, 31, 0x133414u);
    ctx->pc = 0x133410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13340Cu;
    // 0x133410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13340Cu, 0x133414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133414u;
label_133414:
    // 0x133414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133418: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x133418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13341c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13341Cu;
    {
        const bool branch_taken_0x13341c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x133420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13341Cu;
        // 0x133420: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13341c) {
            ctx->pc = 0x133438u;
            return;
        }
    }
    ctx->pc = 0x133424u;
    // 0x133424: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x133424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x133428: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x133428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x13342c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13342Cu;
    {
        const bool branch_taken_0x13342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13342Cu;
        // 0x133430: 0x8c640040  lw          $a0, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13342c) {
            ctx->pc = 0x133464u;
            return;
        }
    }
    ctx->pc = 0x133434u;
    // 0x133434: 0x0  nop
    ctx->pc = 0x133434u;
    // NOP
    ctx->pc = 0x133438u;
}
