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

// Function: entry_00149860
// Address: 0x149860 - 0x1498bc
void entry_00149860_0x149860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149860_0x149860");
#endif

    switch (ctx->pc) {
        case 0x149898u: goto label_149898;
        default: break;
    }

    ctx->pc = 0x149860u;

    // 0x149860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x149860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149864: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x149864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149868: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x149868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14986c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x149870: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x149874: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x149878: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x149878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x14987c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x14987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x149880: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x149884: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x149884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x149888: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x149888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14988c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x14988cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149890: 0xc05250a  jal         func_149428
    ctx->pc = 0x149890u;
    SET_GPR_U32(ctx, 31, 0x149898u);
    ctx->pc = 0x149894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149890u;
    // 0x149894: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149428u, 0x149890u, 0x149898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149898u;
label_149898:
    // 0x149898: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x149898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14989c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14989Cu;
    {
        const bool branch_taken_0x14989c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1498A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14989Cu;
        // 0x1498a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14989c) {
            ctx->pc = 0x1498BCu;
            return;
        }
    }
    ctx->pc = 0x1498A4u;
    // 0x1498a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1498a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1498a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1498A8u;
    {
        const bool branch_taken_0x1498a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1498a8) {
            ctx->pc = 0x1498BCu;
            return;
        }
    }
    ctx->pc = 0x1498B0u;
    // 0x1498b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1498b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1498b4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1498b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1498b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1498b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1498bcu;
}
