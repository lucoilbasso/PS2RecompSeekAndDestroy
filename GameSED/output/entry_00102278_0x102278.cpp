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

// Function: entry_00102278
// Address: 0x102278 - 0x1022ac
void entry_00102278_0x102278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102278_0x102278");
#endif

    switch (ctx->pc) {
        case 0x1022a8u: goto label_1022a8;
        default: break;
    }

    ctx->pc = 0x102278u;

    // 0x102278: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x102278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x10227c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x10227cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x102280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102284: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x102284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102288: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x102288u;
    {
        const bool branch_taken_0x102288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x102288) {
            ctx->pc = 0x10228Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102288u;
            // 0x10228c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1022ACu;
            return;
        }
    }
    ctx->pc = 0x102290u;
    // 0x102290: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102298: 0x24a51af8  addiu       $a1, $a1, 0x1AF8
    ctx->pc = 0x102298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6904));
    // 0x10229c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x10229cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x1022a0: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1022A0u;
    SET_GPR_U32(ctx, 31, 0x1022A8u);
    ctx->pc = 0x1022A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1022A0u;
    // 0x1022a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1022A0u, 0x1022A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1022A8u;
label_1022a8:
    // 0x1022a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1022a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1022acu;
}
