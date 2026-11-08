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

// Function: entry_00147bc8
// Address: 0x147bc8 - 0x147c18
void entry_00147bc8_0x147bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147bc8_0x147bc8");
#endif

    switch (ctx->pc) {
        case 0x147be4u: goto label_147be4;
        case 0x147becu: goto label_147bec;
        default: break;
    }

    ctx->pc = 0x147bc8u;

    // 0x147bc8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x147bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x147bcc: 0x56020012  bnel        $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x147BCCu;
    {
        const bool branch_taken_0x147bcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x147bcc) {
            ctx->pc = 0x147BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147BCCu;
            // 0x147bd0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147C18u;
            return;
        }
    }
    ctx->pc = 0x147BD4u;
    // 0x147bd4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x147bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x147bd8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x147bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x147bdc: 0xc0416ee  jal         func_105BB8
    ctx->pc = 0x147BDCu;
    SET_GPR_U32(ctx, 31, 0x147BE4u);
    ctx->pc = 0x147BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147BDCu;
    // 0x147be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105BB8u, 0x147BDCu, 0x147BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BE4u;
label_147be4:
    // 0x147be4: 0xc06256e  jal         func_1895B8
    ctx->pc = 0x147BE4u;
    SET_GPR_U32(ctx, 31, 0x147BECu);
    ctx->pc = 0x1895B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1895B8u, 0x147BE4u, 0x147BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147BECu;
label_147bec:
    // 0x147bec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x147becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147bf0: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x147bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x147bf4: 0x246376f8  addiu       $v1, $v1, 0x76F8
    ctx->pc = 0x147bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30456));
    // 0x147bf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x147bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147bfc: 0xae250370  sw          $a1, 0x370($s1)
    ctx->pc = 0x147bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 5));
    // 0x147c00: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x147c00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c04: 0xae240250  sw          $a0, 0x250($s1)
    ctx->pc = 0x147c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 4));
    // 0x147c08: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x147c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
    // 0x147c0c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x147C0Cu;
    {
        const bool branch_taken_0x147c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147C0Cu;
        // 0x147c10: 0xac51015c  sw          $s1, 0x15C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c0c) {
            ctx->pc = 0x147DFCu;
            return;
        }
    }
    ctx->pc = 0x147C14u;
    // 0x147c14: 0x0  nop
    ctx->pc = 0x147c14u;
    // NOP
    ctx->pc = 0x147c18u;
}
