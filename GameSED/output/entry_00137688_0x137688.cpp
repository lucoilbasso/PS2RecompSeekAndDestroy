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

// Function: entry_00137688
// Address: 0x137688 - 0x1376b4
void entry_00137688_0x137688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137688_0x137688");
#endif

    ctx->pc = 0x137688u;

    // 0x137688: 0xae9001c4  sw          $s0, 0x1C4($s4)
    ctx->pc = 0x137688u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 16));
    // 0x13768c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x13768cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x137690: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x137690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x137694: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x137694u;
    {
        const bool branch_taken_0x137694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137694u;
        // 0x137698: 0x26510020  addiu       $s1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137694) {
            ctx->pc = 0x1376F4u;
            return;
        }
    }
    ctx->pc = 0x13769Cu;
    // 0x13769c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x13769cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1376a0: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1376a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1376a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1376A4u;
    {
        const bool branch_taken_0x1376a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1376a4) {
            ctx->pc = 0x1376B4u;
            return;
        }
    }
    ctx->pc = 0x1376ACu;
    // 0x1376ac: 0xc061920  jal         func_186480
    ctx->pc = 0x1376ACu;
    SET_GPR_U32(ctx, 31, 0x1376B4u);
    ctx->pc = 0x1376B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1376ACu;
    // 0x1376b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1376ACu, 0x1376B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1376B4u;
}
