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

// Function: entry_00147cb8
// Address: 0x147cb8 - 0x147cec
void entry_00147cb8_0x147cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147cb8_0x147cb8");
#endif

    switch (ctx->pc) {
        case 0x147cc8u: goto label_147cc8;
        default: break;
    }

    ctx->pc = 0x147cb8u;

    // 0x147cb8: 0x56020041  bnel        $s0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x147CB8u;
    {
        const bool branch_taken_0x147cb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x147cb8) {
            ctx->pc = 0x147CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147CB8u;
            // 0x147cbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147DC0u;
            return;
        }
    }
    ctx->pc = 0x147CC0u;
    // 0x147cc0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x147CC0u;
    SET_GPR_U32(ctx, 31, 0x147CC8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x147CC0u, 0x147CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CC8u;
label_147cc8:
    // 0x147cc8: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x147cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x147ccc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x147cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147cd0: 0x26240370  addiu       $a0, $s1, 0x370
    ctx->pc = 0x147cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
    // 0x147cd4: 0x121083  sra         $v0, $s2, 2
    ctx->pc = 0x147cd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 2));
    // 0x147cd8: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147CD8u;
    {
        const bool branch_taken_0x147cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x147CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147CD8u;
        // 0x147cdc: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x147cd8) {
            ctx->pc = 0x147CECu;
            return;
        }
    }
    ctx->pc = 0x147CE0u;
    // 0x147ce0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x147ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x147ce4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x147ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x147ce8: 0x24440378  addiu       $a0, $v0, 0x378
    ctx->pc = 0x147ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 888));
    ctx->pc = 0x147cecu;
}
