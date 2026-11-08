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

// Function: entry_001d2ccc
// Address: 0x1d2ccc - 0x1d2d14
void entry_001d2ccc_0x1d2ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2ccc_0x1d2ccc");
#endif

    switch (ctx->pc) {
        case 0x1d2d0cu: goto label_1d2d0c;
        default: break;
    }

    ctx->pc = 0x1d2cccu;

    // 0x1d2ccc: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x1d2cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1d2cd0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D2CD0u;
    {
        const bool branch_taken_0x1d2cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2cd0) {
            ctx->pc = 0x1D2CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2CD0u;
            // 0x1d2cd4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D38u;
            return;
        }
    }
    ctx->pc = 0x1D2CD8u;
    // 0x1d2cd8: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1d2cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1d2cdc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D2CDCu;
    {
        const bool branch_taken_0x1d2cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CDCu;
        // 0x1d2ce0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cdc) {
            ctx->pc = 0x1D2D84u;
            return;
        }
    }
    ctx->pc = 0x1D2CE4u;
    // 0x1d2ce4: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1d2ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1d2ce8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2CE8u;
    {
        const bool branch_taken_0x1d2ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ce8) {
            ctx->pc = 0x1D2CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2CE8u;
            // 0x1d2cec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D30u;
            return;
        }
    }
    ctx->pc = 0x1D2CF0u;
    // 0x1d2cf0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1d2cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d2cf4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2CF4u;
    {
        const bool branch_taken_0x1d2cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CF4u;
        // 0x1d2cf8: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cf4) {
            ctx->pc = 0x1D2D14u;
            return;
        }
    }
    ctx->pc = 0x1D2CFCu;
    // 0x1d2cfc: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2CFCu;
    {
        const bool branch_taken_0x1d2cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2cfc) {
            ctx->pc = 0x1D2D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2CFCu;
            // 0x1d2d00: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D14u;
            return;
        }
    }
    ctx->pc = 0x1D2D04u;
    // 0x1d2d04: 0xc07517a  jal         func_1D45E8
    ctx->pc = 0x1D2D04u;
    SET_GPR_U32(ctx, 31, 0x1D2D0Cu);
    ctx->pc = 0x1D2D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D04u;
    // 0x1d2d08: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45E8u, 0x1D2D04u, 0x1D2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D0Cu;
label_1d2d0c:
    // 0x1d2d0c: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x1d2d0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2d10: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d2d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    ctx->pc = 0x1d2d14u;
}
